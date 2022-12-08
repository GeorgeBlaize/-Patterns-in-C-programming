
//C program to print square star pattern

#include<stdio.h>

int main()
{
    int i,j,n;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
