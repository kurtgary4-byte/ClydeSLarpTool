#include <stdio.h>
#include <string.h>

  int main(){
     char word[80] = "";
     char response = '\0';
     int choice = 0;

     printf("Enter word: ");
     fgets(word, sizeof word, stdin);
     word[strlen(word) - 1] = '\0';

     printf("What color do you want: \n");
       printf("[1] GREEN\n");
       printf("[2] RED\n");
       printf("[3] YELLOW\n");
       printf("[4] BLUE\n");
       printf("[5] MAGENTA\n");
       printf("[6] CYAN\n");
    printf("Enter choice here: \n");
    scanf("%d", &choice);

     printf("Are you ready?(Y/N): \n");
     scanf(" %c", &response);

     if(response != 'Y' && response != 'y'){

        printf("Why did you even run this program then :sob:\n");

     } else {

    switch(choice) {

        case 1:
            //green
            while(1 == 1) {
                printf("\033[0;32m%s\033[0m", word);
            }

        case 2:
            //red
            while(1 == 1) {
                printf("\033[0;31m%s\033[0m", word);
            }

        case 3:
            // yellow
            while(1 == 1) {
                printf("\033[0;33m%s\033[0m", word);
            } //closes while function

         case 4:
            // blue
            while(1 == 1) {
                printf("\033[0;34m%s\033[0m", word);
            } //closes while function   

            case 5:
            // magenta
            while(1 == 1) {
                printf("\033[0;35m%s\033[0m", word);
            } //closes while function  
             
            case 6:
            // cyan
            while(1 == 1) {
                printf("\033[0;36m%s\033[0m", word);
            } //closes while function  
        } // close statement
} //close else block
    return 0;
  }