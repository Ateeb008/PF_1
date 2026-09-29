#include<stdio.h>
int main()
{
    int permission;
    printf("Enter Permission value(0-15):\n");
    if(scanf("%d",&permission) !=1 || permission < 0 || permission>15)
      { printf("Invalid Permission value.\n");
       return 1;
      }
    
      printf("\n Allowed Opreations :\n");
      if(permission & 1) printf(" - View model\n");
      if(permission & 2) printf(" - Train model\n");
      if(permission & 4) printf("- Test model\n");
      if(permission & 8) printf(" -  Deploy model \n");
      if(permission ==0) printf(" - None\n");

      if((permission & 2) &&(permission & 8))
          printf("\nUser has both Training and Deployment permissions. \n");
      else
          printf("User does NOT have both Training and Deployment permissions.\n");
          return 0;
          

}