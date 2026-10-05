#include<stdio.h>
void number();
int main()
{
    long long n;
    printf("Enter a number:\n");
    scanf("%lld",&n);
    number(n);
    return 0;
}
void number(long long n){
    int i,even=0,odd=0;
    while(n>0){
        i=n%10;
        if(i%2==0)
            even=even+1;
        else 
            odd=odd+1;
        n=n/10;
    }
    printf("Total Even numbers are:%d\n",even);
    printf("Total odd numbers are:%d\n",odd);
}