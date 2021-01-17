#pragma once

ZEN3_FUNCDEF(vmulpd,				2xmm2xmm)
ZEN3_FUNCDEF(vmulpd,				2ymm2ymm)
ZEN3_FUNCDEF(vmulps,				2xmm2xmm)
ZEN3_FUNCDEF(vmulps,				2ymm2ymm)
ZEN3_FUNCDEF(vmulsd,				2xmm2xmm)
ZEN3_FUNCDEF(vmulss,				2xmm2xmm)
ZEN3_FUNCDEF(vrcpps,				xmm2xmm)
ZEN3_FUNCDEF(vrcpps,				ymm2ymm)
ZEN3_FUNCDEF(vrcpss,				2xmm2xmm)
ZEN3_FUNCDEF(vrsqrtps,				xmm2xmm)
ZEN3_FUNCDEF(vrsqrtps,				ymm2ymm)
ZEN3_FUNCDEF(vrsqrtss,				2xmm2xmm)
ZEN3_FUNCDEF(vpblendvb,				3xmm2xmm)
ZEN3_FUNCDEF(vpblendvb,				3ymm2ymm)
ZEN3_FUNCDEF(vblendvpd,				3xmm2xmm)
ZEN3_FUNCDEF(vblendvpd,				3ymm2ymm)
ZEN3_FUNCDEF(vblendvps,				3xmm2xmm)
ZEN3_FUNCDEF(vblendvps,				3ymm2ymm)
ZEN3_FUNCDEF(vpblendvb,				3xmm2xmmRot)
ZEN3_FUNCDEF(vpblendvb,				3ymm2ymmRot)
ZEN3_FUNCDEF(vblendvpd,				3xmm2xmmRot)
ZEN3_FUNCDEF(vblendvpd,				3ymm2ymmRot)
ZEN3_FUNCDEF(vblendvps,				3xmm2xmmRot)
ZEN3_FUNCDEF(vblendvps,				3ymm2ymmRot)
ZEN3_FUNCDEF(vfmaddsub132pd,		2xmm2xmm)
ZEN3_FUNCDEF(vfmaddsub132pd,		2ymm2ymm)
ZEN3_FUNCDEF(vfmaddsub132ps,		2xmm2xmm)
ZEN3_FUNCDEF(vfmaddsub132ps,		2ymm2ymm)
ZEN3_FUNCDEF(vfmadd132sd,			2xmm2xmm)
ZEN3_FUNCDEF(vfmadd132ss,			2xmm2xmm)
ZEN3_FUNCDEF(vfmaddsub213pd,		2xmm2xmm)
ZEN3_FUNCDEF(vfmaddsub213pd,		2ymm2ymm)
ZEN3_FUNCDEF(vfmaddsub213ps,		2xmm2xmm)
ZEN3_FUNCDEF(vfmaddsub213ps,		2ymm2ymm)
ZEN3_FUNCDEF(vfmadd213sd,			2xmm2xmm)
ZEN3_FUNCDEF(vfmadd213ss,			2xmm2xmm)
ZEN3_FUNCDEF(vfmaddsub231pd,		2xmm2xmm)
ZEN3_FUNCDEF(vfmaddsub231pd,		2ymm2ymm)
ZEN3_FUNCDEF(vfmaddsub231ps,		2xmm2xmm)
ZEN3_FUNCDEF(vfmaddsub231ps,		2ymm2ymm)
ZEN3_FUNCDEF(vfmadd231sd,			2xmm2xmm)
ZEN3_FUNCDEF(vfmadd231ss,			2xmm2xmm)

ZEN3_FUNCDEF(vfmaddsub132pd,		2xmm2xmmRot)
ZEN3_FUNCDEF(vfmaddsub132pd,		2ymm2ymmRot)
ZEN3_FUNCDEF(vfmaddsub132ps,		2xmm2xmmRot)
ZEN3_FUNCDEF(vfmaddsub132ps,		2ymm2ymmRot)
ZEN3_FUNCDEF(vfmadd132sd,			2xmm2xmmRot)
ZEN3_FUNCDEF(vfmadd132ss,			2xmm2xmmRot)
ZEN3_FUNCDEF(vfmaddsub213pd,		2xmm2xmmRot)
ZEN3_FUNCDEF(vfmaddsub213pd,		2ymm2ymmRot)
ZEN3_FUNCDEF(vfmaddsub213ps,		2xmm2xmmRot)
ZEN3_FUNCDEF(vfmaddsub213ps,		2ymm2ymmRot)
ZEN3_FUNCDEF(vfmadd213sd,			2xmm2xmmRot)
ZEN3_FUNCDEF(vfmadd213ss,			2xmm2xmmRot)
ZEN3_FUNCDEF(vfmaddsub231pd,		2xmm2xmmRot)
ZEN3_FUNCDEF(vfmaddsub231pd,		2ymm2ymmRot)
ZEN3_FUNCDEF(vfmaddsub231ps,		2xmm2xmmRot)
ZEN3_FUNCDEF(vfmaddsub231ps,		2ymm2ymmRot)
ZEN3_FUNCDEF(vfmadd231sd,			2xmm2xmmRot)
ZEN3_FUNCDEF(vfmadd231ss,			2xmm2xmmRot)

