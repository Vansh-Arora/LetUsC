#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter percentage in A and B\n");
    scanf("%d%d",&a,&b);
    if(a >= 45)
    {
        if(a >= 55 && b >= 45)
            printf("Pass");
        else if(b >= 55)
            printf("Pass");
        else if(b <= 45 && a >= 65)
            printf("Reappear for examination in B");
        else
            printf("Fail");
    }
    else 
        printf("Fail");
    
    return 0;
}