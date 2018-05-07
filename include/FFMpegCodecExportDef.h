#pragma once

/************************************************************************/
// 1、在XCodec动态库版本中，有宏定义XCODEC_EXPORTS，因此XCODEC_EXT作为导出符使用
// 2、在使用XCodec的动态库版本中，XCodec.h中定义了USE_XCODEC_DLL_VER，因此XCODEC_EXT作为导入符使用
// 3、在XCodec的静态库版本，以及使用这个静态库版本的地方，XCODEC_EXT无具体定义
/************************************************************************/


#ifdef XFFMpegCodec_EXPORTS
	#define XFFMCODEC_EXT __declspec(dllexport)
#elif defined(USE_FFMCODEC_DLL_VER)
	#define XFFMCODEC_EXT __declspec(dllimport)
#else
	#define XFFMCODEC_EXT
#endif // XFFMpegCodec_EXPORTS