ZEN3_FUNCDEF(vaddpd,				2xmm2xmm)
ZEN3_FUNCDEF(vaddpd,				2ymm2ymm)
ZEN3_FUNCDEF(vaddps,				2xmm2xmm)
ZEN3_FUNCDEF(vaddps,				2ymm2ymm)
ZEN3_FUNCDEF(vaddsd,				2xmm2xmm)
ZEN3_FUNCDEF(vaddss,				2xmm2xmm)
ZEN3_FUNCDEF(vsubpd,				2xmm2xmm)
ZEN3_FUNCDEF(vsubpd,				2ymm2ymm)
ZEN3_FUNCDEF(vsubps,				2xmm2xmm)
ZEN3_FUNCDEF(vsubps,				2ymm2ymm)
ZEN3_FUNCDEF(vsubsd,				2xmm2xmm)
ZEN3_FUNCDEF(vsubss,				2xmm2xmm)
ZEN3_FUNCDEF(vaddsubpd,				2xmm2xmm)
ZEN3_FUNCDEF(vaddsubpd,				2ymm2ymm)
ZEN3_FUNCDEF(vaddsubps,				2xmm2xmm)
ZEN3_FUNCDEF(vaddsubps,				2ymm2ymm)
ZEN3_FUNCDEF(vroundpd,				xmmi2xmm)
ZEN3_FUNCDEF(vroundpd,				ymmi2ymm)
ZEN3_FUNCDEF(vroundps,				xmmi2xmm)
ZEN3_FUNCDEF(vroundps,				ymmi2ymm)
ZEN3_FUNCDEF(vroundsd,				2xmmi2xmm)
ZEN3_FUNCDEF(vroundss,				2xmmi2xmm)
ZEN3_FUNCDEF(vcvtps2dq,				xmm2xmm)
ZEN3_FUNCDEF(vcvtps2dq,				ymm2ymm)
ZEN3_FUNCDEF(vcvtps2pd,				xmm2xmm)
ZEN3_FUNCDEF(vcvtpd2ps,				xmm2xmm)
ZEN3_FUNCDEF(vcvtpd2dq,				xmm2xmm)
ZEN3_FUNCDEF(vcvtdq2ps,				xmm2xmm)
ZEN3_FUNCDEF(vcvtdq2ps,				ymm2ymm)
ZEN3_FUNCDEF(vcvtdq2pd,				xmm2xmm)
ZEN3_FUNCDEF(vcvtps2ph,				xmmi2xmm)
ZEN3_FUNCDEF(vcvtph2ps,				xmm2xmm)
ZEN3_FUNCDEF(vcvtss2sd,				2xmm2xmm)
ZEN3_FUNCDEF(vcvtsd2ss,				2xmm2xmm)

ZEN3_FUNCDEF(vminpd,				2xmm2xmm)
ZEN3_FUNCDEF(vminpd,				2ymm2ymm)
ZEN3_FUNCDEF(vminps,				2xmm2xmm)
ZEN3_FUNCDEF(vminps,				2ymm2ymm)
ZEN3_FUNCDEF(vminsd,				2xmm2xmm)
ZEN3_FUNCDEF(vminss,				2xmm2xmm)
ZEN3_FUNCDEF(vmaxpd,				2xmm2xmm)
ZEN3_FUNCDEF(vmaxpd,				2ymm2ymm)
ZEN3_FUNCDEF(vmaxps,				2xmm2xmm)
ZEN3_FUNCDEF(vmaxps,				2ymm2ymm)
ZEN3_FUNCDEF(vmaxsd,				2xmm2xmm)
ZEN3_FUNCDEF(vmaxss,				2xmm2xmm)
ZEN3_FUNCDEF(vcmpeqpd,				2xmm2xmm)
ZEN3_FUNCDEF(vcmpeqpd,				2ymm2ymm)
ZEN3_FUNCDEF(vcmpeqps,				2xmm2xmm)
ZEN3_FUNCDEF(vcmpeqps,				2ymm2ymm)
ZEN3_FUNCDEF(vcmpeqsd,				2xmm2xmm)
ZEN3_FUNCDEF(vcmpeqss,				2xmm2xmm)

ZEN3_FUNCDEF(vandpd,				2xmm2xmm)
ZEN3_FUNCDEF(vandpd,				2ymm2ymm)
ZEN3_FUNCDEF(vandps,				2xmm2xmm)
ZEN3_FUNCDEF(vandps,				2ymm2ymm)
ZEN3_FUNCDEF(vandnpd,				2xmm2xmmRot)
ZEN3_FUNCDEF(vandnpd,				2ymm2ymmRot)
ZEN3_FUNCDEF(vandnps,				2xmm2xmmRot)
ZEN3_FUNCDEF(vandnps,				2ymm2ymmRot)
ZEN3_FUNCDEF(vorpd,					2xmm2xmm)
ZEN3_FUNCDEF(vorpd,					2ymm2ymm)
ZEN3_FUNCDEF(vorps,					2xmm2xmm)
ZEN3_FUNCDEF(vorps,					2ymm2ymm)
ZEN3_FUNCDEF(vxorpd,				2xmm2xmmRot)
ZEN3_FUNCDEF(vxorpd,				2ymm2ymmRot)
ZEN3_FUNCDEF(vxorps,				2xmm2xmmRot)
ZEN3_FUNCDEF(vxorps,				2ymm2ymmRot)
ZEN3_FUNCDEF(vblendpd,				2xmmi2xmm)
ZEN3_FUNCDEF(vblendpd,				2ymmi2ymm)
ZEN3_FUNCDEF(vblendps,				2xmmi2xmm)
ZEN3_FUNCDEF(vblendps,				2ymmi2ymm)

