#include<stdio.h>
int main()
{
	int age;
	char grade;
	float height;
	
	printf("Enter age :");
	scanf("%d",&age);
	
			printf("\n Enter Height");
			scanf("%f",& height);
	
				printf("\nEnter grade");
				scanf("%s",& grade);
	
	printf("\nAge:"" %d",age);
	printf("\nHeight: %.1f",height);
	printf("\nGrade: %c",grade);
	return 0;
	
}
