#define _CRT_SECURE_NO_WARNINGS

//����a,b,c����ֵ��������������

#include <stdio.h>			//����Ԥ����ָ��
int main()				//����������
{						//������ʼ
	int a, b, c, max;		//�������a��b��c��max
	printf("plase input a,b,c:\n");		//�����ʾ��䡰plase input a,b,c:��
	scanf("%d,%d,%d,", &a, &b, &c);		//�Ӽ����������a,b,c��ֵ
	max = c;				//��c��ֵ����max
	if (a > c)			//�ж�a�Ƿ����c
		max = a;		//���� ��a��ֵ���¸�ֵ��max����������Ĭ��max=c
	if (b > c)			//ͬ��
		max = b;		//ͬ��
	printf("���ֵΪ��%d\n", max);		//������ֵ
	return 0;			//���غ���ֵΪ0
}						//��������

