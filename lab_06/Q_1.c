#include<stdio.h>
int main()
{
	int n=4;
    int pos=2;
    int arr[5]={10,20,30,40};
    for(int i=4;i<=pos;i--)
    {
        arr[i]=arr[i-1];
        n--;
    }
    arr[pos-1]=50;
    n=4;
    for(int i=4;n<=i;i--){
        printf("%d\n",arr[n]);
    }



    return 0;
}