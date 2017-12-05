#include<stdio.h>

arrayadd()
{
	int array[3][4],*ap,i,j,nall;
	nall=0;
	ap=array;
	for(i=0;i<3;i++)  //输入循环
	{
		for(j=0;j<4;j++)
		{
			printf("请输入数组Array[%d][%d]的值:",i+1,j+1);
			scanf("%d",ap+i*4+j);  //输入元素的值，指针表示地址
		}
	}
	for(i=0;i<3;i++)  //求和循环
	{
		for(j=0;j<4;j++)
		{
			nall=nall+(*(ap+i*4+j));  //累加，指针表示地址
		}
	}
	return nall;
}

void main()
{
	int nall;
	nall=arrayadd();  //调用函数arrayadd完成数组的输入·求和操作
	printf("数组Array[3][4]的元素之和为:%d\n",nall);
}
