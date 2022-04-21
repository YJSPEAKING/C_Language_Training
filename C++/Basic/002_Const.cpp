#include <iostream>
using namespace std;
//定义常量两种方式：1、#define；2、const
#define Day 7
int main()
{
	cout << "一周有" << Day << "天" << endl;
	const int month = 12;
	cout << "一年有" << month << "月" << endl;
	return 0;
}