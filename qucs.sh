#!/bin/bash
grey='\e[0m\e[37m'
GREY='\e[1m\e[90m'
red='\e[0m\e[91m'
RED='\e[1m\e[31m'
green='\e[0m\e[92m'
GREEN='\e[1m\e[32m'
yellow='\e[0m\e[93m'
YELLOW='\e[1m\e[33m'
purple='\e[0m\e[95m'
PURPLE='\e[1m\e[35m'
white='\e[0m\e[37m'
WHITE='\e[1m\e[37m'
blue='\e[0m\e[94m'
BLUE='\e[1m\e[34m'
cyan='\e[0m\e[96m'
CYAN='\e[1m\e[36m'
NC='\e[0m\e[39m'

# Save the working directory of the script
working_dir=$PWD

# Setup command
DEBUG=false
VERBOSE=false
FLAGS=""
OTHER_ARGUMENTS=""

for arg in "$@"
do
    case $arg in
        -d|--debug)
        DEBUG=true
        FLAGS="$FLAGS-d "
        shift # Remove --debug from processing
        ;;
        -v|--verbose)
        VERBOSE=true
        FLAGS="$FLAGS-v "
        shift # Remove --verbose from processing
        ;;
        --in-testing)
        IN_TESTING=true
        FLAGS="$FLAGS--in-testing "
        shift # Remove from processing
        ;;
        -h|--help)
        echo -e "${WHITE}"
        echo -e "Usage: $0 <options>"
        echo -e
        echo -e "Options:"
        echo -e "  -h, --help            show this help message and exit"
        echo -e "  -v, --verbose         print commands being run before running them"
        echo -e "  -d, --debug           print commands to be run but do not execute them"
        echo -e "  --in-testing          Enable use of in-testing features"
        echo -e "${NC}"
        exit
        shift # Remove from processing
        ;;
        *)
        OTHER_ARGUMENTS="$OTHER_ARGUMENTS$1 "
        echo -e "${RED}Unknown argument: $1${NC}"
        exit
        shift # Remove generic argument from processing
        ;;
    esac
done

cmd(){
    if [ "$VERBOSE" = true ] || [ "$DEBUG" = true ]; then echo -e ">> ${WHITE}$1${NC}"; fi;
    if [ "$DEBUG" = false ]; then eval $1; fi;
}

# trap ctrl-c and call ctrl_c()
ctrl_c() { echo -e; echo -e; exit 0; }
trap ctrl_c INT

