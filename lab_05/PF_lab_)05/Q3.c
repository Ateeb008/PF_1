#include<stdio.h>
int main()
{
    int cat_main,cat_sub;
    printf("Choose any one from the Following\n");
    printf("1. Animal \n");
    printf("2. Vehicle \n");
    printf("3. Food \n");
    printf("4. Human \n");
    scanf("%d",&cat_main);
    switch(cat_main)
        {
            case 1:
            printf("1. Cat\n");
            printf("2. Dog\n");
            printf("3. Birds\n");
            break;
            case 2:
            printf("1. Car\n");
            printf("2. Bus\n");
            printf("3.Bike\n");
            break;
            case 3:
            printf("1. Pizza\n");
            printf("2. Burger\n");
            printf("3. Biryani");
            break;
            case 4:
            printf("1. Male\n");
            printf("2. Female \n");
            printf("3. Child\n");
            break;
            default:
            printf("Enter number between 1-4");
        }
    return 0;
}