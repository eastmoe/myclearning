#include "stdio.h"
reverse(int number)  //定义整型函数reverse
{
	if(number!=0)  //用if控制递归调用条件，number不等于0时启用递归
	{
		int a;  //定义变量a，用于存放单个数字
	 	a=number%10;  //a被赋值为number除以10的余数
                printf("%d",a);  //输出a
		number=number/10;  //number被赋值为自身的十分之一
	        reverse(number);  //递归调用reverse
	}
        else
	{
		printf("\n");  //如果number为0，输出换行符表示结束
	}
	return number;  //if判断之外，返回number的值
}

void main()
{
	static int number;  //定义静态变量number
        printf("请输入一个数number:");
	scanf("%d",&number);  //输入number
	reverse(number);  //调用函数reverse
}

