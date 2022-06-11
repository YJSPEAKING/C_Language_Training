#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* [学习] typedef的使用
* //结构体的别名stu 和 结构体指针的别名pstu
typedef struct student {
	int num;
	char name[20];
	char sex;
}stu, * pstu;
int main() {
	stu s = { 1001,"wangle",'M' };
	pstu p;
	p = &s;
	printf("p->num=%d\n", i, p->num);
	return 0;
}
*/

/* [学习] C++引用（须新建后缀为.cpp的文件！）
//情形1:通过引用改变参数值
void modify_num(int& b) {    //把&写到形参位置是C++的语法，称为引用，这个时候对b的操作和对a的操作是一致的
	b++;
}
int main() {
	int a = 10;
	modify_num(a);
	printf("%d\n", a);
	return 0;
}
//如果不用C++的引用，则需如下
void modify_num(int* b) {
	(*b)++;    //所有的b要换成*b
}
int main() {
	int afhawiuyangzhijiang1203yangzhijian = 10;
	modify_num(&a);    //a处要用取地址符
	printf("%d\n", a);
	return 0;
}

//情形2：通过引用改变指针
void modify_pointer(int*& p) {    //先声明指针类型，再引用
	p = (int*)malloc(20);
	p[0] = 5;
}
int main() {
	int* p = NULL;
	modify_pointer(p);
	printf("p[0]=%d\n", p[0]);
	return 0;
}

//如果不用C++的引用，则需如下
void modify_pointer(int** p) {
	*p = (int*)malloc(20);    //所有的p要改为*p（二级指针）
	*p[0] = 5;
}
int main() {
	int* p = NULL;
	modify_pointer(&p);    //p处要用取地址符
	printf("p[0]=%d\n", p[0]);
	return 0;
}
*/
void r_w(char*& p) {
	p = (char*)malloc(100 * sizeof(char));
	fgets(p, 100, stdin);
}
int main() {
	char* p = NULL;
	r_w(p);
	puts(p);
	return 0;
}