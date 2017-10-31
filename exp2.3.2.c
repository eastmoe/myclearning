#include <stdio.h>
int a,b; //定义a与b
void main()
{
 scanf("a=%d b=%d",&a,&b); //输入a和b的值
 a=a+b; //将a+b的值赋给a
 b=a-b; //将a-b的值赋给b
 a=a-b; //将a-b的值赋给a
 printf("a=%d b=%d",a,b); //输出a与b的值
}
