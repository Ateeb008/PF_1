#include<stdio.h>
int main()
{
	int total,mis,dup;
	printf("Enter Total numbers of record");
	scanf("%d",&total);
		printf("Enter numbers of missing record");
		scanf("%d",&mis);
			printf("Enter numbers of Duplicate record");
			scanf("%d",&dup);
	float percent,percent2;
	
	percent=(mis/total)*100;
	percent2=(dup/total)*100;
	if(total<=0)
		printf("Invalid Dataset");
	else if(percent>30)
		printf("Poor Quality Dataset");
		else if(percent<=30 && percent2>20)
		printf("Dataset Requires Cleaning");
			else
			printf("Dataset Ready for Training");
			
		
	return 0;		

}
