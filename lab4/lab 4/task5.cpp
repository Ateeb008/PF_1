#include<stdio.h>
#include<conio.h>
int main()
{
	int active,lvl;
	printf("Enter Account Status(1 =yes and 0=no)\t");
	scanf("%d",&active);
	if(active=!0)
	{
		printf("Enter your Security Level\t");
		scanf("%d,",&lvl);
		switch(lvl)
		{
			case 1:
				printf("Student Access Granted");
			break;
				case 2:
					printf("Researcher Access Granted");
				break;
					case 3:
					case 4:
					case 5:
				
						printf("Admin Access Granted");
						break;
			
		}
	}
	else
	printf("Access Denied");
	return 0;
}
