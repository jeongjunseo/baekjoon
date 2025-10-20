#include <stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	int a, b;
	char x[4], y[4];
	scanf("%d %d", &a, &b);
	sprintf(x, "%d", a);
	sprintf(y, "%d", b);
	if (x[2] > y[2])
	{
		printf("%c%c%c", x[2], x[1], x[0]);
	}
	else if (x[2] < y[2])
	{
		printf("%c%c%c", y[2], y[1], y[0]);
	}
	else if (x[2] == y[2])
	{
		if (x[1] > y[1])
		{
			printf("%c%c%c", x[2], x[1], x[0]);
		}
		else if (x[1] < y[1])
		{
			printf("%c%c%c", y[2], y[1], y[0]);
		}
		else if (x[1] == y[1])
		{
			if (x[0] > y[0])
			{
				printf("%c%c%c", x[2], x[1], x[0]);
			}
			else if (x[0] < y[0])
			{
				printf("%c%c%c", y[2], y[1], y[0]);
			}
			else if (x[0] == y[0])
			{
				printf("%c%c%c", x[2], x[1], x[0]);
			}
		}
	}
}