#include <stdio.h>
int a,b,t //定义变量a,b,t
void main()
{
 scanf("a=%d b=%d",&a,&b); //输入a和b
 t=a; //将a的值赋给t
 a=b; //将b的值赋给a
 b=t; //将t的值赋给b
 printf("a=%d b=%d\n",a,b); //输出a与b的值
}
