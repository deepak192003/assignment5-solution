#include<stdio.h>
int main()

{
    int i=1,n;
    printf("Enter a number to print MySirG n time on screen in reverse order: ");
    scanf("%d\n",&n);
    while(i<=n)
    {
        printf("\n%d",n);
        n--;
    }
}