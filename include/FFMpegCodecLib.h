#pragma once

#include "FFMpegScalerLib.h"

//#pragma comment(lib, "avdevice.lib")
//#pragma comment(lib, "avfilter.lib")
//#pragma comment(lib, "postproc.lib")
//#pragma comment(lib, "swresample.lib")

#ifndef _LIB

	#pragma comment(lib, __FILE__"\\..\\..\\..\\..\\SDK\\ffmpeg\\lib\\avformat.lib")
	#pragma comment(lib, __FILE__"\\..\\..\\..\\..\\SDK\\ffmpeg\\lib\\avcodec.lib")

	#ifdef _DEBUG
		#pragma comment(lib, __FILE__"\\..\\..\\..\\..\\lib\\FFMpegCodecLibD.lib")
	#else
		#pragma comment(lib, __FILE__"\\..\\..\\..\\..\\lib\\FFMpegCodecLib.lib")
	#endif


#endif //_LIB


#include "..\FFMpegCodecLib\FFMpegCodecHeads.h"
