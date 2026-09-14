#include<stdio.h>
int main()
{
	int data,price,cost,t_cost,dis_cost;
	printf("Enter Data used in GB\t");
	scanf("%d",&data);
		printf("Enter Price per GB\t");
		scanf("%d",&price);
	cost=data*price;
	if(data>=50 && data<=99)
	{
		dis_cost=cost*(5/100);
			t_cost=cost-t_cost;
				printf("\nDiscount of 5 percent is applied on your basic cost of Data and new price is %d \t",t_cost);
				printf("\nYou Got Total Discount of \t %d",dis_cost);
	}
	else if(data>=100 && data<=199)
			{
			dis_cost=cost*(0.1);
					t_cost=cost-t_cost;
						printf("\nDiscount of 10 percent is applied on your basic cost of Data and new price is %d \t",t_cost);
						printf("\nYou Got Total Discount of \t %d",dis_cost);
			}
			else
			{
				dis_cost=cost*(15/100);
					t_cost=cost-t_cost;
							printf("\nDiscount of 15 percent is applied on your basic cost of Data and new price is %d \t",t_cost);
							printf("\nYou Got Total Discount of \t %d",dis_cost);
			}
	return 0;
}
