#include <stdio.h>
int a,b,c,max; //定义a,b,c,max4个变量
void main()
{
 scanf("%d,%d,%d",&a,&b,&c); //输入a,b,c
 if(a=>b)
 {
  max=a;
 }
 else
 {
  max=b; //如果a>b，将a的值赋给max，否则，将b的值赋给max
 }
 if(max<c)
 {
  max=c; //如果max<c，将c的值赋给max，否则，max的值不变
 }
 printf ("%d\n",max); //输出max
}
