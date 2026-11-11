
/*Opreations using funtion pointers program 
Made By Muhammad ATeeb*/
#include<stdio.h>

int add(int a, int b){
    return a+b;
}

int multiply(int a, int b){
    return a*b;
}

int findMax(int a, int b){
    return (a>b)? a:b;
}

//master function accepting a function pointer
int compute(int a, int b, int (*op)(int,int)){
    return op(a, b);
}

int main(){
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d",&num1, &num2);
    
    //calling compute with diffrent function pointers directly
    int sumresult = compute(num1, num2, add);
    int productResult = compute(num1, num2, multiply);
    int maxResult = compute(num1, num2, findMax);

    printf("\n--------Results------\n");
    printf("Sum: %d\n", sumresult);
    printf("Product: %d\n",productResult);
    printf("Maximum Value: %d\n",maxResult);

    return 0;
}
