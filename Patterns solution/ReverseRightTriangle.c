//C program to print reverse right triangle star pattern

#include<stdio.h>

int main()
{
    int i,j,n;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=n; i>=1; i--)
    {

        for(int j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

