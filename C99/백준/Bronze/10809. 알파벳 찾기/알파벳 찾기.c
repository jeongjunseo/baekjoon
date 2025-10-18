#include <stdio.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%s", str);
	int alpha[26] = { -1 };
	char ch = 'a';
	char *x;
	for (int i = 0;i < 26;i++)
	{
		if (strchr(str, ch))
		{
			x = strchr(str, ch);
			alpha[i] = x-str;
		}
		else
		{
			alpha[i] = -1;
		}
		ch++;
		printf("%d ", alpha[i]);
	}
}