ZEN3_FUNCDEF(vpand,					2xmm2xmm)
ZEN3_FUNCDEF(vpand,					2ymm2ymm)
ZEN3_FUNCDEF(vpandn,				2xmm2xmmRot)
ZEN3_FUNCDEF(vpandn,				2ymm2ymmRot)
ZEN3_FUNCDEF(vpor,					2xmm2xmm)
ZEN3_FUNCDEF(vpor,					2ymm2ymm)
ZEN3_FUNCDEF(vpxor,					2xmm2xmmRot)
ZEN3_FUNCDEF(vpxor,					2ymm2ymmRot)
ZEN3_FUNCDEF(vpblendd,				2xmmi2xmm)
ZEN3_FUNCDEF(vpblendd,				2ymmi2ymm)
ZEN3_FUNCDEF(vpblendw,				2xmmi2xmm)
ZEN3_FUNCDEF(vpblendw,				2ymmi2ymm)

ZEN3_FUNCDEF(vpaddb,				2xmm2xmm)
ZEN3_FUNCDEF(vpaddb,				2ymm2ymm)
ZEN3_FUNCDEF(vpaddw,				2xmm2xmm)
ZEN3_FUNCDEF(vpaddw,				2ymm2ymm)
ZEN3_FUNCDEF(vpaddd,				2xmm2xmm)
ZEN3_FUNCDEF(vpaddd,				2ymm2ymm)
ZEN3_FUNCDEF(vpaddq,				2xmm2xmm)
ZEN3_FUNCDEF(vpaddq,				2ymm2ymm)
ZEN3_FUNCDEF(vpsubb,				2xmm2xmmRot)
ZEN3_FUNCDEF(vpsubb,				2ymm2ymmRot)
ZEN3_FUNCDEF(vpsubw,				2xmm2xmmRot)
ZEN3_FUNCDEF(vpsubw,				2ymm2ymmRot)
ZEN3_FUNCDEF(vpsubd,				2xmm2xmmRot)
ZEN3_FUNCDEF(vpsubd,				2ymm2ymmRot)
ZEN3_FUNCDEF(vpsubq,				2xmm2xmmRot)
ZEN3_FUNCDEF(vpsubq,				2ymm2ymmRot)
ZEN3_FUNCDEF(vpcmpeqb,				2xmm2xmmRot)
ZEN3_FUNCDEF(vpcmpeqb,				2ymm2ymmRot)
ZEN3_FUNCDEF(vpcmpeqw,				2xmm2xmmRot)
ZEN3_FUNCDEF(vpcmpeqw,				2ymm2ymmRot)
ZEN3_FUNCDEF(vpcmpeqd,				2xmm2xmmRot)
ZEN3_FUNCDEF(vpcmpeqd,				2ymm2ymmRot)
ZEN3_FUNCDEF(vpcmpgtb,				2xmm2xmmRot)
ZEN3_FUNCDEF(vpcmpgtb,				2ymm2ymmRot)
ZEN3_FUNCDEF(vpcmpgtw,				2xmm2xmmRot)
ZEN3_FUNCDEF(vpcmpgtw,				2ymm2ymmRot)
ZEN3_FUNCDEF(vpcmpgtd,				2xmm2xmmRot)
ZEN3_FUNCDEF(vpcmpgtd,				2ymm2ymmRot)
ZEN3_FUNCDEF(vpcmpgtq,				2xmm2xmmRot)
ZEN3_FUNCDEF(vpcmpgtq,				2ymm2ymmRot)
ZEN3_FUNCDEF(vpminsb,				2xmm2xmm)
ZEN3_FUNCDEF(vpminsb,				2ymm2ymm)
ZEN3_FUNCDEF(vpminub,				2xmm2xmm)
ZEN3_FUNCDEF(vpminub,				2ymm2ymm)
ZEN3_FUNCDEF(vpminsw,				2xmm2xmm)
ZEN3_FUNCDEF(vpminsw,				2ymm2ymm)
ZEN3_FUNCDEF(vpminuw,				2xmm2xmm)
ZEN3_FUNCDEF(vpminuw,				2ymm2ymm)
ZEN3_FUNCDEF(vpminsd,				2xmm2xmm)
ZEN3_FUNCDEF(vpminsd,				2ymm2ymm)
ZEN3_FUNCDEF(vpminud,				2xmm2xmm)
ZEN3_FUNCDEF(vpminud,				2ymm2ymm)
ZEN3_FUNCDEF(vpmaxsb,				2xmm2xmm)
ZEN3_FUNCDEF(vpmaxsb,				2ymm2ymm)
ZEN3_FUNCDEF(vpmaxub,				2xmm2xmm)
ZEN3_FUNCDEF(vpmaxub,				2ymm2ymm)
ZEN3_FUNCDEF(vpmaxsw,				2xmm2xmm)
ZEN3_FUNCDEF(vpmaxsw,				2ymm2ymm)
ZEN3_FUNCDEF(vpmaxuw,				2xmm2xmm)
ZEN3_FUNCDEF(vpmaxuw,				2ymm2ymm)
ZEN3_FUNCDEF(vpmaxsd,				2xmm2xmm)
ZEN3_FUNCDEF(vpmaxsd,				2ymm2ymm)
ZEN3_FUNCDEF(vpmaxud,				2xmm2xmm)
ZEN3_FUNCDEF(vpmaxud,				2ymm2ymm)

