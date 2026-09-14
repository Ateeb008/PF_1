#include<stdio.h>
int main()
{
	int quantity;
	float price;
	char name[10];
	
	printf("\nEnter prodeuct name :");
	scanf("%s",&name);
		printf("\nEnter Quantity :");
		scanf("%d",&quantity);
			
			printf("\nEnter price: ");
			scanf("%f",&price);
			
			printf("\nProdeuct Name : %s",name);
			printf("\nQuantity : %d",quantity);
			printf("\nPrice: %.2f",price);
			
	return 0;
}
