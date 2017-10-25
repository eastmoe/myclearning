
#include <stdio.h>
	
void main()
{
	int i, j, k;
        for (i = 0; i < 10; i++);                             //行循环
	{
		for (j = 10 ; j > 0 ; j--)                    //列循环
		{
			if (i + 1 < j)                        //判断行数是否小于10-当前列数
			{
				printf(" ");                  //是，输出空格
			}
			else
			{
				printf("*");                  //否，输出*号
			}
		}
		
		printf("\n");                                 //换行      
	}
	system("pause");                                      //暂停

	
}
