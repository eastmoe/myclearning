#include <stdio.h>
int fun(int x)                          //定义fun函数
{
	int y;                          //定义返回变量
	if (x > 0)
	    y = 1;
	else if (x = 0)
	    y = 0;
	else
	    y = -1;
	return y;                       //返回变量y
}
void main()
{
	int x;
	scanf("%d", &x);                //输入x
	printf("%d\n", fun(x));         //调用fun函数判断正负并输出
	system("pause");
}
