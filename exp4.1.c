#include <stdio.h>
getGCM(int number1 ,int number2)
{
 int temp;  //定义中间变量-余数temp
 temp=number1%number2;  //将number1除以number2的余数赋给temp
 while(temp!=0) //当temp不为0时，执行循环
 {
  number1=number2;  //将number2的值赋给number1
  number2=temp; //将temp的值赋给number2
  temp=number1%number2; //将number1除以number2的余数赋给temp
 }
 return number2; //temp为0时，返回number2
}

getLCM(int number1,int number2)
{
 int temp;
 temp=getGCM(number1,number2);  //调用getGCM来计算最大公约数
 return number1*number2/temp;  //返回最小公倍数
}

void main()
{
 int number1,number2,temp; //在主函数中定义number1和number2和用于交换大小的中间变量temp
 scanf("number1=%d,number2=%d",&number1,&number2); 
 if(number2>number1) //当number2的值比number1大时，交换number1和number2的值
  {
   temp=number2;
   number2=number1;
   number1=temp;
  }
 printf("gcm=%d\n",getGCM(number1,number2)); //输出最大公约数，调用getGCM函数
 printf("lcm=%d\n",getLCM(number1,number2)); //输出最小公倍数，调用getLCM函数
}