ZEN3_FUNCDEF(vpaddsb,				2xmm2xmm)
ZEN3_FUNCDEF(vpaddsb,				2ymm2ymm)
ZEN3_FUNCDEF(vpaddsw,				2xmm2xmm)
ZEN3_FUNCDEF(vpaddsw,				2ymm2ymm)
ZEN3_FUNCDEF(vpsubsb,				2xmm2xmmRot)
ZEN3_FUNCDEF(vpsubsb,				2ymm2ymmRot)
ZEN3_FUNCDEF(vpsubsw,				2xmm2xmmRot)
ZEN3_FUNCDEF(vpsubsw,				2ymm2ymmRot)
ZEN3_FUNCDEF(vpcmpeqq,				2xmm2xmmRot)
ZEN3_FUNCDEF(vpcmpeqq,				2ymm2ymmRot)
ZEN3_FUNCDEF(vpabsb,				xmm2xmm)
ZEN3_FUNCDEF(vpabsb,				ymm2ymm)
ZEN3_FUNCDEF(vpabsw,				xmm2xmm)
ZEN3_FUNCDEF(vpabsw,				ymm2ymm)
ZEN3_FUNCDEF(vpabsd,				xmm2xmm)
ZEN3_FUNCDEF(vpabsd,				ymm2ymm)
ZEN3_FUNCDEF(vpavgb,				2xmm2xmm)
ZEN3_FUNCDEF(vpavgb,				2ymm2ymm)
ZEN3_FUNCDEF(vpavgw,				2xmm2xmm)
ZEN3_FUNCDEF(vpavgw,				2ymm2ymm)
ZEN3_FUNCDEF(vpsignb,				2xmm2xmm)
ZEN3_FUNCDEF(vpsignb,				2ymm2ymm)
ZEN3_FUNCDEF(vpsignw,				2xmm2xmm)
ZEN3_FUNCDEF(vpsignw,				2ymm2ymm)
ZEN3_FUNCDEF(vpsignd,				2xmm2xmm)
ZEN3_FUNCDEF(vpsignd,				2ymm2ymm)
ZEN3_FUNCDEF(vaesenc,				2xmm2xmm)
ZEN3_FUNCDEF(vaesenc,				2ymm2ymm)
ZEN3_FUNCDEF(vaesenclast,			2xmm2xmm)
ZEN3_FUNCDEF(vaesenclast,			2ymm2ymm)
ZEN3_FUNCDEF(vaesdec,				2xmm2xmm)
ZEN3_FUNCDEF(vaesdec,				2ymm2ymm)
ZEN3_FUNCDEF(vaesdeclast,			2xmm2xmm)
ZEN3_FUNCDEF(vaesdeclast,			2ymm2ymm)
ZEN3_FUNCDEF(vaesenc,				2xmm2xmmRot)
ZEN3_FUNCDEF(vaesenc,				2ymm2ymmRot)
ZEN3_FUNCDEF(vaesenclast,			2xmm2xmmRot)
ZEN3_FUNCDEF(vaesenclast,			2ymm2ymmRot)
ZEN3_FUNCDEF(vaesdec,				2xmm2xmmRot)
ZEN3_FUNCDEF(vaesdec,				2ymm2ymmRot)
ZEN3_FUNCDEF(vaesdeclast,			2xmm2xmmRot)
ZEN3_FUNCDEF(vaesdeclast,			2ymm2ymmRot)
ZEN3_FUNCDEF(vaesimc,				xmm2xmm)
ZEN3_FUNCDEF(vaeskeygenassist,		xmmi2xmm)
ZEN3_FUNCDEF(vphminposuw,			xmm2xmm)
ZEN3_FUNCDEF(vpermilpd,				2xmm2xmm)
ZEN3_FUNCDEF(vpermilpd,				2ymm2ymm)
ZEN3_FUNCDEF(vpermilps,				2xmm2xmm)
ZEN3_FUNCDEF(vpermilps,				2ymm2ymm)

