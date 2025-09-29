#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    int *answer=(int*)malloc(sizeof(int)*n);
    int cnt=0;

    

    
    for(int i=0;i<n;i++)
    {
        int stack=0;
        int k=0;
        char *a=(char *)malloc(sizeof(char)*80);
        scanf("%s", a);
            while(a[k]=='O'||a[k]=='X')
            {
                if(a[k]=='O')
                {
                    stack++;
                    cnt+=stack;
                    
                }
                else if(a[k]=='X')
                {
                   //printf("%d", stack);
                    stack=0;
                    
                }
                k++;
                
            }
        answer[i]=cnt;
        cnt=0;
        free(a);
    }
    
    for(int i=0;i<n;i++)
        printf("%d\n", answer[i]);
    

}