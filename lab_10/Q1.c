#include<stdio.h>
#include<string.h>

int main(){
    char review[500];
    char updatedReview[600]="";
    printf("ENter coustomer feedback Message: \n");
    fgets(review, sizeof(review), stdin);

    //removing trailing new line character from fgets if present
    size_t len = strlen(review);
    if(len>0 && review[len-1] == '\n'){
        review[len -1] = '\0';
    }

    printf("\n==== Sentiment & Analysis Report====\n");
    printf("Total Characters: %lu \n", strlen(review));

    //detect sentiment keywords
    char *pos_good = strstr(review, "good");
    char *pos_bad = strstr(review, "bad");

    if(pos_good){
        printf("Sentiment Keyword Detected: 'Good' (positive Sentiment)\n");
    }
    if(pos_bad){
        printf("Sentiment Keyword Detected: 'bad' (negative Sentiment)\n");
    }
    if(!pos_good && !pos_bad){
        printf("Sentiment Keyword: Netural / none detected\n");
    }

    // Replace occurance of "Bad "with "not good"
    if(pos_bad){
        char *current = review;
        while((pos_bad = strstr(current, "bad")) != NULL){
            //copy part before "bad"
            strncat(updatedReview, current, pos_bad - current);
            //append replacement
            strcat(updatedReview,"not good");
            //move pointer past "bad"
            current = pos_bad + 3;
        }//end while
        //append remaining string 
        strcat(updatedReview, current);

        printf("Updated Review: %s\n",updatedReview);
    }//end if 
    else{
        printf("Updated Review %s\n",review);
    }
    return 0;
}
