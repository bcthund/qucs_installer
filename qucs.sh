#!/bin/sh
clear
grey='\033[1;30m'
red='\033[0;31m'
RED='\033[1;31m'
green='\033[0;32m'
GREEN='\033[1;32m'
yellow='\033[0;33m'
YELLOW='\033[1;33m'
purple='\033[0;35m'
PURPLE='\033[1;35m'
white='\033[0;37m'
WHITE='\033[1;37m'
blue='\033[0;34m'
BLUE='\033[1;34m'
cyan='\033[0;36m'
CYAN='\033[1;36m'
NC='\033[0m'

# Save the working directory of the script
working_dir=$PWD

if [ "$1" != "${1#[debug]}" ] ;then
    cmd(){ echo ">> ${WHITE}$1${NC}"; }
    echo "${RED}DEBUG: Commands will be echoed to console${NC}"
else
    cmd(){ eval $1; }
    echo "${RED}LIVE: Actions will be performed! Use caution.${NC}"
fi

# trap ctrl-c and call ctrl_c()
ctrl_c() { echo; echo; exit 0; }
trap ctrl_c INT

echo
echo "${green}==========================================================================${NC}"
echo "${yellow}\tInstall from Source${NC}"
echo "${green}--------------------------------------------------------------------------${NC}"
echo -n "${CYAN}Install qucs (y/n)? ${NC}"
read answer
echo
if [ "$answer" != "${answer#[Yy]}" ] ;then

    # PPAs
        printf "${BLUE}Add Additional PPAs${NC}"
         echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
            cmd "sudo add-apt-repository -y ppa:rock-core/qt4"
         fi

    # Dependencies
        echo
         printf "${BLUE}Install ADMS Dependencies${NC}"
         echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
            cmd "sudo apt install build-essential automake libtool gperf flex bison libxml2 libxml2-dev libxml-libxml-perl libgd-perl"
         fi
         
         echo
         printf "${BLUE}Install QUCS Dependencies${NC}"
         echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
            #libqtcore4 - might be needed to actually run if it compiles
            cmd "sudo apt install libqt4-dev libqt4-qt3support automake libtool libtool-bin gperf flex bison"
         fi
         
         # Documentation is broken, requires missing packages that aren't easy to get back
         #  octave-epstk
         #  texlive-math-extra
         #  pgf
         echo
         printf "${BLUE}Install QUCS Documentation Dependencies${NC}"
         echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
            cmd "sudo apt install doxygen octave octave-epstk latex2html texlive texlive-font-utils texlive-math-extra texlive-publishers texlive-science transfig gnuplot graphviz ps2eps pgf python-tk"
         fi

    # Create Directories
         echo
         printf "${BLUE}Create Temp Directories${NC}\n"
         if [ -d "./src/qucs_tmp" ] ;then
            printf "${BLUE}Build directory already exists, remove first? ${NC}\n"
            printf "${YELLOW}If you leave the directoy, it will be used as-is for building.${NC}\n"
            printf "${BLUE}Remove Directory? ${NC}"
            read answer
            if [ "$answer" != "${answer#[Yy]}" ] ;then
                cmd "sudo rm -rf ./src/qucs_tmp"
            fi
        fi

    # Grab Source
        if [ ! -d "./src/qucs_tmp" ] ;then
            echo
            printf "${BLUE}Pull current ADMS source${NC}"
            echo -n "${CYAN} (y/n)? ${NC}"; read answer;
            cmd "mkdir -pv ./src/qucs_tmp/adms/build"
            cmd "mkdir -pv ./src/qucs_tmp/qucs/build"
            if [ "$answer" != "${answer#[Yy]}" ] ;then
                cmd "git clone https://github.com/Qucs/ADMS.git ./src/qucs_tmp/adms/git"
            else
                cmd "ln -sr ./src/qucs-src/adms-2.3.6/ ./src/qucs_tmp/adms/git"
            fi
            
            echo
            printf "${BLUE}Pull current Qucs source${NC}"
            echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
                #cmd "git clone https://github.com/Qucs/qucs.git ./src/qucs_tmp/qucs/git"
                cmd "git clone https://github.com/Qucs/qucs.git ./src/qucs_tmp/qucs/build"
            else
                #cmd "ln -sr ./src/qucs-src/qucs-0.0.20/ ./src/qucs_tmp/qucs/git"
                cmd "cp --preserve=all -rT ./src/qucs-src/qucs-0.0.20 ./src/qucs_tmp/qucs/build"
            fi
        fi

    # ADMS: build and install
        echo
        printf "${BLUE}ADMS: Entering './src/qucs_tmp/adms/build'${NC}\n"
        cmd "cd ./src/qucs_tmp/adms/build"
        cmd "echo $PWD"
        cmd "ls -al"
        ctrl_c() {
            echo;
            cmd "cd $working_dir";
            cmd "rm -rf ./src/qucs_tmp";
            echo;
            exit 0;
        }
        
