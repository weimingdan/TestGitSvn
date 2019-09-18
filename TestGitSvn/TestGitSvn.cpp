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
};

int main()
{
	Log::Init();
	CORE_TRACE("this is a Trace log");
	CORE_INFO("this is a Info log");
	CORE_WARN("this is a Warn!");
	CORE_ERROR("this is an Error!!");
	CORE_FATAL("this is an error!!!");
	CORE_INFO("release 0.1.2");
	auto obj = MyClass();
	obj.a = 123;
	CORE_INFO("new request");
	CORE_INFO("struct info: {0}", obj.a);
    return 0;
}

