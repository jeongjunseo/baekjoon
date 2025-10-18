#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int t;
	scanf("%d", &t);
	//printf("%d", t);
	//while (getchar() != "\0");
	char** num = (int**)malloc(sizeof(int*) * t);
	for (int i = 0;i < t;i++)
	{
		num[i] = (int*)malloc(sizeof(int) * 2);
	}
	
	for (int i = 0;i < t;i++)
	{
		char str[1000] = { '\0' };
		scanf("%s", str);
		num[i][0] = str[0];
		num[i][1] = str[strlen(str) - 1];
	}
	for (int i = 0;i < t;i++)
	{
		printf("%c%c\n", num[i][0], num[i][1]);
	}
	for (int i = 0;i < t;i++)
	{
		free(num[i]);
	}
	free(num);
}