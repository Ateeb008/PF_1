#include<stdio.h>
int main()
{
	int number,digit,temp,rev=0,j=0;
	
	printf("Enter a number:\n ");
	scanf("%d",&number);
	
	temp=number;
	while(temp>0){
		
		digit=temp%10;
		rev = rev*10 + digit;
		temp=temp/10;
		j=j+1;
	}
	if(rev==number)
	printf("Number is Palindrome\n");
	else
	printf("Number is not a Palindrome");
	return 0;
}