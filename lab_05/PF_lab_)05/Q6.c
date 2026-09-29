#include<stdio.h>
int main()
{
    int count;
    printf("Choose your Problem:\n");
    printf("1. Classification: \n 2. Regression:\n 3.Clustering\n 4. Computer\n");
    scanf("%d",&count);
    switch(count)
    {
        case 1:
        printf("1. Logistic Regression\n 2. Decission Tree\n 3. KNN\n");
        scanf("%d",&count);
        switch(count)
        {
            case 1:
            printf("Your Problem is Logistic Regression \n");
            case 2:
            printf("Your Problem is Desission Tree\n");
            case 3:
            printf(" KNN");
        }
        case 2:
        printf("1. Linear Regression\n 2. Polynomial Regression\n 3. SVR\n");
        scanf("%d",&count);
        switch(count)
        {
            case 1:
            printf("Your Problem is  Linear Regression\n");
            case 2:
            printf("Your Problem is Polynomial Regression\n");
            case 3:
            printf(" SVR");
        }
        case 3:
        printf("1. K-Means\n 2. Hierarchial Clustering\n 3. DBSCAN\n");
        scanf("%d",&count);
        switch(count)
        {
            case 1:
            printf("Your Problem is  K-Means\n");
            case 2:
            printf("Your Problem is Hierarchial Clustering\n");
            case 3:
            printf(" your problem is DBSCAN");
        }
        case 4:
        printf("1.CNN\n 2. YOLO\n 3. R-CNN\n");
        scanf("%d",&count);
        switch(count)
        {
            case 1:
            printf("Your Problem is  CNN\\n");
            case 2:
            printf("Your Problem is YOLO\n");
            case 3:
            printf("Your Problem is R-CNN");
        }
        default:
        printf("Enter valid number from 1-4 only");
    }
    return 0;
}