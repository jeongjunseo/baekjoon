#include <stdio.h>
int main()
{
	int s[28];
	for (int i = 0;i < 28;i++)
	{
		scanf("%d", &s[i]);
	}
	for (int i = 1;i <= 30;i++)
	{
		for (int j = 0;j < 28;j++)
		{
			if (s[j] == i)
				break;
			if (j == 27)
				printf("%d\n", i);
		}
	}
}