/* Program To take students name and their marks 
while calculating their avg marks*/
#include<stdio.h>
#include<string.h>


int main()
{
    char student_names[3][50];
    int marks[3][3];
    int sum,avg;
    for(int i=0;i<3;i++){
        avg=0;			// iniciliizes avg at 0
        sum=0;
        printf("Enter name of student %d\n",i+1);
        scanf(" %49[^\n]", student_names[i]);
            for(int j=0;j<3;j++){
                
                printf("Enter marks of subject %d  \n",j+1);
                scanf("%d",&marks[i][j]);
                sum=sum+marks[i][j];
            }
        avg=sum/3;
        printf("Average of %s\t  %d\n",student_names[i],avg);
    }
    return 0;
}
