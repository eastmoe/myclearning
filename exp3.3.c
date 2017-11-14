#include <stdio.h>
float x,y,x1,y1; //定义运算变量
int i,n;  //定义计数变量
void main()
{
  x=1.5; //初次赋值
  printf("Input the times of compute:");
  scanf("%d",&n);  //输入迭代次数
  for(i=0;i<n;i++)
  {
   y=2*x*x*x-4*x*x+3*x-6;  //将函数运算结果赋值给y
   y1=6*x*x-8*x+3;  //将导函数运算结果赋值给y1
   x1=x-y/y1;  //计算新的x的值并赋给x1
   printf("x=%f\n",x1); //输出x1的值
   x=x1;
  }
  system("pause");  //暂停
}
