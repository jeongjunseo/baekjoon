#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main() {
    
    int ch;
    int size;
    int cnt = 0;
    scanf("%d", &size);
    while (getchar() != '\n');
    int* str = (int*)malloc(sizeof(int) * size);
    for (int i = 0;i < size;i++)
    {
        scanf("%d", &str[i]);
    }
    while (getchar() != '\n');
    int num;
    scanf("%d", &num);
    for (int i = 0;i < size;i++)
    {
        if (str[i] == num)
            cnt++;
    }
    printf("%d", cnt);
    free(str);
}