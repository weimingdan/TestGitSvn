// TestGitSvn.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "MyLog.h"
class Calcu
{
	int cal()
	{
		return 0;
	}
};

struct Matrix
{
	int x;
	int y;
};

int addNumber(int a, int b)
{
	return a + b;
}

int subNumber(int a, int b)
{
	return a - b;
}

int multi(int a, int b)
{
	return a*b;
}

int divNumber(int a, int b)
{
	if (b == 0)
	{
		return 0;
	}
	return a / b;
}

int getNumber(int a)
{
	return a + 123;
}

struct MyClass
{
	int a = 0;
	int b = 2;
	void myLog()
	{
		CORE_INFOD("oh my log");
	}
};

void printLog()
{
	// CORE_INFO("this is a log function: {0}[{1}]", __FUNCTION__, __LINE__);
	CORE_INFOD("THIS IS detail info {} {} {}", 1, "AAA", "BBB");

}

int main()
{
	Log::Init();
	CORE_INFO("this is a Info log");
	CORE_WARN("this is a Warn!");
	CORE_ERROR("this is an Error!!");
	CORE_FATAL("this is an Error!!!");
	CORE_INFO("release 0.1.2");
	auto obj = MyClass();
	obj.a = 123;
	CORE_INFO("new request");
	CORE_INFO("struct info: {0}", obj.a);
	printLog();
	obj.myLog();
	CORE_ERRORD("error with detail info");
	CORE_WARND("detail warning");
    return 0;
}

