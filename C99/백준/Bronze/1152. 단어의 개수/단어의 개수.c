#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	int cnt=0;
	ch = getchar();
	if (ch == '\n')
	{
		printf("%d", cnt);
		return 0;
	}
	if (ch == ' ')
	{
		if ((getchar())=='\n')
		{
			printf("%d", cnt);
			return 0;
		}
	}
	while ((ch = getchar()))
	{
		if (ch == '\n')
		{
			cnt++;
			break;
		}
		if (isblank(ch))
		{
			cnt++;
			if ((ch = getchar())=='\n')
			{
				break;
			}
		}
	}
	if (cnt < 0)
		printf("0");
	else
		printf("%d", cnt);
}