#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef int Elemtype;
typedef struct LNode {
	Elemtype data;
	struct LNode* next;//指向下一个结点
}LNode,*LinkList;//可以用LNode替代struct LNode

////头插法建立链表
//LinkList Creat_Head(LinkList& L) {
//	LNode* s;
//	int x;
//	L = (LinkList)malloc(sizeof(LNode));//创建头结点，L为结构体指针
//	L->next = NULL;
//	scanf("%d", &x);
//	while (x != 9999) {
//		//LNode*和LinkList一样都是指向结点的指针，但是LinkList一般指向头结点
//		s = (LNode*)malloc(sizeof(LNode));//创建子节点
//		s->data = x;
//		s->next = L->next;
//		L->next = s;
//		scanf("%d", &x);
//	}
//	return L;
//}
//
////尾插法建立链表
//LinkList Creat_Tail(LinkList& L) {
//	LNode* s, * r;
//	int x;
//	L = (LinkList)malloc(sizeof(LNode));//创建头结点
//	r = L;//让r始终指向尾结点
//	scanf("%d", x);
//	while (x != 9999) {
//		s = (LNode*)malloc(sizeof(LNode));//创建子结点
//		s->data = x;
//		r->next = s;
//		r = s;//r指向新的表尾结点
//		scanf("%d", x);
//	}
//	r->next = NULL;
//	return L;
//}
//
////打印链表
//void Print_List(LinkList L) {//此时不使用引用
//	L = L->next;
//	while (L != NULL) {
//		printf("%3d", L->data);
//		L = L->next;
//	}
//	printf("\n");
//}
//
//int main() {
//	LinkList L;//链表头，是结构体指针类型
//	LinkList Find;//存储拿到的结点
//	Creat_Head(L);//头插法插入数据
//	Print_List(L);
//	Creat_Tail(L);//尾插法插入数据
//	return 0;
//}

//头插法
LinkList Creat_Head(LinkList& L) {
	int x;
	LNode* s;
	L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	scanf("%d", &x);
	while (x != 9999) {
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);
	}
	return L;
}

//尾插法
LinkList Creat_Tail(LinkList& L) {
	int x;
	LNode* s, * r;
	L = (LinkList)malloc(sizeof(LNode));
	r = L;
	scanf("%d", &x);
	while (x != 9999) {
		s = (LNode*)malloc(sizeof(LNode));
		s->data = x;
		s->next = r->next;
		r->next = s;
		r = s;
		scanf("%d", &x);
	}
	r->next = NULL;
	return L;
}

//打印链表中每个结点的值
void Print_List(LinkList L){
	L = L->next;
	while (L != NULL){
		printf("%d", L->data);//打印当前结点数据
		L = L->next;//指向下一个结点
		if (L != NULL){
			printf(" ");
		}
	}
	printf("\n");
}

int main() {
	LinkList L;//链表头，是结构体指针类型
	LinkList Find;//存储拿到的结点
	Creat_Head(L);//头插法插入数据
	Print_List(L);
	Creat_Tail(L);//尾插法插入数据
	Print_List(L);
	return 0;
}