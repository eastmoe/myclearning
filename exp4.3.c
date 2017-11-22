//------------------------------------------------------原程序---------------------------------------------------------------------------
#include <stdio.h>
void swap(int x,int y)
{
 int temp;
 temp=x;
 x=y;
 y=temp;

}
void main()
{
 int number1=10;
 int number2=20;
 printf("交换前的值：\n");
 printf("number1==%d\tnumber2=%d\n",number1,number2);
 swap(number1,number2);
 printf("交换前的值：\n");
 printf("number1==%d\tnumber2=%d\n",number1,number2);
}
//-----------------------------------------------------原程序-结束------------------------------------------------------------------------
//--------------------------------------------------------方法1--------------------------------------------------------------------------
#include <stdio.h>
int number1=10;  //定义全局变量number1，number2
int number2=20;
void swap()  //去掉形参定义
{
 int temp;
 temp=number1;    //在函数内部直接完成交换，无需返回值
 number1=number2;
 number2=temp;
}
void main()
{
 printf("交换前的值：\n");
 printf("number1==%d\tnumber2=%d\n",number1,number2);
 swap(number1,number2);  //指定在函数中的number1，number2是已定义的number1和number2
 printf("交换后的值：\n");  //修改文字
 printf("number1==%d\tnumber2=%d\n",number1,number2);
}
//----------------------------------------------------方法1-结束-------------------------------------------------------------------------
//-------------------------------------------------------方法2---------------------------------------------------------------------------
#include <stdio.h>
void swap(int *np1,int *np2)  //利用指针作为形参
{
 int temp;  
 temp=*np1;  //参与运算的为指针，实际交换的为地址
 *np1=*np2;
 *np2=temp;
}
void main()
{
 int number1=10;
 int number2=20;
 printf("交换前的值：\n");
 printf("number1==%d\tnumber2=%d\n",number1,number2);
 swap(&number1,&number2);  //传递的实参为number1和number2的地址
 printf("交换后的值：\n");  //修改文字
 printf("number1==%d\tnumber2=%d\n",number1,number2);
}
//----------------------------------------------------方法2-结束-------------------------------------------------------------------------
