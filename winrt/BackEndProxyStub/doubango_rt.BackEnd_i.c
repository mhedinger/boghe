

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Tue Aug 18 19:52:18 2015
 */
/* Compiler settings for C:\Users\dmi\AppData\Local\Temp\doubango_rt.BackEnd.idl-24f232db:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=ARM 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler,0x1FC46173,0x3072,0x316E,0x8C,0x9C,0x0A,0x06,0xF5,0x38,0x02,0x2C);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals,0x1BA29F65,0x9ABB,0x3024,0x82,0x21,0xA9,0x8C,0xDB,0x00,0x88,0x87);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback,0xEA0B2968,0x7AD4,0x3D5C,0xAA,0xD3,0x2A,0xEF,0xB3,0xAC,0xD2,0xE7);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals,0xF8BB64E3,0x54A8,0x3060,0x93,0x10,0x0D,0x73,0xB4,0xC5,0xD4,0x23);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals,0x8DD1CD82,0xF943,0x3715,0xB5,0x10,0xF8,0xD9,0xF2,0x10,0xD7,0x5D);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals,0x040D7757,0x114C,0x3581,0x8E,0xF9,0xD6,0x40,0x25,0x6C,0x0C,0x14);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics,0x5E3981B2,0x9A97,0x38D1,0xB0,0xD2,0x48,0xB2,0xFF,0xB7,0xB4,0x75);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals,0x72089DC3,0x5600,0x3F9E,0x89,0xA9,0x35,0xD5,0x0E,0x35,0x03,0x48);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals,0xB92764BB,0xF11D,0x3BD1,0x8D,0xEA,0xB1,0x33,0xCE,0x9B,0xF5,0xF7);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals,0xE4EFFEF8,0x5C8D,0x389A,0xBE,0xA7,0x7E,0x14,0xE2,0xA0,0xAA,0x95);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback,0xBD3CC691,0xDAAF,0x35DD,0x9C,0xDA,0x24,0x2B,0x70,0xBD,0xF5,0xDC);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals,0x38A8B79D,0x5679,0x3AF4,0xBD,0x1C,0xD2,0x7D,0xE0,0x49,0x4B,0x1D);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals,0x944BB133,0x86E3,0x3FB3,0xBC,0xF5,0xFD,0x12,0xB6,0x6E,0x3B,0xA6);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals,0x31AC4C99,0x4FE9,0x3CCE,0x89,0xB5,0x0C,0x27,0x50,0xCC,0xEE,0xA7);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics,0x102E8833,0xDCF3,0x3111,0x82,0x52,0x66,0xAE,0x5C,0x84,0x70,0x73);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals,0x357645EC,0x98BF,0x3BAF,0x8B,0x97,0x33,0x38,0x78,0x33,0x97,0xCB);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory,0x44A6D232,0xAE6A,0x398C,0xAB,0x6A,0x78,0xD4,0xEE,0x5B,0x8B,0x5C);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics,0xF04BF842,0xDE0A,0x31B9,0xB1,0xCB,0x42,0xCA,0xD4,0x04,0x06,0x66);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals,0x19F9A6F1,0xE76C,0x321C,0xBA,0x0A,0x78,0xDB,0xA8,0x0E,0xC2,0x30);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback,0xFBC56EE2,0x7375,0x3F53,0x91,0xD3,0x85,0x30,0x79,0x19,0x31,0x84);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals,0x540329E3,0x8DD6,0x391C,0x9E,0xBD,0x4D,0x73,0x8E,0x1C,0x04,0xF0);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory,0x1275BFA1,0x5793,0x318F,0x97,0xCD,0xD3,0x4C,0xDF,0x95,0x37,0x75);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession,0x9BFB53AD,0xBFC4,0x3784,0x9E,0x6D,0x68,0x39,0xB5,0xE8,0x73,0x20);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession,0xA93DFA4F,0x7D83,0x32D0,0xB8,0x66,0xCC,0x9F,0xC5,0x7D,0x72,0x25);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals,0x6ACF024C,0x5FA2,0x3607,0x92,0xB2,0x67,0x74,0x05,0xC7,0x55,0x19);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory,0x6EEC00B8,0x8AFD,0x3C0D,0x9E,0xE6,0xBB,0x0B,0xD3,0xFE,0x76,0x1A);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals,0x266A5021,0xF4D7,0x3457,0x8C,0x28,0x00,0xC7,0xA3,0x86,0xAB,0xDE);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory,0x8102D159,0x281E,0x397D,0xB6,0xDD,0xAB,0x94,0x05,0x98,0x20,0xA7);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals,0x7D605CC9,0x6FF4,0x3D58,0x99,0x76,0xF2,0x3C,0x30,0xD4,0xAE,0xD5);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory,0x9B651B7D,0x7BFE,0x3918,0xBD,0xFE,0x52,0xB7,0x2F,0x9B,0x0F,0x30);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals,0x746AFEAB,0x0072,0x38FE,0xB1,0xA7,0x21,0x77,0x0B,0xE6,0x4A,0x4A);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory,0x840E557A,0xA75D,0x35A5,0x9E,0x1E,0x9A,0xFE,0x1F,0xA8,0x0A,0x9D);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals,0xAACA3593,0xCEFB,0x373E,0xA2,0x29,0x85,0x3C,0x78,0xAD,0x59,0x21);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory,0x489F9906,0xCC60,0x3868,0xA5,0x5A,0xE9,0x3A,0x74,0x55,0xB5,0x14);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals,0x6A30534C,0x9226,0x3450,0x86,0x1F,0x8D,0x92,0xE2,0x41,0xD6,0x11);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory,0x548CF937,0x8336,0x3950,0xAA,0x5C,0xF8,0xCA,0x1D,0x9B,0x4A,0x67);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals,0x7AA94F17,0xFBEB,0x3FAC,0x92,0xED,0x89,0x8F,0xB9,0xF4,0xED,0xC7);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory,0x1FB0FA30,0xB04C,0x3AFC,0x87,0xEF,0xB3,0x26,0x4A,0xE0,0xB4,0x3C);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals,0x8D8BFB47,0xBE91,0x3E55,0xAD,0x42,0x51,0xA6,0xF8,0xE0,0x19,0x0A);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory,0xDE777EC1,0x607A,0x3E44,0x91,0x0E,0x93,0x27,0x93,0xDF,0x12,0x8E);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals,0xD34B80F8,0x410C,0x3A42,0xAA,0x06,0x29,0x6E,0xB6,0xA8,0xE2,0xB1);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory,0xAC3D979B,0x2D68,0x3AD7,0x8D,0x53,0x7C,0x1D,0x74,0x44,0xF7,0xBC);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals,0xE3F89F64,0xB94A,0x368B,0x90,0x82,0x93,0xAF,0x84,0xF8,0xBB,0x1F);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory,0x71094813,0xDA89,0x30CF,0xBD,0x63,0xA7,0x0F,0xDF,0x4A,0x85,0xFA);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback,0xB210DD33,0xA6A6,0x34A8,0xA9,0x6A,0xEF,0xAC,0x9D,0x0B,0x8D,0xBA);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals,0xF6F4FF9E,0x06BC,0x3929,0xBA,0xEA,0x6F,0x7F,0xA4,0x40,0x13,0xFE);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent,0x6FDB3F81,0x9CB1,0x34F1,0x9A,0xD6,0x78,0x78,0x0B,0xC5,0x8E,0x43);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals,0x65780FAA,0x8EBB,0x375D,0xB0,0x4C,0x47,0x55,0x5D,0x0F,0x28,0x45);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals,0x5FB380DD,0x095D,0x32D4,0xAC,0xE4,0x79,0x91,0x51,0x6F,0xD8,0xEA);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals,0x731A866B,0x4B61,0x3A41,0x9F,0x4B,0x0D,0xA7,0x32,0x2F,0x1A,0xA7);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals,0xD6D6ADFB,0x954A,0x36F7,0xB3,0x6B,0x51,0xFD,0x40,0x91,0xFE,0xDA);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals,0x3E3607D8,0x9CA6,0x3CD2,0x9C,0x82,0x44,0x78,0x58,0x0C,0x86,0xD1);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals,0x01126DE2,0xDB09,0x3456,0x93,0xC8,0x05,0x17,0xC3,0xF9,0x63,0xD5);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals,0xEC75DE12,0xC356,0x33FD,0xB8,0xAF,0xAE,0x4A,0xB0,0x54,0x14,0xA5);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals,0x599EE12A,0x5485,0x3D18,0x9A,0xCE,0xF0,0x88,0x5D,0x29,0x45,0x5E);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals,0x9F4A8862,0x8482,0x3083,0xB2,0x4C,0x79,0x67,0x37,0xFD,0xF4,0x2B);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals,0x6D43145F,0xFC50,0x3FD7,0x9D,0x1F,0xBC,0x47,0x89,0xAA,0x9C,0xED);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals,0xF68542F0,0xF6C6,0x3DE5,0x86,0xFE,0x31,0xE2,0xAD,0xD4,0xE4,0x1E);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer,0xF8F3EBEE,0x094D,0x38D5,0x84,0x0A,0x25,0x47,0x10,0xAE,0x90,0x91);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener,0x3F230803,0xD28D,0x3153,0xA0,0x7C,0x7F,0x9F,0xD9,0xC9,0x1E,0x43);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener,0x19BAB5B7,0xA2FC,0x3714,0x9A,0x50,0x91,0x33,0x51,0x61,0x6B,0xAA);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener,0xBEEF9A82,0x3E32,0x3ADB,0xA7,0x50,0x09,0xC0,0x20,0xB2,0x51,0x94);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener,0x79981920,0x108E,0x3EFF,0xBF,0xFB,0x14,0x35,0x77,0x7B,0x55,0xA0);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener,0xEB16F8EC,0x3180,0x35C4,0xA4,0xD8,0xA9,0xD7,0x34,0x27,0xE4,0xFA);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals,0x4868DDC4,0x3353,0x3344,0x84,0x2D,0xEB,0x96,0xAC,0x83,0x71,0xB9);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals,0x05FC37D6,0xFF7F,0x3D9F,0xA6,0xFD,0x77,0x5D,0xD1,0x43,0x72,0xAD);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals,0xCC5B3C10,0x588D,0x37C4,0x81,0x8A,0x97,0xDD,0xA8,0xC1,0xD5,0xDC);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics,0x228FB9E6,0xED53,0x3289,0xAC,0xE3,0x99,0x5F,0x36,0xF1,0x72,0xB2);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals,0x2F22CC8A,0x1FA9,0x3EF8,0xBD,0x69,0xA1,0xB6,0x1A,0x69,0x6F,0x3C);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals,0xFD21E8E5,0x0146,0x348B,0x97,0x9D,0x92,0x37,0x19,0x7A,0x9A,0x9B);


MIDL_DEFINE_GUID(IID, IID___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics,0xD397D79C,0x41C8,0x3E86,0xB7,0x94,0xA2,0x0E,0xA8,0xD5,0x45,0xF5);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



