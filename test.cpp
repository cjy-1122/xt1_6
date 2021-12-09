#define _CRT_SECURE_NO_WARNINGS

//输入a,b,c三个值，输出其中最大者

#include <stdio.h>			//编译预处理指令
int main()				//定义主函数
{						//函数开始
	int a, b, c, max;		//定义变量a，b，c，max
	printf("plase input a,b,c:\n");		//输出提示语句“plase input a,b,c:”
	scanf("%d,%d,%d,", &a, &b, &c);		//从键盘输入变量a,b,c的值
	max = c;				//将c的值赋给max
	if (a > c)			//判断a是否大于c
		max = a;		//成立 则将a的值从新赋值给max；不成立则默认max=c
	if (b > c)			//同上
		max = b;		//同上
	printf("最大值为：%d\n", max);		//输出最大值
	return 0;			//返回函数值为0
}						//函数结束

