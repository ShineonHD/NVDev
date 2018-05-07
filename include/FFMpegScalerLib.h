#pragma once

#include "..\..\..\..\XCommon\include\XMediaFmtLib.h"

#ifndef _LIB

	#pragma comment(lib, __FILE__"\\..\\..\\..\\..\\SDK\\ffmpeg\\lib\\avutil.lib")
	#pragma comment(lib, __FILE__"\\..\\..\\..\\..\\SDK\\ffmpeg\\lib\\swscale.lib")
	//#pragma comment(lib, __FILE__"\\..\\..\\..\\..\\SDK\\ffmpeg\\lib\\avfilter.lib")
	
	#ifdef _DEBUG
		#pragma comment(lib, __FILE__"\\..\\..\\..\\..\\lib\\FFMpegScalerLibD.lib")
	#else
		#pragma comment(lib, __FILE__"\\..\\..\\..\\..\\lib\\FFMpegScalerLib.lib")
	#endif

#endif //_LIB

#include "..\FFMpegScalerLib\FFMpegScalerHeads.h"
