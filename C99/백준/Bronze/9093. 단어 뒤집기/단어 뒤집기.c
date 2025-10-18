#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
	int n;
	scanf("%d", &n);
	while (getchar() != '\n');
	char** str = (char**)malloc(sizeof(char*) * n);
	for (int i = 0;i < n;i++)
	{
		str[i] = (char*)malloc(sizeof(char) * 1000);
	}
	for (int i = 0;i < n;i++)
	{
		int j = 0;
		while ((str[i][j++] = getchar()) != '\n');
		str[i][j-1] = ' ';
		str[i][j] = '\0';
		//while (getchar() != '\n');
	}
	int start=0;
	int end = 0;
	for (int i = 0;i < n;i++)
	{
		for (int k = 0;k < strlen(str[i]);k++)
		{
			if (isspace(str[i][k]))
			{
				end = k - 1;
				for (int j = end;j >= start;j--)
				{
					printf("%c", str[i][j]);
				}
				start = end + 2;
				printf(" ");
			}
		}
		printf("\n");
		start = 0;
		end = 0;
	}
	for (int i = 0;i < n;i++)
		free(str[i]);
	free(str);
}