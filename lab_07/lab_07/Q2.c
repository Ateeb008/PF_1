#include<stdio.h>

int main()
{
    char logs[9][50];
    int upper_count=0;

    printf("Enter 3CSV log entries: \n");

    for(int i=0; i<3; i++ ){
        printf("Log entry %d: ",i+1);
        scanf("%29[^,],%29[^,],%29[^\n]",logs[i*3],logs[i*3 +1],logs[i*3 +2]);
    }//end for loop

    for(int i=0;i<9;i++){
        for(int j=0;logs[i][j]!='\0';j++){
            if(logs[i][j]>='A' && logs[i][j]<='Z'){
                upper_count++;
            }//end if
        }//end inner loop
    }    //end outer loop
   printf("Total number of upper case letetrs: %d\n", upper_count);

   return 0;
   
    
}