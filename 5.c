#include<stdio.h>
void main()
{
 int g[30],i;  \\定义数组g[30]，用来存储学生分数和循环变量i
 float al;  \\定义单精度浮点变量al表示分数之和
 al=0.0;  \\初始化变量al
 printf("请输入各位学生的成绩，用空格隔开。\n");
 for (i=0;i<30;i++);
 {
  scanf("%d",&g[i]);  \\输入每位学生的分数，用循环变量i表示数组下标
  al=al+g[i];  \\累加得出分数之和
 }
 printf("30位学生的平均成绩为%f",al/30);  \\输出评价成绩
}
