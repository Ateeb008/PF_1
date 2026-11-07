#include<stdio.h>
// function to withdraw money using pointer refrence
void withdraw(double *balance, double amount){
    if(amount<= *balance){
        *balance -=amount;
        printf("\n Success: Amount withdrawn successfully.\n");
    }else{
        printf("\n Transaction Declined: Insufficient Balance:\n");
    }
}
//function to deposit amoney using pointer refrence
void deposit(double*balance, double amount){
    *balance+=amount;
    printf("\n Success: Amount deposited successfully.\n");
    printf("Updadted Balance: PKR %.2f\n",*balance);
}

int main(){
    double balance = 25000.0;//Initial amount balance
    int choice;
    double amount;
    
    printf("Wellcome to ATM Simulator\n");
    printf("Current Account Balance: PKR %.2f\n", balance);
    printf("1.Withdraw(Debit)\n");
    printf("2. deposit (credit)\n");
    printf("Select transaction type(1 or 2)");
    scanf("%d",&choice);

    if(choice ==1){
        printf("Enter Withdraw amount: PKR");
        scanf("%lf",&amount);
        withdraw(&balance, amount);
    }else if(choice == 2){
        printf("Enter deposite amount: PKR ");
        scanf("%lf",&amount);
    }else{
        printf("Invalid choice selected.\n");
    }

    printf("Final Account Balance: PKR %.2f\n",balance);
    return 0;
}