echo -e
printf "${YELLOW}WARNING! Compiling ADMS when the working directory has any spaces in it is known to fail.${NC}\n"
echo -e
echo -e -n "${PURPLE}Install qucs (y/n/a)? ${NC}"
read answer
echo -e
if [ "$answer" != "${answer#[YyAa]}" ] ;then
    if [ "$answer" != "${answer#[Aa]}" ] ;then answer2="y"; else answer2=""; fi

    # PPAs
        printf "${PURPLE}Source [Qucs]: ${BLUE}Add Additional PPAs${NC}"
        if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
        if [ "$answer2" != "${answer2#[Yy]}" ] ;then
            cmd "sudo add-apt-repository -y ppa:rock-core/qt4"
        fi

    # Dependencies
        echo -e
        printf "${PURPLE}Source [Qucs]: ${BLUE}Install ADMS Dependencies${NC}"
        if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
        if [ "$answer2" != "${answer2#[Yy]}" ] ;then
            cmd "sudo apt install build-essential automake libtool gperf flex bison libxml2 libxml2-dev libxml-libxml-perl libgd-perl"
        fi
        
        echo -e
        printf "${PURPLE}Source [Qucs]: ${BLUE}Install QUCS Dependencies${NC}"
        if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
        if [ "$answer2" != "${answer2#[Yy]}" ] ;then
            #libqtcore4 - might be needed to actually run if it compiles
            cmd "sudo apt install libqt4-dev libqt4-qt3support automake libtool libtool-bin gperf flex bison"
        fi
         
        # Documentation is broken, requires missing packages that aren't easy to get back
        #  octave-epstk
        #  texlive-math-extra
        #  pgf
        #echo -e
        #printf "${PURPLE}Source [Qucs]: ${BLUE}Install QUCS Documentation Dependencies${NC}"
        #if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
        #if [ "$answer2" != "${answer2#[Yy]}" ] ;then
        #    cmd "sudo apt install doxygen octave octave-epstk latex2html texlive texlive-font-utils texlive-math-extra texlive-publishers texlive-science transfig gnuplot graphviz ps2eps pgf python-tk"
        #fi

    # Create Directories
        echo -e
        printf "${PURPLE}Source [Qucs]: ${BLUE}Create Temp Directories${NC}\n"
        if [ -d "./src/qucs_tmp" ] ;then
            printf "${BLUE}Build directory already exists, remove first? ${NC}\n"
            printf "${YELLOW}If you leave the directoy, it will be used as-is for building.${NC}\n"
            printf "${BLUE}Remove Directory${NC}"
            if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
            if [ "$answer2" != "${answer2#[Yy]}" ] ;then
                cmd "sudo rm -rf ./src/qucs_tmp"
            fi
        fi

    # Grab Source
        if [ ! -d "./src/qucs_tmp" ] ;then
            echo -e
            echo -e -n "${PURPLE}Source [Qucs]: ${BLUE}Use provided source snapshot${NC}"
            if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
            cmd "mkdir -pv ./src/qucs_tmp/adms/build"
            cmd "mkdir -pv ./src/qucs_tmp/qucs/build"
            if [ "$answer2" != "${answer2#[Yy]}" ] ;then
                cmd "ln -sr ./src/qucs-src/adms-2.3.6/ ./src/qucs_tmp/adms/git"
                cmd "cp --preserve=all -rT ./src/qucs-src/qucs-0.0.20 ./src/qucs_tmp/qucs/build"
            else
                cmd "git clone https://github.com/Qucs/ADMS.git ./src/qucs_tmp/adms/git"
                cmd "git clone https://github.com/Qucs/qucs.git ./src/qucs_tmp/qucs/build"
            fi
        fi

    # ADMS: build and install
        echo -e
        printf "${PURPLE}Source [Qucs]: ${BLUE}ADMS: Entering './src/qucs_tmp/adms/build'${NC}\n"
        cmd "cd ./src/qucs_tmp/adms/build"
        cmd "echo -e $PWD"
        cmd "ls -al"
        ctrl_c() {
            echo -e;
            cmd "cd '${working_dir}'";
            cmd "sudo rm -rf ./src/qucs_tmp";
            echo -e;
            exit 0;
        }

        echo -e
        printf "${PURPLE}Source [Qucs]: ${BLUE}ADMS: configure${NC}"
        if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
        if [ "$answer2" != "${answer2#[Yy]}" ] ;then
            cmd "../git/configure"
        fi
        
        echo -e
        printf "${PURPLE}Source [Qucs]: ${BLUE}ADMS: make${NC}"
        if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
        if [ "$answer2" != "${answer2#[Yy]}" ] ;then
            cmd "make"
        fi
        
        echo -e
        printf "${PURPLE}Source [Qucs]: ${BLUE}ADMS: Run 'make install'${NC}"
        if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
        if [ "$answer2" != "${answer2#[Yy]}" ] ;then
            cmd "sudo make install"
        fi
        
        echo -e
        printf "${PURPLE}Source [Qucs]: ${BLUE}ADMS: Run 'ldconfig'${NC}"
        if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
        if [ "$answer2" != "${answer2#[Yy]}" ] ;then
            cmd "sudo ldconfig"
        fi
        
        echo -e
        printf "${PURPLE}Source [Qucs]: ${BLUE}ADMS: Leaving './src/qucs_tmp/adms/build'${NC}\n"
        cmd "cd '${working_dir}'";
        ctrl_c() { echo -e; echo -e; exit 0; }

        
    # QUCS: build and install
        echo -e
        printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs: Entering './src/qucs_tmp/qucs/build'${NC}\n"
        cmd "cd ./src/qucs_tmp/qucs/build/"
        cmd "echo -e $PWD"
        cmd "ls -al"
        ctrl_c() {
            echo -e;
            cmd "cd '${working_dir}'";
            cmd "sudo rm -rf ./src/qucs_tmp";
            echo -e;
            exit 0;
        }
        
        echo -e
        printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs: bootstrap${NC}"
        if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
        if [ "$answer2" != "${answer2#[Yy]}" ] ;then
            cmd "./bootstrap"
        fi
        
    # Compile qucs-core tools only:
        echo -e
        printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs-core${NC}"
        if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
        if [ "$answer2" != "${answer2#[Yy]}" ] ;then
            cmd "cd qucs-core"
            echo -e
            printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs-core: configure${NC}"
            if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
            if [ "$answer2" != "${answer2#[Yy]}" ] ;then
                cmd "./configure"
            fi
            
            echo -e
            printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs-core: make${NC}"
            if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
            if [ "$answer2" != "${answer2#[Yy]}" ] ;then
                cmd "make"
            fi
            
            echo -e
            printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs-core: make install${NC}"
            if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
            if [ "$answer2" != "${answer2#[Yy]}" ] ;then
                cmd "sudo make install"
            fi
            
            cmd "cd .."
        fi

        
    # Compile Qucs GUI tools only:
        echo -e
        printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs-gui${NC}"
        if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
        if [ "$answer2" != "${answer2#[Yy]}" ] ;then
            cmd "cd qucs"
            echo -e
            printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs-gui: configure${NC}"
            if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
            if [ "$answer2" != "${answer2#[Yy]}" ] ;then
                cmd "./configure"
            fi
            
            echo -e
            printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs-gui: make${NC}"
            if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
            if [ "$answer2" != "${answer2#[Yy]}" ] ;then
                cmd "make"
            fi
            
            echo -e
            printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs-gui: make install${NC}"
            if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
            if [ "$answer2" != "${answer2#[Yy]}" ] ;then
                cmd "sudo make install"
            fi
            
            cmd "cd .."
        fi
        
    # Compile qucs-doc documentation only:
