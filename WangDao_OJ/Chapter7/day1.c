#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* [学习] 结构体的scanf读取和输出
* //算结构体大小的时候需要考虑边界对齐
struct student {
	int num;
	char name[20];
	char sex;
	int age;
	float score;
};//结构体类型声明，最后要加分号
int main() {
	struct student s = { 1001,"lele",'M',20,85.4 }; // 定义及初始化
	struct student sarr[3];
	int i;
	printf("%d %s %c %d %f\n", s.num, s.name, s.sex, s.age, s.score);
	for (i = 0; i < 3; i++) {
		scanf("%d%s %c%d%f", &sarr[i].num, sarr[i].name, &sarr[i].sex, &sarr[i].age, &sarr[i].score);
	}
	for (i = 0; i < 3; i++) {
		printf("%d %s %c %d %f", sarr[i].num, sarr[i].name, sarr[i].sex, sarr[i].age, sarr[i].score);
	}
	return 0;
}
*/

/* [学习] 结构体指针
struct student {
	int num;
	char name[20];
	char sex;
};
int main() {
	struct student s = { 1001,"wangle",'M' };
	struct student* p;
	p = &s;//结构体指针
	//二者写法不同但等价
	printf("%d %s %c\n", (*p).num, (*p).name, (*p).sex);//"."的优先级更高，需要把*p括起来
	printf("%d %s %c\n", p->num, p->name, p->sex);
	
	//结构体初始化
	struct student sarr[3] = { 1001,"lilei",'F',1005,"zhangsan",'M',1006,"lisi",'M' };
	p = sarr;
	int num;
	num = p->num++; //num=p->num; p->num++
	printf("num=%d, p->num=%d\n", num, p->num); //1001,1002
	num = p++->num; //num-p->num;p++
	printf("num=%d, p->num=%d\n", num, p->num);//1002,1005

	return 0;
}
*/

struct student {
	int num;
	char name[20];
	char sex;
};
int main() {
	struct student s;
	scanf("%d%s %c", &s.num, s.name, &s.sex);
	printf("%d %s %c\n", s.num, s.name, s.sex);
	return 0;
}