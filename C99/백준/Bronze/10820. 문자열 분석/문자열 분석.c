#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
	char ch;
	int** rec = (int**)calloc(100,sizeof(int*));
	for (int i = 0;i < 100;i++)
	{
		rec[i] = (int*)calloc(4, sizeof(int));
	}
	
	int i = 0;
	while ((ch = getchar()) != EOF)
	{
		if (islower(ch))
			rec[i][0]++;
		else if (isupper(ch))
			rec[i][1]++;
		else if (isdigit(ch))
			rec[i][2]++;
		else if (isblank(ch))
			rec[i][3]++;
		else if (ch == '\n')
			i++;
	}
	int cnt = i;
	for (int i = 0;i < cnt;i++)
	{
		printf("%d %d %d %d\n", rec[i][0], rec[i][1], rec[i][2], rec[i][3]);
	}
	for (int i = 0;i < 100;i++)
	{
		free(rec[i]);
	}
	free(rec);
}