#         echo
#         printf "${BLUE}ADMS: Run 'cmake'${NC}"
#         echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
#             cmd "cmake ../git/ -DCMAKE_INSTALL_PREFIX=[/install/location/]"
#             cmd "cmake ../git/"
#         fi

        echo
        printf "${BLUE}ADMS: configure${NC}"
        echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
            cmd "../git/configure"
        fi
        
        echo
        printf "${BLUE}ADMS: make${NC}"
        echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
            cmd "make"
        fi
        
        echo
        printf "${BLUE}ADMS: Run 'make install'${NC}"
        echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
            cmd "sudo make install"
        fi
        
        echo
        printf "${BLUE}ADMS: Run 'ldconfig'${NC}"
        echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
            cmd "sudo ldconfig"
        fi
        
        echo
        printf "${BLUE}ADMS: Leaving './src/qucs_tmp/adms/build'${NC}\n"
        cmd "cd $working_dir";
        ctrl_c() { echo; echo; exit 0; }

        
    # QUCS: build and install
        echo
        printf "${BLUE}Qucs: Entering './src/qucs_tmp/qucs/build'${NC}\n"
        cmd "cd ./src/qucs_tmp/qucs/build/"
        cmd "echo $PWD"
        cmd "ls -al"
        ctrl_c() {
            echo;
            cmd "cd $working_dir";
            cmd "sudo rm -rf ./src/qucs_tmp";
            echo;
            exit 0;
        }
        
        echo
        printf "${BLUE}Qucs: bootstrap${NC}"
        echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
            cmd "./bootstrap"
        fi
        
    # Compile qucs-core tools only:
        echo
        printf "${BLUE}Qucs-core${NC}"
        echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
            cmd "cd qucs-core"
            echo
            printf "${BLUE}Qucs-core: configure${NC}"
            echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
                cmd "./configure"
            fi
            
            echo
            printf "${BLUE}Qucs-core: make${NC}"
            echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
                cmd "make"
            fi
            
            echo
            printf "${BLUE}Qucs-core: make install${NC}"
            echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
                cmd "sudo make install"
            fi
            
            cmd "cd .."
        fi

        
    # Compile Qucs GUI tools only:
        echo
        printf "${BLUE}Qucs-gui${NC}"
        echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
            cmd "cd qucs"
            echo
            printf "${BLUE}Qucs-gui: configure${NC}"
            echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
                cmd "./configure"
            fi
            
            echo
            printf "${BLUE}Qucs-gui: make${NC}"
            echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
                cmd "make"
            fi
            
            echo
            printf "${BLUE}Qucs-gui: make install${NC}"
            echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
                cmd "sudo make install"
            fi
            
            cmd "cd .."
        fi
        
    # Compile qucs-doc documentation only:
        echo
        printf "${BLUE}Qucs-doc${NC}"
        echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
            cmd "cd qucs-doc"
            echo
            printf "${BLUE}Qucs-doc: configure${NC}"
            echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
                cmd "./configure"
            fi
            
            echo
            printf "${BLUE}Qucs-doc: make${NC}"
            echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
                cmd "make"
            fi
            
            echo
            printf "${BLUE}Qucs-doc: make install${NC}"
            echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
                cmd "sudo make install"
            fi
            
            cmd "cd .."
        fi
        
    # Bootstrap and build everything
        echo
        printf "${BLUE}Qucs ALL${NC}"
        echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then       
            cmd "cd qucs"
            echo
            printf "${BLUE}Qucs: configure${NC}"
            echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
                echo
                printf "${BLUE}Enable documentation${NC}"
                echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
                    cmd "./configure"
                else
                    cmd "./configure --disable-doc"
                fi
            fi
            
            echo
            printf "${BLUE}Qucs: make${NC}"
            echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
                cmd "make"
            fi
            
            echo
            printf "${BLUE}Qucs: make install${NC}"
            echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
                cmd "sudo make install"
            fi
            
            cmd "cd .."
        fi
        
        
        echo
        printf "${BLUE}Qucs: Leaving './src/qucs_tmp/qucs/build'${NC}\n"
        cmd "cd $working_dir";
        ctrl_c() {
            echo;
            cmd "rm -rf ./src/qucs_tmp";
            echo;
            exit 0;
        }

        
    # Removing build files
         echo
         printf "${BLUE}Remove './src/qucs_tmp'${NC}"
         echo -n "${CYAN} (y/n)? ${NC}"; read answer; if [ "$answer" != "${answer#[Yy]}" ] ;then
             cmd "rm -rf ./src/qucs_tmp";
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
    
#     ctrl_c() { echo; echo; exit 0; }
    
fi
