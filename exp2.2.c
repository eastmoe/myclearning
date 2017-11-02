#include <stdio.h>
int f;
void main()
 {
  scanf("%d",&f); //输入分数
  if(f>=90)
  {
   printf("The grade is A."); //分数大于等于90,输出A
  }
  else
  {
   if(f>=75)
   {
    printf("The grade is B."); //分数在[75,89]之间，输出B
   }
   else
   {
    if(f>=60)
    {
     printf("The grade is C."); //分数在[60,74]之间，输出C
    }
    else
    {
     printf("The grade is D."); //分数小于等于59,输出D
    }
   }
  }
 
 }
