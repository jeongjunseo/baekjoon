#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    int** n = (int**)malloc(sizeof(int*) * t);
    for (int i = 0;i < t;i++)
        n[i]=(int*)malloc(sizeof(int) * 2);

    for (int i = 0;i < t;i++)
    {
        scanf("%d %d", &n[i][0], &n[i][1]);
    }
    for (int i = 0;i < t;i++)
    {
        printf("%d\n", n[i][0] + n[i][1]);
    }
}