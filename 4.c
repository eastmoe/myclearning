#include <stdio.h>
int fun(int x)
{
	int y;
	if (x > 0)
		y = 1;
	else if (x = 0)
		y = 0;
	else
		y = -1;
	return y;
}
void main()
{
	int x;
	scanf("%d", &x);
	printf("%d\n", fun(x));
	system("pause");
}
