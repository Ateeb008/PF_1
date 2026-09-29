#include<stdio.h>
#include<stdbool.h>
int main()
{
    int age, income, credit_score, loan_status;
     
    printf("Enter your Age\n");
    scanf("%d",&age);
         printf("Enter your Income\n");
         scanf("%d",&income);
            printf("Enter your Credit Score\n");
            scanf("%d",&credit_score);
                printf("Enter your Loan Status(0 for no and 1 for yes) \n");
                scanf("%d",&loan_status);
    if(age>=21 && income>=100000 && credit_score>=750 && loan_status==0)
            printf("High Approval Chance\n");
    else if(age>=21 && income>=75000 &&credit_score>=650 && loan_status==1)
            printf("Munual Review\n");
           else if(age>=21 && income>=50000 && credit_score>=600)
                printf("Possibly Elligible\n");
                else
                printf("Rejected\n");
    return 0;
        }               



