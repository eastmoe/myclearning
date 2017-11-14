//牛顿迭代法为利用切线逼近方程的根。先将近似值带入f(x)，计算f(x)的值，再将x带入f'(x)，计算f'(x)的值。则x1=x-(f(x)/f'(x))。（设x1为更精确的根，
//这里参考了“https://zh.wikipedia.org/zh-hans/牛顿法”-“方法说明”里的简化公式）
//之后利用for循环可求得x更进一步精确的值。
#include <stdio.h>
float x,y,x1,y1; //定义运算变量
int i,n;  //定义计数变量
void main()
{
  x=1.5; //初次赋值
  printf("请输入迭代次数:");
  scanf("%d",&n);  //输入迭代次数
  for(i=0;i<n;i++)
  {
   y=2*x*x*x-4*x*x+3*x-6;  //将函数运算结果赋值给y
   y1=6*x*x-8*x+3;  //将导函数运算结果赋值给y1
   x1=x-y/y1;  //计算新的x的值并赋给x1
   printf("x第%d迭代后的值为%f\n",i+1,x1); //输出x1的值
   x=x1;
  }
}