ZEN3_FUNCDEF(vpsllvd,				2xmm2xmm)
ZEN3_FUNCDEF(vpsllvd,				2ymm2ymm)
ZEN3_FUNCDEF(vpsrlvd,				2xmm2xmm)
ZEN3_FUNCDEF(vpsrlvd,				2ymm2ymm)
ZEN3_FUNCDEF(vpsravd,				2xmm2xmm)
ZEN3_FUNCDEF(vpsravd,				2ymm2ymm)
ZEN3_FUNCDEF(vpsllvq,				2xmm2xmm)
ZEN3_FUNCDEF(vpsllvq,				2ymm2ymm)
ZEN3_FUNCDEF(vpsrlvq,				2xmm2xmm)
ZEN3_FUNCDEF(vpsrlvq,				2ymm2ymm)
ZEN3_FUNCDEF(vpslld,				2xmm2xmm)
ZEN3_FUNCDEF(vpslld,				xmmymm2ymm)
ZEN3_FUNCDEF(vpsrld,				2xmm2xmm)
ZEN3_FUNCDEF(vpsrld,				xmmymm2ymm)
ZEN3_FUNCDEF(vpsrad,				2xmm2xmm)
ZEN3_FUNCDEF(vpsrad,				xmmymm2ymm)
ZEN3_FUNCDEF(vpslld,				2xmm2xmm)
ZEN3_FUNCDEF(vpslld,				xmmymm2ymm)
ZEN3_FUNCDEF(vpsrld,				2xmm2xmm)
ZEN3_FUNCDEF(vpsrld,				xmmymm2ymm)
ZEN3_FUNCDEF(vpsrad,				2xmm2xmm)
ZEN3_FUNCDEF(vpsrad,				xmmymm2ymm)
ZEN3_FUNCDEF(vpsllq,				2xmm2xmm)
ZEN3_FUNCDEF(vpsllq,				xmmymm2ymm)
ZEN3_FUNCDEF(vpsrlq,				2xmm2xmm)
ZEN3_FUNCDEF(vpsrlq,				xmmymm2ymm)
ZEN3_FUNCDEF(vpsllw,				xmmi2xmm)
ZEN3_FUNCDEF(vpsllw,				ymmi2ymm)
ZEN3_FUNCDEF(vpsrlw,				xmmi2xmm)
ZEN3_FUNCDEF(vpsrlw,				ymmi2ymm)
ZEN3_FUNCDEF(vpsraw,				xmmi2xmm)
ZEN3_FUNCDEF(vpsraw,				ymmi2ymm)
ZEN3_FUNCDEF(vpslld,				xmmi2xmm)
ZEN3_FUNCDEF(vpslld,				ymmi2ymm)
ZEN3_FUNCDEF(vpsrld,				xmmi2xmm)
ZEN3_FUNCDEF(vpsrld,				ymmi2ymm)
ZEN3_FUNCDEF(vpsrad,				xmmi2xmm)
ZEN3_FUNCDEF(vpsrad,				ymmi2ymm)
ZEN3_FUNCDEF(vpsllq,				xmmi2xmm)
ZEN3_FUNCDEF(vpsllq,				ymmi2ymm)
ZEN3_FUNCDEF(vpsrlq,				xmmi2xmm)
ZEN3_FUNCDEF(vpsrlq,				ymmi2ymm)
ZEN3_FUNCDEF(vpslldq,				xmmi2xmm)
ZEN3_FUNCDEF(vpslldq,				ymmi2ymm)
ZEN3_FUNCDEF(vpsrldq,				xmmi2xmm)
ZEN3_FUNCDEF(vpsrldq,				ymmi2ymm)

