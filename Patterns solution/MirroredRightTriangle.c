
//C program to print mirrored right triangle star pattern

#include<stdio.h>

int main()
{

    int i,j,n;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
