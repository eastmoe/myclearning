//—--------------------------------------常规方法----------------------------------------
#include<stdio.h>
void main()
{
 int array[10],i,j,temp;  //定义数组array，循环变量i，j以及指针p
 for(i=0;i<=9;i++)  //输入循环
 {
  printf("请输入数组Array中的元素Array[%d]的值：",i+1);
  scanf("%d",&array[i]);
 }
 for(i=0;i<10;i++)
 {
  for(j=0;j<9;j++)
  {
   if(array[j]>array[j+1])  //判断元素array[j]是否大于array[j+1]
   {
    temp=array[j];
    array[j]=array[j+1];  //交换变量
	array[j+1]=temp;
   }
  }
 }

 printf("数组Array中数从小到大排列为：\n");
 for(i=0;i<=9;i++)
 {
  printf("%d ",array[i]);
 }
 printf("\n");
}
//-----------------------------------常规方法：结束------------------------------------------------------
//--------------------------------------利用指针------------------------------------------------------
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
 int array[10],i,j,*p;  //定义数组array，循环变量i，j以及指针p
 p=array;  //初始化指针p，准备输入数据
 for(i=0;i<=9;i++)  //输入循环
 {
  printf("请输入数组Array中的元素Array[%d]的值：",i+1);
  scanf("%d",p+i);
 }
 for(i=0;i<10;i++)
 {
  for(j=0;j<9;j++)
  {
   if(array[j]>array[j+1])  //判断元素array[j]是否大于array[j+1]
   {
    p=array;  //初始化指针p，准备交换数据
    intexchanger(p+j,p+j+1);  //利用指针交换变量
   }
  }
 }
 p=array;  //初始化指针p，准备输出数据
 printf ("数组Array中数从小到大排列为：\n");
 for(i=0;i<=9;i++)
 {
  printf("%d ",*(p+i));
 }
 printf("\n");
}
//---------------------------------利用指针:结束----------------------------------------
