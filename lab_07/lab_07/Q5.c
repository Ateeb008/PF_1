
#include<stdio.h>
#include<ctype.h>

int main(){
    char sentence[3][100];

    printf("ENter a paragraph with 3 semicolon-seprated sentences \n");
    
    for(int i=0; i<3; i++){
        if(i==2){
            scanf("%[^\n]",sentence[i]);
        }//end if
        else{
            scanf("%[^;]%*c",sentence[i]);
        }//end else
    }//end for

    printf("\n-------Vowel Density Analysis -----\n");
	int vowel_count = 0,i=0;
    for (i; i<3; i++){
        

        for(int j=0;sentence[i][j]!='\0';j++){
            char ch = towlower(sentence[i][j]);  //case-insensetive check

            if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'){
                vowel_count++;
            }//end if
        }//end inner for 
    }//end outer for

    printf("Sentence %d: \%s\ |vowel count: %d\n",i,sentence[i], vowel_count);
    return 0;
}