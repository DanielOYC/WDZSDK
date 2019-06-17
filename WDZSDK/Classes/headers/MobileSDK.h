//
//  MobileSDK.h
//  MobileSDK
//
//  Created by keda on 14-6-16.
//  Copyright (c) 2014年 kedacom. All rights reserved.
//

#ifndef  _MVSSKDIOS_H_
#define  _MVSSKDIOS_H_

typedef int		s32,BOOL32,b32;
typedef unsigned long   u32;
typedef unsigned char	u8;
typedef unsigned short  u16;
typedef short           s16;
typedef char            s8;

#ifdef _MSC_VER
typedef __int64			s64;
#else
typedef long long		s64;
#endif

#ifdef _MSC_VER
typedef unsigned __int64 u64;
#else
typedef unsigned long long u64;
#endif

#ifndef _MSC_VER
#ifndef LPSTR
#define LPSTR   char *
#endif
#ifndef LPCSTR
#define LPCSTR  const char *
#endif
#endif


#ifndef TRUE
#define TRUE    1
#endif

#ifndef FALSE
#define FALSE   0
#endif

#define CSUSER_MAX_LEN         32 //

#define    MA_MAXLEN_NO            32

#define  MVMAX_IPADDR_LEN        16
#define  MV_MAX_URL_LEN          256
#define  MVMAX_PTZCMD_LEN        32

/*---------------- errcode define  start ----------------*/
typedef enum {
    MVCAPP_EVT_STARTPLAY_SUCC,
    MVCAPP_EVT_STARTPLAY_FAIL,
    MVCAPP_EVT_PLAYINFO_NTY = 40,
    MVCAPP_EVT_STOPPLAY_SUCC = 50,
    MVCAPP_EVT_STOPPLAY_FAIL,
    MVCAPP_EVT_PTZCTRL_SUCC = 60,
    MVCAPP_EVT_PTZCTRL_FAIL,
    MVCAPP_EVT_DISCONNECT_NTF = 88
}emAppOptEvt;
/*---------------- message type define end ----------------*/


enum TCamCommand_IOS{
	CAM_COMMAND_MOVEUP_IOS=1,			//(u8)1
	CAM_COMMAND_MOVEDOWN_IOS,	    	//(u8)2
	CAM_COMMAND_MOVELEFT_IOS,			//(u8)3
	CAM_COMMAND_MOVERIGHT_IOS,			//(u8)4
	CAM_COMMAND_MOVEHOME_IOS,			//(u8)5
	CAM_COMMAND_MOVESTOP_IOS,			//(u8)6
	CAM_COMMAND_ZOOMTELE_IOS,		    //(u8)7
	CAM_COMMAND_ZOOMWIDE_IOS,			//(u8)8
	CAM_COMMAND_ZOOMSTOP_IOS,			//(u8)9
	CAM_COMMAND_FOCUSFAR_IOS,		    //(u8)10
	CAM_COMMAND_FOCUSNEAR_IOS,			//(u8)11
	CAM_COMMAND_FOCUSAUTO_IOS,			//(u8)12
	CAM_COMMAND_FOCUSSTOP_IOS,			//(u8)13
	CAM_COMMAND_PRESETSET_IOS,	    	//(u8)14
	CAM_COMMAND_PRESETCALL_IOS,			//(u8)15
	CAM_COMMAND_CAMERASET_IOS,			//(u8)16
	CAM_COMMAND_BRIGHTUP_IOS,			//(u8)17
	CAM_COMMAND_BRIGHTDOWN_IOS,			//(u8)18
	CAM_COMMAND_BRIGHTSTOP_IOS,			//(u8)19
	CAM_COMMAND_NEW_IOS,				//(u8)20
	CAM_COMMAND_APPEND_IOS,				//(u8)21
	CAM_COMMAND_GOTOPOINT_IOS,			//(u8)22
	CAM_COMMAND_ZOOMPART_IOS,			//(u8)23
	
	CAM_COMMAND_PANSPEED_IOS,			//(u8)24
	CAM_COMMAND_TILTSPEED_IOS,			//(u8)25
	CAM_COMMAND_SETBRIGHT_IOS,			//(u8)26
	CAM_COMMAND_MATRIX_TRANSIO_IOS,		//(u8)27
	CAM_COMMAND_MATRIX_SWTICH_IOS=27,	//(u8)27
	CAM_COMMAND_MATRIX_VIDMIX4_IOS,		//(u8)28
	CAM_COMMAND_MATRIX_VIDMIX9_IOS,		//(u8)29
	CAM_COMMAND_MATRIX_VIDMIX16_IOS,	//(u8)30
	CAM_COMMAND_MATRIX_VIDMIXPP_IOS,	//(u8)31
    
	CAM_COMMAND_ZOOMWHOLE_IOS,			//(u8)32
    
	
	CAM_COMMAND_MENU_UP_IOS,			//(u8)33
	CAM_COMMAND_MENU_DOWN_IOS,			//(u8)34
	CAM_COMMAND_MENU_LEFT_IOS,			//(u8)35
	CAM_COMMAND_MENU_RIGHT_IOS,			//(u8)36
    
