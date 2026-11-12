#include<stdio.h>
#include<string.h>

int main (){
    char email[100];
    char domain[100];

    printf("Enter employee email address:  ");
    scanf("%s",email);
    //locate the @ symbol
    char *at_symbol = strchr(email, '@');

    if(at_symbol == NULL){
        printf("Error: Invalid email format\n");
    }//end if
    else{
        //copy all characters after @ into domain
        strcpy(domain, at_symbol + 1);
        printf("Extracted Domain: %s\n",domain);
    }
    
    return 0;

}
