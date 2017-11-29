#include<stdio.h>
void main()
{
  int i,j,min,max,array[3][4];  //定义变量及数组

  for (i=0;i<3;i++)  //行循环
  {
	for (j=0;j<4;j++)  //列循环
	{
		printf("请输入数组Array中的元素(%d，%d)的值",i+1,j+1);
		scanf("%d",&array[i][j]);
	}
  }
  min=array[0][0];  //初始化最大值和最小值变量为数组中第一个元素
  max=array[0][0];
  for (i=0;i<3;i++)  //行循环
  {
	for (j=0;j<4;j++)  //列循环
	{
		if(array[i][j]>max)  //判断当前元素是否大于max
		{
			max=array[i][j];  //是则将当前元素的值赋给max
		}
		if(array[i][j]<min)  //判断当前元素是否小于min
		{
			min=array[i][j];  //是则将当前元素的值赋给min
		}
	}
  }
  printf("数组Array中最大的值为%d\n",max);  //输出最大值和最小值
  printf("数组Array中最小的值为%d\n",min);
}
