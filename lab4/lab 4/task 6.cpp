#include<stdio.h>
int main()
{
	int obstacle,person,battery;
	printf("Enter if there is any Obstacle(0,1)\t");
	scanf("%d",&obstacle);
		printf("Enter if there is any person\t");
		scanf("%d",&person);
			printf("Enter remaining battery percentage\t");
			scanf("%d",&battery);
			if(obstacle==1)
			{
				if(person==1)
				{
				printf("\nEmergency Stop");
				}
				else
				printf("\nChange Direction");	
			}
			else if(battery<=20)
				printf("\nReturn to charging Station");
				else
				printf("\nContinoue Moving");
				
	return 0;
}
