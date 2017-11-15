#include <stdio.h>
void main()
{
 int i; //定义计数器为整型变量i
 long int result; //定义结果为长整型变量result
 result=0; //初始化result
 for(i=1;i<=10;i++)
 {
  result=result+i*i; //result=上次结果+本次计数器的平方
 }
 printf("Result=%ld\n", result); //输出result
}
