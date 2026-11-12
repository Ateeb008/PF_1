
#include<stdio.h>
#include<string.h>

int main(){
    char name[50];
    int accountNumber;
    float amount;
    
    //Prompt user for details
    printf("Enter coustmer Name: ");
    scanf("%[^\n]",name);
    printf("ENter Account Number: ");
    scanf("%d", & accountNumber);
    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);

    //open file in append mode
    FILE *fptr = fopen("bank_log.txt", "a");

    if(fptr == NULL){
        printf("Error: Could not open/ create bank log file.\n");
        exit(1);
    }

    //write transaction details
    fprintf(fptr, "Name: %s | Account: %d | Amount: $%.2f\n", name ,accountNumber, amount);
    fclose(fptr);

    printf("Success: Transaction log updated successfully. \n");
    return 0;
}
