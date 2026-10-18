#include<stdio.h>

int main(){
    char secret_messages[3][100];
    printf("Enter TOP SECRET message:\n");
    for(int i=0;i<3;i++){
        printf("Message %d:\t",i+1);
        scanf("%[A-Z ]",secret_messages[i]);
        
        int c;
        while((c = getchar()) !='\n' && c!=EOF);
    }//end loop
    
    printf("\n------Filtered Messsages and ANalysis------\n");

	int space_count[3]= {0};
    int word_count[3] =;
    int in_word = 0,i=0;
    for(i;i<3;i++){
        

        for(int j=0;secret_messages[i][j]!='\0';j++){
           
		    if(secret_messages[i][j]==' '){
                space_count[i]++;
                in_word=0;// exits current word
            }else{
             
			    if(!in_word){
                    word_count[i]++;
                    in_word=1;
                }//end if
            }//end else
        }//end for
    }//end for
    for(int i=0;i<3;i++){
    	  printf("Message %d: ""%s"" |spaces: %d | Words: %d\n",i+1,secret_messages[i],space_count[i],word_count[i] );
		  printf("\n");	
	}
  

       return 0;
}