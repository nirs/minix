/* This file is automatically generated.  DO NOT EDIT! */
/* Generated from: 	NetBSD: mknative-gcc,v 1.61 2011/07/03 12:26:02 mrg Exp  */
/* Generated from: NetBSD: mknative.common,v 1.9 2007/02/05 18:26:01 apb Exp  */

#undef SYSROOT_SUFFIX_SPEC
#define SYSROOT_SUFFIX_SPEC "" \
"%{ml:" \
  "%{m3|m4-nofpu|m4-100-nofpu|m4-200-nofpu|m4-400|m4-500|m4-340|m4-300-nofpu|m4al|m4a-nofpu:/ml/m3;" \
  "m3e|m4-single-only|m4-100-single-only|m4-200-single-only|m4-300-single-only|m4a-single-only:/ml/m3e;" \
  "m4|m4-100|m4-200|m4-300|m4a:/ml/m4;" \
  ":/ml};" \
":" \
  "%{m3|m4-nofpu|m4-100-nofpu|m4-200-nofpu|m4-400|m4-500|m4-340|m4-300-nofpu|m4al|m4a-nofpu:/m3;" \
  "m3e|m4-single-only|m4-100-single-only|m4-200-single-only|m4-300-single-only|m4a-single-only:/m3e;" \
  "m4|m4-100|m4-200|m4-300|m4a:/m4;" \
  ":}}"