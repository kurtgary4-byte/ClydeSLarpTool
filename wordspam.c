#include <stdio.h>
#include <string.h>

  int main(){
     char word[80] = "";
     char response = '\0';


     printf("Enter word: ");
     fgets(word, sizeof word, stdin);
     word[strlen(word) - 1] = '\0';

     printf("Are you ready?(Y/N): ");
     scanf("%c", &response);

     if(response != 'Y' && response != 'y'){

         printf("Why did you even run this program then :sob:");

     }else{
      
             while(1 == 1){

                 printf("%s", word);

             }


     }

       


    return 0;
  }