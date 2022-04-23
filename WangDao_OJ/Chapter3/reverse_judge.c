#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char c[50], d[50];
	gets(c);
	int len = strlen(c);
	for (int i = 0; i < len / 2; i++) {
		d[i] = c[len - i - 1];
		d[len - i - 1] = c[i];
	}
	int result = strcmp(c, d);
	if (result < 0){
		printf("%d\n", -1);
	}
	else if (result > 0){
		printf("%d\n", 1);
	}
	else {
		printf("%d\n", 0);
	}
	return 0;
}