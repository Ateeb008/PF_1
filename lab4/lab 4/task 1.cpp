#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter First Number :\n");
	scanf("%d",&num1);
		printf("Enter Second Number :\n");
		scanf("%d",&num2);
			printf("Enter Third Number :\n");
			scanf("%d",&num3);
		if(num3>num2 && num2>num1)
		{
			printf("%d is the Greatest number",num3);
		}
		else 
			if(num2>num3 && num2>num1)
			{
				printf("%d is the Greatest Number",num2);
			}
			else if(num1>num2 &&num2>num3)
				printf("%d is the Greatest",num1);
			else
				printf("Enter Diffrent Numbers");		
			
	return 0;
		
}