#         echo -e
#         printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs-doc${NC}"
#         if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
#         if [ "$answer2" != "${answer2#[Yy]}" ] ;then
#             cmd "cd qucs-doc"
#             echo -e
#             printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs-doc: configure${NC}"
#             if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
#             if [ "$answer2" != "${answer2#[Yy]}" ] ;then
#                 cmd "./configure"
#             fi
#             
#             echo -e
#             printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs-doc: make${NC}"
#             if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
#             if [ "$answer2" != "${answer2#[Yy]}" ] ;then
#                 cmd "make"
#             fi
#             
#             echo -e
#             printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs-doc: make install${NC}"
#             if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
#             if [ "$answer2" != "${answer2#[Yy]}" ] ;then
#                 cmd "sudo make install"
#             fi
#             
#             cmd "cd .."
#         fi
        
    # Bootstrap and build everything
        echo -e
        printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs ALL${NC}"
        if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
        if [ "$answer2" != "${answer2#[Yy]}" ] ;then
            cmd "cd qucs"
            echo -e
            printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs: configure${NC}"
            if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
            if [ "$answer2" != "${answer2#[Yy]}" ] ;then
                #echo -e
                #printf "${PURPLE}Source [Qucs]: ${BLUE}Enable documentation${NC}"
                #if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
                #if [ "$answer2" != "${answer2#[Yy]}" ] ;then
                #    cmd "./configure"
                #else
                    cmd "./configure --disable-doc"
                #fi
            fi
            
            echo -e
            printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs: make${NC}"
            if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
            if [ "$answer2" != "${answer2#[Yy]}" ] ;then
                cmd "make"
            fi
            
            echo -e
            printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs: make install${NC}"
            if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
            if [ "$answer2" != "${answer2#[Yy]}" ] ;then
                cmd "sudo make install"
            fi
            
            cmd "cd .."
        fi
        
        
        echo -e
        printf "${PURPLE}Source [Qucs]: ${BLUE}Qucs: Leaving './src/qucs_tmp/qucs/build'${NC}\n"
        cmd "cd '${working_dir}'";
        ctrl_c() {
            echo -e;
            cmd "sudo rm -rf ./src/qucs_tmp";
            echo -e;
            exit 0;
        }

        
    # Removing build files
        echo -e
        printf "${PURPLE}Source [Qucs]: ${BLUE}Remove './src/qucs_tmp'${NC}"
        if [ "$answer" != "${answer#[Yy]}" ] ;then printf " ${GREEN}(y/n)? ${NC} "; read answer2; else echo; fi
        if [ "$answer2" != "${answer2#[Yy]}" ] ;then
             cmd "sudo rm -rf ./src/qucs_tmp";
        fi
        

    # ======================
    #     ADMS
    # ======================
    # Pull
#         https://github.com/Qucs/ADMS.git
    
    # Dependencies
#         sudo apt install build-essential
#         sudo apt install automake libtool gperf flex bison
#         sudo apt install libxml2 libxml2-dev
#         sudo apt install libxml-libxml-perl
#         sudo apt install libgd-perl
    
    # Cmake
#         tar xvfz adms-x.x.x.tar.gz
#         cd adms-x.x.x
#         mkdir build; cd build
#         cmake .. -DCMAKE_INSTALL_PREFIX=[/install/location/]
#         make install


    # ======================
    #     qucs-core
    # ======================
    # Pull
#         https://github.com/Qucs/qucs.git
        
    # Dependencies
#         sudo apt install build-essential
#         sudo apt install libqt4-dev libqt4-qt3support
#         sudo apt install automake libtool libtool-bin gperf flex bison
        
    # Documentation Dependencies (else use --disable-doc)
#         sudo apt install doxygen
#         sudo apt install octave octave-epstk
#         sudo apt install latex2html
#         sudo apt install texlive texlive-font-utils texlive-math-extra
#         sudo apt install texlive-publishers texlive-science
#         sudo apt install transfig gnuplot graphviz
#         sudo apt install ps2eps pgf python-tk
        
    # Bootstrap/Build everything
#         cd qucs
#         ./bootstrap
#         ./configure
#         make
#         sudo make install
        
    # Compile Qucs GUI tools only:
#         cd qucs
#         [./bootstrap] #if not executed in the top level
#         ./configure
#         make
#         sudo make install
        
    # Compile qucs-core tools only:
#         cd qucs-core
#         [./bootstrap] #if not executed in the top level
#         ./configure
#         make
#         sudo make install
        
    # Compile qucs-doc documentation only:
#         cd qucs-doc
#         [./bootstrap] #if not executed in the top level
#         ./configure
#         make
#         sudo make install
    
#     ctrl_c() { echo -e; echo -e; exit 0; }
    
fi
