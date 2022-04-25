#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void divide(int* j) {//j³ÆÎªÐÎ²Î
	*j = *j / 2;
}
int main() {
	int i;
	scanf("%d", &i);
	divide(&i);
	printf("%d\n", i);
	return 0;
}