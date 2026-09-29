#include<stdio.h>
int main()
{
    int confidence,user_type;
    printf("Enter Confidence from 1-100: \n");
    scan("%d",&confidence);
    printf("Enter weather user is authorized(1) or unauthorized(0)");
    scanf("%d",&user_type);
    if(confidence>=80 && user_type!=0)
    {
        printf("Go for Face reognized\n");
        printf("Access Granted");
    }
    else if(confidence>=50)
    {
        printf("Go for manual Verfication\n");

    }
        else
        printf("Access Denied");
    return 0;
}