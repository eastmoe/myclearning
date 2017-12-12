#include<stdio.h>

void intexchanger(int *x,int *y)  //定义函数intexchanger，用指针交换变量的值
{
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;
}
void main()
{
 int array[10],a,b,c,d,i,j;
 for(i=0;i<=9;i++)
 {
  printf("请输入数组Array中的元素Array[%d]的值:",i+1);
  scanf("%d",&array[i]);
 }
 for(i=0;i<=8;i++)
 {
  for(j=0;j<i;j++)
  {
   if(array[i]>array[i+1])
   {
    intexchanger(&array[i],&array[i+1]);
   }
  }
 }
 printf("数组Array中的元素排列为：\n");
 for(i=0;i<=9;i++)
 {
  printf("%d ",array[i];
 }
}
