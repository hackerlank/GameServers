// testlibeventSrv.cpp : 定义控制台应用程序的入口点。
//

#ifndef __SERVER_H__
#define __SERVER_H__
#include "stdafx.h"
#include "LibEvent.h"
#include "HttpLogic.h"

int _tmain(int argc, _TCHAR* argv[])
{
	HttpLogic::getIns()->requestManagerData();
	getchar();
	return 0;
}

#endif