#pragma once

/************************************************************************/
// 1����XCodec��̬��汾�У��к궨��XCODEC_EXPORTS�����XCODEC_EXT��Ϊ������ʹ��
// 2����ʹ��XCodec�Ķ�̬��汾�У�XCodec.h�ж�����USE_XCODEC_DLL_VER�����XCODEC_EXT��Ϊ�����ʹ��
// 3����XCodec�ľ�̬��汾���Լ�ʹ�������̬��汾�ĵط���XCODEC_EXT�޾��嶨��
/************************************************************************/


#ifdef XFFMpegCodec_EXPORTS
	#define XFFMCODEC_EXT __declspec(dllexport)
#elif defined(USE_FFMCODEC_DLL_VER)
	#define XFFMCODEC_EXT __declspec(dllimport)
#else
	#define XFFMCODEC_EXT
#endif // XFFMpegCodec_EXPORTS
