#include<stdio.h>
int main()
{
    int confidence,threshold=0;
    printf("Enter Confidence from 1-100:\n");
    scanf("%d",&confidence);
    switch(confidence/10)
    {
        case 10:
        case 9:
        printf("Very High:\n");
        threshold=90;
        break;
        case 8:
        case 7:
        printf("High\n");
        threshold=75;
        break;
        case 6:
        case 5:
        printf("Moderate\n");
        threshold=50;
        break;
        case 4:
        printf("Low\n");
        threshold=10;
        break;
    }
    if(confidence>=threshold && confidence>=50)
        printf("Confidence accepted");
    return 0;
}