#include <stdio.h>
void intchanger(int *x,int *y)
{
 int *temp;
 *temp=*x;
 *x=*y;
 *y=*temp;
}
void main()
{
 int array[10],i,j,*p,n,p,q;
 p=array:;
 for(i=0;i<=9;i++)
 {
  printf ("请输入数组Array中的元素Array[%d]的值：",i+1);
  scanf ("%d",p+i);
 }
 for(i=0;i<9;i++)
 {
  for(j=0;j<8,j++)
  {
   if(array[j]>array[j+1]
   {
    p=array;
    intexchanger(p+j,p+j+1);
   }
  }
 }
 p=array;
 printf ("数组Array中数从小到大排列为：\n");
 for(i=0;i<=9;i++)
 {
  printf("%d",p+i);
 }
 printf ("\n");
}
