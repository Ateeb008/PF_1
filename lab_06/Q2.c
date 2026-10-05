#include<stdio.h>
int main()
{
	int number,i=0,temp;
	int rev_n[5]={0};
	printf("Enter a ticket number: \n");
	scanf("%d",&number);
	while(number>9)
	{
        temp=number%10;
        rev_n[i]=temp;
        number=number/10;
        i=i+1;	
	}
	rev_n[i]=number;
	    printf("The reverse of ticket number is:\n");
	for(int j=0;j<=i;j++)
	    {
		printf("%d",rev_n[j]);
	    }
	return 0;
}