#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//#define MaxSize 50
//typedef int ElemType;
////静态分配
//typedef struct {
//	ElemType data[MaxSize];
//	int length;//记录当前顺序表中元素个数
//}SqList;
//
////将e插入顺序表L第i个位置
//bool ListInsert(SqList& L, int i, ElemType e) {//使用引用进行操作
//	if (L.length >= MaxSize) {//元素存满了
//		return false;
//	}
//	if (i<1 || i>L.length + 1) {//插入位置非法
//		return false;
//	}
//	//未存满且插入位置合法
//	for (int j = L.length; j >= i; j--) {//j=i时，L.data[j]是第i+1个元素也要进行操作
//		L.data[j] = L.data[j - 1];
//	}
//	L.data[i - 1] = e;
//	L.length++;
//	return true;
//}
//
////删除顺序表L第i个元素，用e保存被删除元素
//bool ListDelete(SqList& L, int i, ElemType& e) {
//	if (i<1 || i>L.length) {//删除位置非法
//		return false;
//	}
//	e = L.data[i - 1];
//	for (int j = i; j < L.length; j++) {//L.data[L.length]是第L.length+1个元素，不需要移动
//		L.data[j - 1] = L.data[j];
//	}
//	L.length--;
//	return true;
//}
//
////输出顺序表L中元素值为e的位置
//int LocateElem(SqList L, ElemType e) {
//	int i;
//	for (i = 0; i < L.length; i++) {//L.data[L.length]是第L.length+1个元素，不需要对比
//		if (L.data[i] == e) {
//			return i + 1;
//		}
//	}
//	return 0;
//}
//
////打印顺序表元素
//void PrintList(SqList& L) {
//	for (int i = 0; i < L.length; i++) {
//		printf("%3d", L.data[i]);//要求元素打印在一排
//	}
//	printf("\n");
//}
//
//int main() {
//	SqList L;
//	bool ret;//查看返回值，只有C++才能在不加头文件的情况下用bool
//	ElemType del;//保存删除的元素
//	//手动存储元素
//	L.data[0] = 1;
//	L.data[1] = 2;
//	L.data[2] = 3;
//	L.length = 3;
//	printf("Initial List is");
//	PrintList(L);
//	ret = ListInsert(L, 2, 60);//使用C++的引用，在L的第2个位置插入60
//	if(ret) {
//		printf("Insert Success\n");
//		PrintList(L);
//	}
//	else {
//		printf("Insert Fail\n");
//	}
//	ret = ListDelete(L, 1, del);//删除L的第1个元素，用del保存
//	if (ret) {
//		printf("Delete Success\n");
//		printf("Delete Num Is %d\n", del);
//		PrintList(L);
//	}
//	else {
//		printf("Ddelete Fail\n");
//	}
//	ret = LocateElem(L, 60);//在顺序表L中查找元素值为60的位置
//	if (ret) {
//			printf("Locate Success\n");
//			printf("Location of 60 Is %d\n", ret);
//	}
//	else {
//			printf("Locate Fail\n");
//	}
//	return 0;
//}

#define MaxSize 50
typedef int ElemType;
typedef struct {
	ElemType data[MaxSize];
	int length;
}SqList;
bool ListInsert(SqList& L, ElemType i, int e) {
	if (i<1 || i>L.length || L.length == MaxSize) {
		return false;
	}
	else {
		for (int j = L.length; j >= i; j--) {
			L.data[j] = L.data[j - 1];
		}
		L.length++;
		L.data[i - 1] = e;
		return true;
	}
}
bool ListDelete(SqList& L, int i) {
	if (i > L.length || i < 1) {
		return false;
	}
	else {
		for (int j = i; j < L.length; j++) {
			L.data[j - 1] = L.data[j];
		}
		L.length--;
		return true;
	}
}
void PrintList(SqList& L) {
	if (L.length == 0) {
		printf("List is empty\n");
	}
	else {
		for (int j = 0; j < L.length; j++) {
			printf("%3d", L.data[j]);
		}
		printf("\n");
	}
}
int main() {
	SqList L;
	int j;//插入的元素
	int loc;//删除元素的位置
	bool ret;//返回值
	L.data[0] = 1;
	L.data[1] = 2;
	L.data[2] = 3;
	L.length = 3;
	scanf("%d", &j);
	ret = ListInsert(L, 2, j);//将j插入到第2个位置
	if (ret) {
		PrintList(L);
	}
	else {
		printf("false\n");
	}
	scanf("%d", &loc);
	ret = ListDelete(L, loc);
	if (ret) {
		PrintList(L);
	}
	else {
		printf("false\n");
	}
	return 0;
}