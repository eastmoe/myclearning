#include<stdio.h>
arrayadd(int *a)
{
	int nalt;
	nalt=0;
	nalt=*a+*(a+1);
	if(*(a+1)!=0)
     arrayadd(a+1);
	else
     return(nalt);
}
void main()
{
	int array[3][4],i,*ap,j,nall;
	nall=0;
	ap=array[0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("请输入数组Array[%d][%d]的值:",i+1,j+1);
			scanf("%d",ap+i*4+j);
		}
	}
	nall=arrayadd(ap);
	printf("数组Array[3][4]的元素之和为:%d\n",nall);
}
