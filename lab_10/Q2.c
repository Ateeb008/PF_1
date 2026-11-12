#include<stdio.h>
#include<string.h>

int main(){
    char names[10][50];
    char temp[50];

    printf("Enter 10 student names: \n");
    for(int i=0; i<10; i++){
        printf("Student %d: ",i+1);
        scanf("%[^\n]",names[i]);   // reads full name including spaces
    }// end for loop

    //bubble sort to sort naem alphabetically
    for(int i=0; i<10-1; i++){
        for(int j=0; j<10-i-1; j++){
            if(strcmp(names[j], names[j+1]) > 0){
                //swap names[j] and names[j+1]
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1], temp);
            }//end if
        }// end inner loop
    }// end outer loop

    printf("\n===Sorted Student Roster(A to Z)===\n");
    for(int i=0; i<10; i++){
        printf("%d. %s\n", i+1, names[i]);
    }
    return 0;
}
