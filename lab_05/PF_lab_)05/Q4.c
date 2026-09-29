#include<stdio.h>
int main()
{
    int count;
    printf("1. Greeting:\n");
    printf("2. Study:\n");
    printf("3. Weather :\n");
    printf("4. Help:\n");
    printf("Choose one from the Above list");
    scanf("%d",&count);
    switch(count)
    {
        case 1:
        printf("Hello\n");
        printf( "How are You\n");
           printf("Good bye\n");
        break;

        case 2:
        printf("Programming\n");
         printf("Mathematics\n");
          printf("AI");
        break;
        case 3:
        printf("Today\n");
         printf("Tommorow\n");
          printf(" Forecast\n");
        break;
        case 4:
        printf("About chatbot\n");
         printf(" commands\n");
          printf(" Exit");
        break;
        default:
        printf("Choose number from 1-4");
    }
    return 0;

}