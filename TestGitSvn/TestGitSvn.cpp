// TestGitSvn.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

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

int main()
{
	std::cout << "hello world" << std::endl;
	std::cout << "this is a fix bug1" << std::endl;
	std::cout << "please commit something" << std::endl;
	std::cout << "hot fix bug" << std::endl;
	std::cout << "hot fix bug 111" << std::endl;
	std::cout << "feature1" << std::endl;
	std::cout << "release2" << std::endl;
	std::cout << "this is &&&&& bug1" << std::endl;
	std::cout << "this is 0.12.2d" << std::endl;
	
	int a = addNumber(2, 3);
    return 0;
}

