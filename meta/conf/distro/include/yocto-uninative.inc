#
# This include points at uninative tarballs generated and maintained
# by the Yocto Project. These file can be included by distros if they
# want to use/maintain a unified sstate feed for native/cross artefacts
# rather than the feeds having native/cross artefacts which are specific
# to the distro running on the build machine.
#

UNINATIVE_MAXGLIBCVERSION = "2.29"

UNINATIVE_URL ?= "http://downloads.yoctoproject.org/releases/uninative/2.5/"
UNINATIVE_CHECKSUM[aarch64] ?= "43b3fe10febac293d95a7795775c25987e4a80c65b5fd751e96ca54683791cf4"
UNINATIVE_CHECKSUM[i686] ?= "240dc9b021ff744a1a27da67a80ce7e390c14d70fed5668c7800a58d7fe829a4"
UNINATIVE_CHECKSUM[x86_64] ?= "3af47b86059fccdf7253ecdb4e691c7a6abd7b52d086d7cbac2eca03893a6b62"
