#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;//元素个数
	scanf("%d", &i);
	int a[100];
	int num = 0;
	for (int j = 0; j < i; j++) {
		scanf("%d", &a[j]);
	}
	for (int j = 0; j < i; j++) {
		if (a[j] == 2) {
			num++;
		}
	}
	printf("%d\n", num);
	return 0;
}