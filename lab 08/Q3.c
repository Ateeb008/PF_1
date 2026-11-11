
#include<stdio.h>

int main(){
    int image[3][3];
    int (*ptr)[3] = image; //pointer to an arry of 3 integer

    printf("Enter values for the 9 pixels(3x3 matrix):\n");
    for(int i=0; i<3; i++){
        for(int j=0;j<3;j++){
            printf("Pixel [%d][%d]: ",i,j);
            scanf("%d", &(*(ptr + i))[j]);
        }//inner loop ends
    }//outer loop ends

    //Multiply each pixel value by 2 using exlusive pointer arthematic
    for(int i = 0; i<3; i++){
        for(int j=0;j<3;j++){
            *(*(ptr+1)+j) *=2;
        }//end iinner for loop
    }// end oouter for loop

    printf("\n Updated 3x3 Image Matrix (Brightness Increased);\n");
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
       {
            printf("%d\t", *(*(ptr+i)+j));
       }//end inner loop
       printf("\n");                                       
    }//end outer loop

    return 0;
}
