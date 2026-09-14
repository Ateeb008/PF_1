#include<stdio.h>
int main()
{
	char name[50],grade[2];
	int age;
	float cgpa,height;
	
		printf("Enter Student Name: ");
		scanf("%s",& name);
		printf("\nEnter age: ");
		scanf("%d", &age);
		printf("\nEnter height: ");
		scanf("%f", &height);
		printf("\nEnter Grade: ");
		scanf("%s", &grade);
		printf("\nEnter CGPA");
		scanf("%f", &cgpa);
			
			printf("~~~~~~~~STUDENT REPORT~~~~~~~~");
			
			printf("\nName:  %s",name);
			
			printf("\nAge:  %d",age );
			
			printf("\nHeight : %.2f",height);
			
			printf("\nGrade: %s",grade);
			
			printf("\nCGPA : %.2f",cgpa);
		
	return 0;
	
			
}
