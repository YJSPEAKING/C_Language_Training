#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int ten = 1, five = 1, two = 1, one = 1;//至少一张
	int way = 0;//换法数量
	for (ten = 1; ten <= 10; ten++) {
		for (five = 1; five <= 20; five++) {
			for (two = 1; two <= 50; two++) {
				for (one = 1; one <= 100; one++) {
					if (10 * ten + 5 * five + 2 * two + one == 100 && ten + five + two + one == 40)
						way++;
				}
			}
		}
	}
	printf("%d\n", way);
	return 0;
}