#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char inputUser[50], inputPass[50];
    char savedUser[50], savedPass[50];

    //prompt opreator input
    printf("ENter Username: ");
    scanf("%s", inputUser);
    printf("ENter Password: ");
    scanf("%s", inputPass);

    //open credentials configuration file
    FILE *fptr = fopen("credentiale.txt", "r");

    if(fptr = NULL){
        printf("Error: COnfiguration file (credentials.txt) not found!\n");
        exit(1);
    }

    //read cuthorized credientials from file
    fscanf(fptr, "%s %s", savedUser, savedPass);
    fclose(fptr);

    //verify credientials
    if(strcmp(inputUser, savedUser) == 0 && strcmp( inputPass, savedPass) == 0){
        printf("\n Access Granted!\n");
    }else{
        printf("\n Access Denied!\n");
    }
    return 0;
}
