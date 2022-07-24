#include<stdio.h>
int main()

{
    int i=1,n;
    printf("Enter how many natural number want to print");
    scanf("%d\n",&n);
    while(i<=n)
    {
        printf("\n%d",i);
        i++;
    }
}