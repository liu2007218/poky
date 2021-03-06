include xorg-driver-common.inc

DEPENDS += "inputproto kbproto "

python add_xorg_abi_depends() {
    _add_xorg_abi_depends(d, "input")
}
PACKAGEFUNCS =+ "add_xorg_abi_depends"

FILES_${PN} += " ${libdir}/xorg/modules/input/*.so"
FILES_${PN}-dbg += " ${libdir}/xorg/modules/input/.debug"
