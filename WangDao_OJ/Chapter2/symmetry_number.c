#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
/*
int main()//��ʾRuntimeError
{
    int i;//���������
    int j = 0;//������λ��
    scanf("%d", &i);
    int x = i;
    while (x != 0) {//�õ�������λ��
        j++;
        x = x / 10;
    }
    int k = j / 2;
    int l = k;
    int p = 1;
    int m, n;//m,n�ֱ��ʾ�ߵ�λ
    int q, r;//Ϊ��%������������
    if (j == 2 * k) {//λ��Ϊż��
        while (l) {
            q = i / pow(10, k + l - 1);
            m = q % 10;
            r = pow(10, p);
            n = ((i % r) / pow(10, p - 1));
            if (m != n) {
                printf("no");
                return -1;
            }
            p++;
            l--;
        }
        printf("yes");
    }
    else{//λ��Ϊ����
        while (l >= 0) {
            q = i / pow(10, k + l);
            m = q % 10;
            r = pow(10, p);
            n = ((i % r) / pow(10, p - 1));
            if (m != n) {
                printf("no");
                return -1;
            }
            p++;
            l--;
        }
        printf("yes");
    }
    return 0;
}
*/
int main(void) {//�������������ת��Ϊ����˳��Ȼ�����ں������������ж����������Ƿ��Ǻ�
    int sum, k, m;
    scanf("%d", &k);
    sum = 0;
    m = k;
    while (m) {
        sum = sum * 10 + m % 10;
        m /= 10;
    }
    if (sum == k) {
        printf("yes");
    }
    else {
        printf("no");
    }
}