	CAM_COMMAND_MENU_SHOW_IOS,			//(u8)37
	CAM_COMMAND_MENU_HIDE_IOS,			//(u8)38
    
	CAM_COMMAND_MENU_ENTER_IOS,			//(u8)39
	CAM_COMMAND_MENU_EXIT_IOS,		    //(u8)40
    
	CAM_COMMAND_PRESETDEL_IOS,			//(u8)41
	CAM_COMMAND_MATRIX_SWTICHASC_IOS,	//(u8)42
	CAM_COMMAND_MATRIX_SWTICHDESC_IOS,	//(u8)43
	CAM_COMMAND_MATRIX_IMAGEHOLD_IOS,	//(U8)44
    
	CAM_COMMAND_STARTAUTOSCAN_IOS=128,  //(u8)128
	CAM_COMMAND_STOPAUTOSCAN_IOS,       //(u8)129
	CAM_COMMAND_STARTPRESETSCAN_IOS,	//(u8)130
	CAM_COMMAND_STOPPRESETSCAN_IOS,     //(u8)131
	CAM_COMMAND_SCANSPEED_SET_IOS,		//(u8)132
	CAM_COMMAND_MATRIX_VIDMIX1_IOS,		//(u8)45
	CAM_COMMAND_MATRIX_VIDMIX2_IOS,		//(u8)46
    
};


#pragma pack(1)


#define  MV_MAX_IP_ADDR_LEN    16
#define  MV_MAX_URL_LEN        256
#define  MV_MAX_PTZ_CMD_LEN    16


// here start play used and stop play used
// Mobile Video (Start) Play Request--Mpr
typedef struct tagMvPlayReq
{
    s32    nMprWinId;   // play window index, add fo multi win play
    s8     achMprUrl[MV_MAX_URL_LEN]; // play or ptz puno-channel id , url, is a rtsp or ?
    s32    nMprCtxt;   // for extend, context
    s32    nMprSesn;   // for extend, session
    s32    nMprRetn;   // for extend, retain
    s32    nMprRsvd;   // for extend, reserve
}TMvPlayReq;

// Mobile Video Stop (Play) Request--Msr
typedef struct tagMvStopReq
{
    s32    nMsrWinId;   // play window index, add fo multi win play
    s32    nMsrCtxt;   // for extend, context
    s32    nMsrSesn;   // for extend, session
    s32    nMsrRetn;   // for extend, retain
    s32    nMsrRsvd;   // for extend, reserve
}TMvStopReq;


// Mobile Video Start or Stop (Play) or Ptz Response--Mr
typedef struct tagMvRsp
{
    s32    nMrWinId;   // play window index, add fo multi win play
    s32    nMrErrNo;   // error no
    u32    dwMrCsNd;   // client in server node
    s32    nMrCtxt;   // for extend, context
    s32    nMrSesn;   // for extend, session
    s32    nMrRetn;   // for extend, retain
    s32    nMrRsvd;   // for extend, reserve
}TMvRsp;

// Mobile Video Ptz Control Request--Pr
typedef struct tagMvPtzReq
{
    s32    nPrWin;    // play window index, add fo multi win play
    s32    nPrCmd;    // øÿ÷∆√¸¡Ó
    u8     abyPrBuf[MVMAX_PTZCMD_LEN]; // øÿ÷∆◊÷∂Œµƒ–≈œ¢£¨¿˝»Á≤Ω≥§£¨µ»º∂µ»
    s32    nPrLen;    // øÿ÷∆◊÷∂Œµƒ–≈œ¢≥§∂»
    s32    nPrCtxt;   // for extend, context
    s32    nPrSesn;   // for extend, session
    s32    nPrRetn;   // for extend, retain
    s32    nPrRsvd;   // for extend, reserve
}TMvPtzReq;

// client connect-Cc
typedef struct tagMvCltCnct
{
	s32    nCcWinId;  // connect node
	u32    dwCcNode;  // connect node
    s32    nCcCtxt;   // for extend, context
    s32    nCcSesn;   // for extend, session
    s32    nCcRetn;   // for extend, retain
	u32    dwCcRsvc;  // for extend, reserve
}TMvCltCnct; // the instance of client

typedef struct tagMvcIosAppCb
{
    s32    nAcWinId; // app callback window index
    s32    nAcMsgTp; // app callback message type
    s32    nAcErrNo; // App callback error no
    s32    nAcCtxt;  // App callback for extend, context
    s32    nAcSesn;  // App callback for extend, session
    s32    nAcRetn;  // App callback for extend, retain
    s32    nAcRsvd;  // App callback for extend, reserve
    char   achSessionID[256];
}TMvcIosAppCb;

struct AudioBufferHead
{
    int bufcount;
    int usedbufcount;
    int saveindex;
    int readindex;
};

