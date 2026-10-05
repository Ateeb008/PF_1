#include<stdio.h>

int factorial_n(int n);
int factorial_n1(int n);
int factorial_2n(int n);

int main()
{
    int n,result,result_n1,catalan,result_2n;

    printf("Enter a number :\n");
    scanf("%d",&n);
    
    result=factorial_n (n);
    result_n1=factorial_n1(n);
    result_2n=factorial_2n(n);
    
    printf("factorial of n is %d\n",result);                    //shows results of n!
    printf("Factorial of the n+1 is %d\n",result_n1);           //shhows results for (n+1)!
	printf("Factorial of 2n is %d\n",result_2n);

    catalan=(result_2n)/(result*result_n1);
    
    printf("Catalan number of the Given number is %d",catalan);
    
    return 0;
	
}
int factorial_n(int n){
    int fac_n=1;
    for(; n>1; n--)
	{
        fac_n=fac_n*n;          //Calculates factorial of the given number 
    }
    return fac_n;
    }
int factorial_n1(int n){
    int fac_n1=1;
    fac_n1=factorial_n(n)*(n+1);        //call value of factorial of n and multiply it with n+1 then made a another factorial;
	return fac_n1;
}
int factorial_2n(int n){
    int fac_2n=1;
    n=2*n;
    for(;n>1;n--){
        fac_2n=fac_2n*(n);
    }
    return fac_2n;
}