ZEN3_FUNCDEF(vpunpcklbw,			2xmm2xmm)
ZEN3_FUNCDEF(vpunpcklbw,			2ymm2ymm)
ZEN3_FUNCDEF(vpunpckhbw,			2xmm2xmm)
ZEN3_FUNCDEF(vpunpckhbw,			2ymm2ymm)
ZEN3_FUNCDEF(vpunpcklwd,			2xmm2xmm)
ZEN3_FUNCDEF(vpunpcklwd,			2ymm2ymm)
ZEN3_FUNCDEF(vpunpckhwd,			2xmm2xmm)
ZEN3_FUNCDEF(vpunpckhwd,			2ymm2ymm)
ZEN3_FUNCDEF(vpunpckldq,			2xmm2xmm)
ZEN3_FUNCDEF(vpunpckldq,			2ymm2ymm)
ZEN3_FUNCDEF(vpunpckhdq,			2xmm2xmm)
ZEN3_FUNCDEF(vpunpckhdq,			2ymm2ymm)
ZEN3_FUNCDEF(vpunpcklqdq,			2xmm2xmm)
ZEN3_FUNCDEF(vpunpcklqdq,			2ymm2ymm)
ZEN3_FUNCDEF(vpunpckhqdq,			2xmm2xmm)
ZEN3_FUNCDEF(vpunpckhqdq,			2ymm2ymm)
ZEN3_FUNCDEF(vunpcklps,				2xmm2xmm)
ZEN3_FUNCDEF(vunpcklps,				2ymm2ymm)
ZEN3_FUNCDEF(vunpckhps,				2xmm2xmm)
ZEN3_FUNCDEF(vunpckhps,				2ymm2ymm)
ZEN3_FUNCDEF(vunpcklpd,				2xmm2xmm)
ZEN3_FUNCDEF(vunpcklpd,				2ymm2ymm)
ZEN3_FUNCDEF(vunpckhpd,				2xmm2xmm)
ZEN3_FUNCDEF(vunpckhpd,				2ymm2ymm)
ZEN3_FUNCDEF(vmovhlps,				2xmm2xmm)
ZEN3_FUNCDEF(vmovlhps,				2xmm2xmm)
ZEN3_FUNCDEF(vpacksswb,				2xmm2xmm)
ZEN3_FUNCDEF(vpacksswb,				2ymm2ymm)
ZEN3_FUNCDEF(vpackuswb,				2xmm2xmm)
ZEN3_FUNCDEF(vpackuswb,				2ymm2ymm)
ZEN3_FUNCDEF(vpackssdw,				2xmm2xmm)
ZEN3_FUNCDEF(vpackssdw,				2ymm2ymm)
ZEN3_FUNCDEF(vpackusdw,				2xmm2xmm)
ZEN3_FUNCDEF(vpackusdw,				2ymm2ymm)
ZEN3_FUNCDEF(vpermilpd,				xmmi2xmm)
ZEN3_FUNCDEF(vpermilpd,				ymmi2ymm)
ZEN3_FUNCDEF(vpermilps,				xmmi2xmm)
ZEN3_FUNCDEF(vpermilps,				ymmi2ymm)
ZEN3_FUNCDEF(vshufpd,				2xmmi2xmm)
ZEN3_FUNCDEF(vshufpd,				2ymmi2ymm)
ZEN3_FUNCDEF(vshufps,				2xmmi2xmm)
ZEN3_FUNCDEF(vshufps,				2ymmi2ymm)
ZEN3_FUNCDEF(vpshufb,				2xmm2xmm)
ZEN3_FUNCDEF(vpshufb,				2ymm2ymm)
ZEN3_FUNCDEF(vpshuflw,				xmmi2xmm)
ZEN3_FUNCDEF(vpshuflw,				ymmi2ymm)
ZEN3_FUNCDEF(vpshufhw,				xmmi2xmm)
ZEN3_FUNCDEF(vpshufhw,				ymmi2ymm)
ZEN3_FUNCDEF(vpshufd,				xmmi2xmm)
ZEN3_FUNCDEF(vpshufd,				ymmi2ymm)
ZEN3_FUNCDEF(vpalignr,				2xmmi2xmm)
ZEN3_FUNCDEF(vpalignr,				2ymmi2ymm)
ZEN3_FUNCDEF(vmovddup,				xmm2xmm)
ZEN3_FUNCDEF(vmovddup,				ymm2ymm)
ZEN3_FUNCDEF(vmovsldup,				xmm2xmm)
ZEN3_FUNCDEF(vmovsldup,				ymm2ymm)
ZEN3_FUNCDEF(vmovshdup,				xmm2xmm)
ZEN3_FUNCDEF(vmovshdup,				ymm2ymm)
ZEN3_FUNCDEF(vpbroadcastb,			xmm2xmm)
ZEN3_FUNCDEF(vpbroadcastw,			xmm2xmm)
ZEN3_FUNCDEF(vpbroadcastd,			xmm2xmm)
ZEN3_FUNCDEF(vpbroadcastq,			xmm2xmm)
ZEN3_FUNCDEF(vbroadcastss,			xmm2xmm)
ZEN3_FUNCDEF(vpmovzxbw,				xmm2xmm)
ZEN3_FUNCDEF(vpmovzxbd,				xmm2xmm)
ZEN3_FUNCDEF(vpmovzxbq,				xmm2xmm)
ZEN3_FUNCDEF(vpmovzxwd,				xmm2xmm)
ZEN3_FUNCDEF(vpmovzxwq,				xmm2xmm)
ZEN3_FUNCDEF(vpmovzxdq,				xmm2xmm)
ZEN3_FUNCDEF(vpmovsxbw,				xmm2xmm)
ZEN3_FUNCDEF(vpmovsxbd,				xmm2xmm)
ZEN3_FUNCDEF(vpmovsxbq,				xmm2xmm)
ZEN3_FUNCDEF(vpmovsxwd,				xmm2xmm)
ZEN3_FUNCDEF(vpmovsxwq,				xmm2xmm)
ZEN3_FUNCDEF(vpmovsxdq,				xmm2xmm)
ZEN3_FUNCDEF(vinsertps,				2xmmi2xmm)

ZEN3_FUNCDEF(vpmulhw,				2xmm2xmm)
ZEN3_FUNCDEF(vpmulhw,				2ymm2ymm)
ZEN3_FUNCDEF(vpmulhuw,				2xmm2xmm)
ZEN3_FUNCDEF(vpmulhuw,				2ymm2ymm)
ZEN3_FUNCDEF(vpmulhrsw,				2xmm2xmm)
ZEN3_FUNCDEF(vpmulhrsw,				2ymm2ymm)
ZEN3_FUNCDEF(vpmullw,				2xmm2xmm)
ZEN3_FUNCDEF(vpmullw,				2ymm2ymm)
ZEN3_FUNCDEF(vpmulld,				2xmm2xmm)
ZEN3_FUNCDEF(vpmulld,				2ymm2ymm)
ZEN3_FUNCDEF(vpmuldq,				2xmm2xmm)
ZEN3_FUNCDEF(vpmuldq,				2ymm2ymm)
ZEN3_FUNCDEF(vpmuludq,				2xmm2xmm)
ZEN3_FUNCDEF(vpmuludq,				2ymm2ymm)
ZEN3_FUNCDEF(vpmaddwd,				2xmm2xmm)
ZEN3_FUNCDEF(vpmaddwd,				2ymm2ymm)
ZEN3_FUNCDEF(vpmaddubsw,			2xmm2xmm)
ZEN3_FUNCDEF(vpmaddubsw,			2ymm2ymm)
ZEN3_FUNCDEF(vpsadbw,				2xmm2xmm)
ZEN3_FUNCDEF(vpsadbw,				2ymm2ymm)

