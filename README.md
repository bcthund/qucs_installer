# qucs_installer
## Description
This is a script I created for a system restore procedure during a fresh install for an upgrade from Ubuntu 18.04 to Kubuntu 20.04.

Qucs is a fantastic circuit simulator that I feel is superior to standard spice simulators in many ways. However there hasn't been an updated repository for Ubuntu in a long time and so I wanted to have a more automated method of compiling and installing it.

Each stage of the script will confirm if you want to continue, giving you the option to stop should errors occur. Pressing CTRL+C is captured and will result in the script automatically removing the temporary build directories.

Currently the script can successfully compile and install the basic Qucs application with full component library but cannot compile documents. I have never been able to get the documentation to compile from source due to missing packages:
<pre>
  octave-epstk
  texlive-math-extra
  pgf
</pre>

The script includes the option to install dependencies and compile documentation but in its current state will fail.

See also:
  * [fresh_install](https://github.com/bcthund/fresh_install)

## Usage
<pre>
Usage: qucs.sh &lt;options&gt;

Options:
  -h, --help            show this help message and exit
  -v, --verbose         print commands being run before running them
  -d, --debug           print commands to be run but do not execute them
</pre>

## Packages for Reference (installed automatically):
<u>**ADMS Dependencies**</u>
<pre>
  build-essential
  automake libtool
  gperf
  flex
  bison
  libxml2
  libxml2-dev
  libxml-libxml-perl
  libgd-perl
</pre>
<br>
<u>**Qucs Dependencies**</u>
<pre>
  libqt4-dev
  libqt4-qt3support
  automake
  libtool
  libtool-bin
  gperf
  flex
  bison
</pre>
<br>
<u>**Qucs Documentation Dependencies**</u>
<pre>
  doxygen
  octave
  octave-epstk
  latex2html
  texlive
  texlive-font-utils
  texlive-math-extra
  texlive-publishers
  texlive-science
  transfig
  gnuplot
  graphviz
  ps2eps
  pgf
  python-tk
</pre>

## Addons
<pre>
</pre>
