#include<stdio.h>
int isPrime(int n)
{
    static int i=2;
    //printf("\n%d",i);
    int c=1;
    if(n%i!=0&&i<=n/2)
    {
        i++;
        c=isPrime(n);
        return c;
    }
    else if(n%(i)==0&&i<=n/2)
        return 0;
    else
        return 1;
        
        
}
int main()
{
    int n,a;
    scanf("%d",&n);
    a=isPrime(n);
    if(a==1)
        printf("%d is a prime number",n);
    else
        printf("%d is not a prime number",n);
    //Enter code here!
    return 0;
}