ZEN3_FUNCDEF(vinserti128,			xmmymmi2ymm)
ZEN3_FUNCDEF(vinsertf128,			xmmymmi2ymm)
ZEN3_FUNCDEF(vinserti128,			m128ymmi2ymm)
ZEN3_FUNCDEF(vinsertf128,			m128ymmi2ymm)
ZEN3_FUNCDEF(vextracti128,			ymmi2xmm)
ZEN3_FUNCDEF(vextractf128,			ymmi2xmm)
ZEN3_FUNCDEF(vextracti128,			ymmi2m128)
ZEN3_FUNCDEF(vextractf128,			ymmi2m128)
ZEN3_FUNCDEF(vperm2i128,			2ymmi2ymm)
ZEN3_FUNCDEF(vperm2f128,			2ymmi2ymm)
ZEN3_FUNCDEF(vperm2i128,			m256ymmi2ymm)
ZEN3_FUNCDEF(vperm2f128,			m256ymmi2ymm)
ZEN3_FUNCDEF(vpbroadcastq,			xmm2ymm)
ZEN3_FUNCDEF(vbroadcastsd,			xmm2ymm)
ZEN3_FUNCDEF(vpbroadcastb,			xmm2ymm)
ZEN3_FUNCDEF(vpbroadcastw,			xmm2ymm)
ZEN3_FUNCDEF(vpbroadcastd,			xmm2ymm)
ZEN3_FUNCDEF(vbroadcastss,			xmm2ymm)
ZEN3_FUNCDEF(vbroadcastss,			m32_2ymm)
ZEN3_FUNCDEF(vbroadcastsd,			m64_2ymm)
ZEN3_FUNCDEF(vpbroadcastb,			m8_2ymm)
ZEN3_FUNCDEF(vpbroadcastw,			m16_2ymm)
ZEN3_FUNCDEF(vpbroadcastd,			m32_2ymm)
ZEN3_FUNCDEF(vpbroadcastq,			m64_2ymm)

ZEN3_FUNCDEF(vdivpd,				2xmm2xmm2)
ZEN3_FUNCDEF(vdivpd,				2ymm2ymm2)
ZEN3_FUNCDEF(vdivps,				2xmm2xmm2)
ZEN3_FUNCDEF(vdivps,				2ymm2ymm2)
ZEN3_FUNCDEF(vdivsd,				2xmm2xmm2)
ZEN3_FUNCDEF(vdivss,				2xmm2xmm2)
ZEN3_FUNCDEF(vsqrtpd,				xmm2xmm1)
ZEN3_FUNCDEF(vsqrtpd,				ymm2ymm1)
ZEN3_FUNCDEF(vsqrtps,				xmm2xmm1)
ZEN3_FUNCDEF(vsqrtps,				ymm2ymm1)
ZEN3_FUNCDEF(vsqrtsd,				2xmm2xmm1)
ZEN3_FUNCDEF(vsqrtss,				2xmm2xmm1)

ZEN3_FUNCDEF(vmovd,					xmm2gpr32)
ZEN3_FUNCDEF(vmovd,					xmm2gpr64)
ZEN3_FUNCDEF(vmovd,					gpr32_2xmm)
ZEN3_FUNCDEF(vmovd,					gpr64_2xmm)
ZEN3_FUNCDEF(vpextrb,				xmmi2gpr32)
ZEN3_FUNCDEF(vpextrb,				xmmi2gpr64)
ZEN3_FUNCDEF(vpextrw,				xmmi2gpr32)
ZEN3_FUNCDEF(vpextrw,				xmmi2gpr64)
ZEN3_FUNCDEF(vpextrd,				xmmi2gpr32)
ZEN3_FUNCDEF(vpextrq,				xmmi2gpr64)
ZEN3_FUNCDEF(vpinsrb,				gpr32ixmm2xmm)
ZEN3_FUNCDEF(vpinsrw,				gpr32ixmm2xmm)
ZEN3_FUNCDEF(vpinsrd,				gpr32ixmm2xmm)
ZEN3_FUNCDEF(vpinsrq,				gpr64ixmm2xmm)
ZEN3_FUNCDEF(vcvtss2si,				xmm2gpr32)
ZEN3_FUNCDEF(vcvtss2si,				xmm2gpr64)
ZEN3_FUNCDEF(vcvtsd2si,				xmm2gpr32)
ZEN3_FUNCDEF(vcvtsd2si,				xmm2gpr64)
ZEN3_FUNCDEF(vcvtsi2ss,				gpr32xmm2xmm)
ZEN3_FUNCDEF(vcvtsi2ss,				gpr64xmm2xmm)
ZEN3_FUNCDEF(vcvtsi2sd,				gpr32xmm2xmm)
ZEN3_FUNCDEF(vcvtsi2sd,				gpr64xmm2xmm)
ZEN3_FUNCDEF(vextractps,			xmmi2gpr32)
ZEN3_FUNCDEF(vpmovmskb,				xmm2gpr32)
ZEN3_FUNCDEF(vpmovmskb,				xmm2gpr64)
ZEN3_FUNCDEF(vpmovmskb,				ymm2gpr32)
ZEN3_FUNCDEF(vpmovmskb,				ymm2gpr64)
ZEN3_FUNCDEF(vmovmskpd,				xmm2gpr32)
ZEN3_FUNCDEF(vmovmskpd,				xmm2gpr64)
ZEN3_FUNCDEF(vmovmskpd,				ymm2gpr32)
ZEN3_FUNCDEF(vmovmskpd,				ymm2gpr64)
ZEN3_FUNCDEF(vmovmskps,				xmm2gpr32)
ZEN3_FUNCDEF(vmovmskps,				xmm2gpr64)
ZEN3_FUNCDEF(vmovmskps,				ymm2gpr32)
ZEN3_FUNCDEF(vmovmskps,				ymm2gpr64)
ZEN3_FUNCDEF(vptest,				xmm2F)
ZEN3_FUNCDEF(vptest,				ymm2F)
ZEN3_FUNCDEF(vtestpd,				xmm2F)
ZEN3_FUNCDEF(vtestpd,				ymm2F)
ZEN3_FUNCDEF(vtestps,				xmm2F)
ZEN3_FUNCDEF(vtestps,				ymm2F)
ZEN3_FUNCDEF(vcomisd,				xmm2F)
ZEN3_FUNCDEF(vcomiss,				xmm2F)
ZEN3_FUNCDEF(vucomisd,				xmm2F)
ZEN3_FUNCDEF(vucomiss,				xmm2F)

