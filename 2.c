
#include <stdio.h>
#include <math.h>                          //支持sqrt函数


void main()
{
float a, b, c, x1, x2, step;               //定义a、b、c、x1、x2与中间变量step
printf(“本程序可用来解形如ax?+bx+c=0（x≠0）的一元二次方程。\n”);
system(“pause”);
printf(“请输入a:”);
scanf(“f%”, &a);                           //录入a
printf(“请输入b:”);
scanf(“f%”, &b);                           //录入b
printf(“请输入c:”);
scanf(“f%”, &c);                           //录入c
step = b*b – 4 * a*c;                      //计算b?-4ac
step = sqrt(step);                         //计算（b?-4ac）^（1/2）
x1 = (b + step) / (2 * a);                 //计算x1
x2 = (-b + step) / (2 * a);                // 计算x2
printf(“方程的解为\n”);
printf(“x1=%f\n”, x1);                     //输出x1
printf(“x2=%f\n”, x2);                     //输出x2
printf(“按任意键退出\n”);
system(“pause”);
return 0;
}
