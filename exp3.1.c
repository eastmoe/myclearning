#include <stdio.h>
void main()
{
 int n,i,t; //定义3个变量作为数n，循环计数器i和结果计数器t
 scanf("n=%d",n); //输入n
 t=0;
 for(i=1;i<=n;i++)
 {
  if(i%2==0) //当i可以被2整除时
  {
   t=t+1; //结果计数器+1
  }
  else if(i%3==0) //当i可以被3整除时
  {  
   t=t+1; //结果计数器+1
  }
  else if(i%6==0) //当t可以被6整除时
  {
   t=t-1; //结果计数器-1
  }

 }
 printf("%d",t); //输出结果
}
