#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, i = 1;//n表示输入的数，i表示n!的值
	scanf("%d", &n);
	while (n != 1) {
		i = i * n--;
	}
	printf("%d\n", i);
	return 0;
}