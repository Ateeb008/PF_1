
#include<stdio.h>

int sumOfDigits(int n){
    if(n == 0){
        return 0;//base condition
    }
    return (n%10) +sumOfDigits(n/10);
    }

int calculationChecksum(int transactionID){
        if(transactionID< 10){
            return transactionID;
        }
        return calculationChecksum(sumOfDigits(transactionID));
    }

    int main(){
        int id;
        printf("Enter a Transition ID: ");
        scanf("%d",&id);

        printf("check sum (digit root): %d\n", calculationChecksum(id));
        return 0;
    }