#define AudioBufLen 1000

 struct AudioBufferBody
{
    unsigned char audiobuf[5120];
    unsigned char unsed;
};

 struct AudioBuffer_IOS
{
    //unsigned char Buffer[512][30];
    struct AudioBufferHead m_bufHead;
    struct AudioBufferBody m_buffbody[AudioBufLen];
};

#pragma pack()


#import <Foundation/Foundation.h>
//#import <UIKit/UIKit.h>
//#import <MediaPlayer/MediaPlayer.h>
//#import <AudioToolbox/AudioToolbox.h>

@interface MobileSDK : NSObject

// suker-20140509 add fo multi win play
typedef s32 (*pfMvcAppIosMsgCb)(u32 dwType, u8* pbyBuf, u16 wBufLen);

typedef void (*pIOS_FlvVideoCB)(int nWinID,char* pBuffer,int nLen,int nWidth,int nHeight,char *pSessionID);
typedef void (*pIOS_FlvAudioCB)(int nWinID,char* pBuffer,int nLen,int nChannelNum,int nSampleRate,char *pSessionID);

/**
   播放时，ptz控制接口
  @param ptPtz TMvPtzReq的数据结构体，必须要传入的参数为winID 和控制命令nPrCmd
 */
-(int) IOS_CsPtzCtrl:  (TMvPtzReq) ptPtz;

/**
 开始播放接口
 @param _tPlay TMvPlayReq的数据结构体，必须要传入的参数为winID 和播放的URL
 
 ret,0-succ not0-fail
 */
-(int) IOS_CsBrowseStart:(TMvPlayReq )_tPlay  andCallbackMethod:(pfMvcAppIosMsgCb )phMsgCb;

/**
   停止视频播放
  @param _tmvopt TMvStopReq的数据结构体，必须要传入的参数为winID
  @param isDeInitOSP 是否反初始化ops，当用户按下home键，必须传入yes 反初始化ops
 ret,0-succ not0-fail
 */
-(int) IOS_CsBrowseStop: (TMvStopReq )_tmvopt andDeInitOSP:(BOOL)isDeInitOSP;

/**
    获取播放的是状态信息，码率信息 丢失码率信息
 @param IntPlayState  指针类型， 获取播放时的状态，用户可以根据播放状态处理相关播放进行中的异常
 @param IntRecvData   指针类型   获取播放时的状态，接受的码率
 @param IntLossData   指针类型   获取播放时的状态，丢失的码率
 */
-(int)GetNetState:(int *)IntPlayState forRcvData:(int *)IntRecvData forLossData:(int *)IntLossData;

/**
  获取视频流数据，一般和 ‘IOS_CsRtnVidFrm:(TMvPlayReq )_tPlay ’ 成对出现，用户确保IOS_CsBrowseStart 成功后调用该接口 ，即可以获得视频流数据
  @param _tPlay TMvPlayReq的数据结构体，必须要传入的参数为winID
  @param pbyBuf 二级指针，用户获取得到的视频数据，更具这个数据用户开始绘图
  @param width  获取视频分辨率的宽，
  @param height 获取视频分辨率的高
 */
-(int) IOS_CSGetVidFrm:(TMvPlayReq )_tPlay andPbyBuf:( unsigned char**)pbyBuf andWidth:(s32 *)width andHeight:(s32 *)height;

/**
    重置视频流， 必须和 ‘IOS_CSGetVidFrm’成对出现
  @param _tPlay TMvPlayReq的数据结构体，必须要传入的参数为winID
 */
-(int)IOS_CsRtnVidFrm:(TMvPlayReq )_tPlay ;


/*
 IOS_csGetAud AudType参考如下枚举值
 typedef enum emAudioType
 {
 emNonSense = 0,
 emAdpcm,
 emAACLC,
 emPCMA,
 emPCMU,
 }AUDIOTYPE;
 */
- (int)IOS_csGetAud:(u8)byId andPpbyDat:(u8 **)ppbyDat andLen:(s32 *)len andAudType:(s32*)AudType;
- (int)IOS_CsRtnAduFrm;

- (long)IOS_CsStartFlvWithNWinID:(int)nWinID
                        pSessionID:(char*)pSessionID
                        pFlvUrl:(char *)pFlvUrl
                        phMsgCb:(pfMvcAppIosMsgCb)phMsgCb
                           pVCB:(pIOS_FlvVideoCB)pVCB
                           pACB:(pIOS_FlvAudioCB)pACB;

- (int)IOS_CsStopFlvWithNHandle:(long)nHandle
                         nWinID:(int)nWinID;

- (void)IOS_CsGetVersion;

+ (void)IOS_CsUninitOsp;

//-1 fail; 0 succ
+ (int)IOS_CsFlv2Mp4WithflvUrl:(char*)in_filename
                   mp4Url:(char*)out_filename;
/*
- (char*)IOS_CsGetFlvVideoWithNWinID:(int)nWinID
                              pWidth:(int *)pWidth
                             pHeight:(int *)pHeight
                          pOutputLen:(int *)pOutputLen;

- (char*)IOS_CsGetFlvAudioWithNWinID:(int)nWinID
                          pOutputLen:(int *)pOutputLen;
*/
@end

#endif

