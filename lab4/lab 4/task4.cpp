#include<stdio.h>
int main()
{
	float acc;
	int pred,app; //acc(accuracy), pred(prediction), app(approved)
	printf("Enter Model Accuracy in Percentage\t");
	scanf("%f",&acc);
		printf("Enter Prediction Latency in milliseconds\t");
		scanf("%d",&pred);
		
		if(acc>=90)
		{
			if(pred<=100)
			printf("\nModel is Approved");
			else
			{
			printf("Latency too high");
			printf("\nModel not Approved");
			}	
		}
		else
		{
			printf("Accuracy too low");
			printf("\nModel not Approved");
		}
	return 0;
}
