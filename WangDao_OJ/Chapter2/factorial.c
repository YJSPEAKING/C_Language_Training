#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, i = 1;//n��ʾ���������i��ʾn!��ֵ
	scanf("%d", &n);
	while (n != 1) {
		i = i * n--;
	}
	printf("%d\n", i);
	return 0;
}