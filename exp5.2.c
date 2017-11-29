#include <stdio.h>
void main()
{
  int i,j,zd1,fd1,array[4][4];  //定义变量及数组
  zd1=0;  //初始化主对角线与副对角线元素之和
  fd1=0;
  for (i=0;i<4;i++)  //行循环
  {
	for (j=0;j<4;j++)  //列循环
	{
		printf("请输入数组Array中的元素(%d，%d)的值",i+1,j+1);
		scanf("%d",&array[i][j]);
	}
  }
  for (i=0;i<4;i++)  //行循环
  {
	for (j=0;j<4;j++)  //列循环
	{
		if (i==j)  //当是主对角线上的元素时
		{
          zd1=zd1+array[i][j];  //主对角线元素之和加该元素
		}
		if (i+j==3)  //当是副对角线上的元素时
		{
          fd1=zd1+array[i][j];  //副对角线元素之和加该元素
		}
	}
  }
  printf("主对角线元素之和是%d\n",zd1);
  printf("副对角线元素之和是%d\n",fd1);
}
