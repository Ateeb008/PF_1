#include<stdio.h>
#include<string.h>

int main(){

    char word_grid[3][100];

    char longest_word[100] = "";
    int max_length = 0;
    int max_row = -1;
    int max_col = -1;

    printf("Enter 3 lines, each containing 3 space-seprated words:\n");

    for(int i=0;i<3;i++){
        printf("Row %d: ",i+1);
        scanf(" %[^\n]",word_grid[i]);

        int c;
        while((c = getchar()) != '\n' && c != EOF);
    }

    for(int i=0;i<3;i++){
        int col=0;
        int j=0;

        while(word_grid[i][j] != '\0'){
            while(word_grid[i][j]==' '){
                j++;
            }//end while
            if(word_grid[i][j]=='\0')break;//end if

            char current_word[100];
            int w_len = 0;
            while(word[i][j]!='\0' && word_grid[i][j] != ' '){
                current_word[w_len++] = word_grid[i][j];
                j++;
            }//end inner while
            current_word[w_len]='\0';

            if(w_len>max_length){
                max_length = w_len;
                strcpy(longest_word, current_word);
                max_row = i;
                max_col = col;
            }//end if
            col++;
        }//end outer while
    }//end for loop

    printf("\n----Puzzle Grid Analysis---\n");
    printf("longest word: |%s|\n",longest_word);
    printf("Word length: %d characters\n",max_length);
    printf("row index (i): %d\n",max_row);
    printf("Column Index (j): %d\n",max_col);

    return 0;

}