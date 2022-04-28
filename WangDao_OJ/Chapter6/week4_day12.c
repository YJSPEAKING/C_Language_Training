#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/* [学习] 字符指针与字符数组的初始化
int main()
{
	char* p = "hello";//把字符串型常量"hello"的首地址赋给p
	char c[10] ="hello";//等价于strcpy(c,"hello");
	c[0] = 'H';
	//p[0] = 'H';	//不可以对常量区数据进行修改
	printf("c[0]=%c\n", c[0]);
	printf("p[0]=%c\n", p[0]);
	p = "world";//将字符串world的地址赋给p
	//c = "world";	//非法,c不是一个变量
	return 0;
}
*/

/* [学习] 二级指针的偏移
* //让pi指向pj
void change(int** pi, int* pj) {
	*pi = pj;//这里*pi就是指的main函数中的pi
}
int main() {
	int i = 1, j = 100;
	int* pi, * pj;
	pi = &i;
	pj = &j;
	printf("i=%d,*pi=%d,*pj=%d\n", i, *pi, *pj);//i=1,*pi=1,*pj=100
	change(&pi, pj);//&pi就是二级指针(指针的指针)
	printf("after change i=%d,*pi=%d,*pj=%d\n", i, *pi, *pj);//i=1,*pi=100,*pj=100
}
*/

int step_num(int i) {
	if (i == 1) {
		return 1;
	}
	else if (i == 2) {
		return 2;
	}
	else {
		return step_num(i - 1) + step_num(i - 2);
	}
}
int main() {
	int n, step;
	scanf("%d", &n);
	step = step_num(n);
	printf("%d", step);
	return 0;
}