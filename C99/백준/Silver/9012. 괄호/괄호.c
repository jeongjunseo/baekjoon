#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int* ans = (int*)malloc(sizeof(int) * n);

    

    for (int j = 0;j < n;j++)
    {
        char a[50] = {'0'};
        char stack[50] = {'0'};
        scanf("%s", a);
        int i = 0;
        int p = 0;
        //int start = 0;
        while (a[i] == '(' || a[i] == ')')
        {
            stack[p] = a[i];
            i++;
            p++;
            //printf("%d %c\n",p, stack[p-1]);
            if (p == 1)
            {
                if (a[p - 1] == ')')
                {
                    ans[j] = '0';
                    break;
                }
                continue;
            }

            if (stack[p - 2] == '(' && stack[p - 1] == ')')
            {
                //stack[p - 1] = '0';
                //stack[p] = '0';
                //start == p;
                p -= 2;
            }
           
        }
        if (p == 0)
        {
            ans[j] = 1;
        }
        else
        {
            ans[j] = 0;
        }
    }
    for (int j = 0;j < n;j++)
    {
        if (ans[j] == 1)
            printf("YES\n");
        else if(ans[j]==0)
            printf("NO\n");
    }

    

}