#include<stdio.h>
int main()
{
	int student,absent=0,present=0;
	printf("Wellcome! to the class\n");
	for(int i=0;i<15;i++)
	{
		printf("Enter 1 if student is present and 0 if stuudent is absent\n");
		scanf("%d",&student);
		if(student==1)
			present=present+1;
		else
			absent=absent+1;
	}
	printf("Total number of Present Students are: %d\n",present);
	printf("Total number of Absent Students are %d\n",absent);
	return 0;
}