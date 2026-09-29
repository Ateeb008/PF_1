#include<stdio.h>
#include<math.h>

int main()
{
    int choice;
    double num, base, exponent, result;

    printf(" ====Maths Opreations List====\n");
    printf("1. Square Root\n");
    printf("2. Power\n");
    printf("3. Absolute Value\n");
    printf("4. Floor\n");
    printf("5. Celling\n");
    printf("Enter your choice(1-5): \n");
    
    if(scanf("%d",&choice) !=1){
        printf("Invalid input! Please enter a number from 1 to 5.\n");
        return 1;}
    
        switch(choice){
        case 1:
            printf("Enter a number: ");
            if(scanf("lf",&num) !=1){
                printf("Invalid Input: \n");
                break;
            }
            
            if(num<0){
                printf("Error: Square root of a negvative number is not defined: \n");
            } else{
                result= sqrt(num);
                printf("sqrt(%.2f) = %.4f\n",num,result);
            }
            break;
        case 2:
            printf("Enter base: ");
            if(scanf("%lf",&base) !=1){
                printf("Invalid Input!\n");
                break;
            }
            printf("Enter exponent: ");
            if(scanf("%lf",&exponent) !=1){
                printf("Invalid Exponent\n");
                break;
            }
            if(base ==0 && exponent<0){
                printf("Error! 0 Raised to the negative power is undefined!\n");
            } else if(base<0 && exponent != floor(exponent)){
                printf("Error! negatice base with a fractional exponent gives no real results:");
            } else{
                result = pow(base,exponent);
                printf("%.2f^%.2f = %.4f\n",base , exponent, result);
            }
            break;
        case 3:
            printf("Enter a number :");
            if(scanf("%lf", & num) !=1){
                printf("Invalid input!\n");
                break;
            }
            result= fabs(num);
            printf("|%.2f| = %.2f\n",num,results);
            break;
        case 4:
            printf("Enter a number: ");
            if(scanf("lf",&num) !=1){
                printf("Invalid input!\n");
                break;
            }
            result = floor(num);
            printf("floor (%.2f)= %.0f\n",num,result);
            break;
        case 5:
            printf("Enter a number:");
            if(scanf("lf",&num) !=1){
                printf("Invalid input!\n");
                break;
            }
            result = ceil(num);
            printf("ceil(%.2f) = %0f\n", num,result);
            break;

        default:
            printf("Invalid choice! Please select an option from 1 to 5.\n");
  
    }
      return 0;
}