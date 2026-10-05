#include<stdio.h>
int main()
{
	int pass,j,sum=0;
	printf("Enter Password!\n");
	scanf("%d",&pass);
	while(pass>=9)
	{
		j=pass%10;
			pass=pass/10;
				sum=sum+j;
	}
	sum=sum+pass;
	printf("The sum is: %d\n",sum);
	if(sum>10){
		printf("Strong Password:\n");
	}else {
		printf("Weak Password!\n");
	}
	return 0;
}