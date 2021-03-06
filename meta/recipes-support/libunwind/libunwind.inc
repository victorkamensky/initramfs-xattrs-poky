SUMMARY = "Library for obtaining the call-chain of a program"
DESCRIPTION = "a portable and efficient C programming interface (API) to determine the call-chain of a program"
HOMEPAGE = "http://www.nongnu.org/libunwind"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://COPYING;beginline=3;md5=3fced11d6df719b47505837a51c16ae5"
DEPENDS += "libatomic-ops"

inherit autotools

PACKAGECONFIG ??= ""
PACKAGECONFIG[lzma] = "--enable-minidebuginfo,--disable-minidebuginfo,xz"

EXTRA_OECONF_arm = "--enable-debug-frame"
EXTRA_OECONF_aarch64 = "--enable-debug-frame"

SECURITY_LDFLAGS_append_libc-musl = " -lssp_nonshared -lssp"

BBCLASSEXTEND = "native"