ZEN3_FUNCDEF(vpermq,				ymmi2ymm)
ZEN3_FUNCDEF(vpermpd,				ymmi2ymm)
ZEN3_FUNCDEF(vpermd,				2ymm2ymm)
ZEN3_FUNCDEF(vpermps,				2ymm2ymm)
ZEN3_FUNCDEF(vpmovzxbw,				xmm2ymm)
ZEN3_FUNCDEF(vpmovzxbd,				xmm2ymm)
ZEN3_FUNCDEF(vpmovzxbq,				xmm2ymm)
ZEN3_FUNCDEF(vpmovzxwd,				xmm2ymm)
ZEN3_FUNCDEF(vpmovzxwq,				xmm2ymm)
ZEN3_FUNCDEF(vpmovzxdq,				xmm2ymm)
ZEN3_FUNCDEF(vpmovsxbw,				xmm2ymm)
ZEN3_FUNCDEF(vpmovsxbd,				xmm2ymm)
ZEN3_FUNCDEF(vpmovsxbq,				xmm2ymm)
ZEN3_FUNCDEF(vpmovsxwd,				xmm2ymm)
ZEN3_FUNCDEF(vpmovsxwq,				xmm2ymm)
ZEN3_FUNCDEF(vpmovsxdq,				xmm2ymm)
ZEN3_FUNCDEF(vcvtps2pd,				xmm2ymm)
ZEN3_FUNCDEF(vcvtpd2ps,				ymm2xmm)
ZEN3_FUNCDEF(vcvtdq2pd,				xmm2ymm)
ZEN3_FUNCDEF(vcvtpd2dq,				ymm2xmm)
ZEN3_FUNCDEF(vcvtph2ps,				xmm2ymm)
ZEN3_FUNCDEF(vcvtps2ph,				ymmi2xmm)

ZEN3_FUNCDEF(vhaddpd,				2xmm2xmm)
ZEN3_FUNCDEF(vhaddpd,				2ymm2ymm)
ZEN3_FUNCDEF(vhaddps,				2xmm2xmm)
ZEN3_FUNCDEF(vhaddps,				2ymm2ymm)
ZEN3_FUNCDEF(vhsubpd,				2xmm2xmm)
ZEN3_FUNCDEF(vhsubpd,				2ymm2ymm)
ZEN3_FUNCDEF(vhsubps,				2xmm2xmm)
ZEN3_FUNCDEF(vhsubps,				2ymm2ymm)

ZEN3_FUNCDEF(vphaddw,				2xmm2xmm)
ZEN3_FUNCDEF(vphaddw,				2ymm2ymm)
ZEN3_FUNCDEF(vphaddd,				2xmm2xmm)
ZEN3_FUNCDEF(vphaddd,				2ymm2ymm)
ZEN3_FUNCDEF(vphaddsw,				2xmm2xmm)
ZEN3_FUNCDEF(vphaddsw,				2ymm2ymm)
ZEN3_FUNCDEF(vphsubw,				2xmm2xmm)
ZEN3_FUNCDEF(vphsubw,				2ymm2ymm)
ZEN3_FUNCDEF(vphsubd,				2xmm2xmm)
ZEN3_FUNCDEF(vphsubd,				2ymm2ymm)
ZEN3_FUNCDEF(vphsubsw,				2xmm2xmm)
ZEN3_FUNCDEF(vphsubsw,				2ymm2ymm)

ZEN3_FUNCDEF(vdppd,					2xmmi2xmm)
ZEN3_FUNCDEF(vdpps,					2xmmi2xmm)
ZEN3_FUNCDEF(vdpps,					2ymmi2ymm)
ZEN3_FUNCDEF(vpclmulqdq,			2xmmi2xmm)
ZEN3_FUNCDEF(vpclmulqdq,			2ymmi2ymm)
ZEN3_FUNCDEF(vmpsadbw,				2xmmi2xmm)
ZEN3_FUNCDEF(vmpsadbw,				2ymmi2ymm)

