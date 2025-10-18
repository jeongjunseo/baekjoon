#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[1000] = { '\0' };
	scanf("%s", str);
	int index;
	scanf("%d", &index);
	printf("%c", str[index - 1]);
}