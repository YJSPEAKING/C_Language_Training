#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/* [学习] 指针与自增自减运算符
int main() {
	int a[3] = { 2,7,8 };
	int* p;
	int j;
	p = a;//让指针变量p指向数组a的开头
	j = *p++;//j=*p;p++;	永远都是先去掉++，第二步看另一个运算符的优先级
	printf("a[0]=%d,j=%d,*p=%d\n", a[0], j, *p);//得到a[0]=2,j=2,*p=7
	j = p[0]++;//j=p[0];p[0]++;
	printf("a[0]=%d,j=%d,*p=%d\n", a[0], j, *p);//得到a[0]=2,j=7,*p=8
	return 0;
}
*/

/* [学习] 指针与一维数组
void change(char* b) {
	//三种方法效果类似
	*b = 'H';
	b[1] = 'E';
	*(b + 2) = 'L';
}
int main() {
	char a[10] = "hello";
	change(a);//数组名作为实参传递给子函数时弱化为指针
	puts(a);
}
*/

/* [学习] 指针与动态内存申请
int main() {
	int i;
	scanf("%d", &i);
	char* p;
	//malloc申请空间的单位是字节(malloc和new申请的空间在堆内存)
	p = (char*)malloc(i);
	strcpy(p, "malloc success");
	puts(p);
	//释放空间时p的值要和最开始malloc返回的值相同
	free(p);
	//p不置为NULL则p变为野指针(指针p指向了一块不属于它的区域)
	p = NULL;
	return 0;
}
*/

/* [学习] 栈空间与堆空间的差异
char* print_stack() {
	char c[] = "I am print_stack";
	//能正常打印
	puts(c);
	return c;
}
char* print_malloc() {
	char* c = (char*)malloc(30);
	strcpy(c, "I am print_malloc");
	//能正常打印
	puts(c);
	return c;
}
int main() {
	char* p;
	//栈空间会随着子函数的结束而释放
	p = print_stack();
	//不能正常打印
	//puts(p);
	//堆空间不会随着子函数的结束而释放，必须自己free
	p = print_malloc();
	//能正常打印
	puts(p);
	return 0;
}
*/

int main() {
	char* p;
	int n;
	scanf("%d", &n);
	p = (char*)malloc(n);
	//fflush(stdin);//fflush已经不能用了
	rewind(stdin);//VS中可以使用rewind清空缓冲区
	/*或使用以下来清空缓冲区中的换行(oj中使用的是GCC，只有这种能ac)
	char c;
	scanf("%c", &c);
	*/
	gets(p);
	puts(p);
}
