#include<stdio.h>
int main()
{
    int program_marks , maths_marks , ai_marks , avg, attendence;
     
    printf("Enter your Programing Marks:\n");
    scanf("%d",&program_marks);
        printf("Enter your Maths Marks:\n");
        scanf("%d",&maths_marks);
            printf("Enter your AI Marks:\n");
            scanf("%d",&ai_marks);
                printf("Enter your Attendence :\n");
                scanf("%d",&attendence);
    if((program_marks>=50) && (maths_marks>=50) && (ai_marks>=50) && (attendence>=75))
    {
        printf("Elligible\n");
        avg= (program_marks+maths_marks+ai_marks)/3;
        printf("Average is: %d\n",avg);

        if(avg>=80)
            printf("Excellent!\n");
        else if(avg>=70)
            printf("Very Good!\n");
        else if(avg>=60)
            printf("Good!");
        else if(avg>=50)
            printf("Satisfactory!");
        else if(avg<50)
            printf("AHHH!Poor");
    }
    else
        printf("Student is not elligible");
        return 0;
        
}