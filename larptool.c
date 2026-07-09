#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>

  int main(){
     char word[80] = "";
     char response = '\0';
     char choice[10] = "";
     int choice2 = 0;
     char YandN = '\0';
     
printf("===========================================================================\n");
    printf("  ██████╗ ██╗  ██╗   ██╗██████╗ ███████╗\n");
    printf(" ██╔════╝ ██║  ╚██╗ ██╔╝██╔══██╗██╔════╝\n");
    printf(" ██║      ██║   ╚████╔╝ ██║  ██║█████╗  \n");
    printf(" ██║      ██║    ╚██╔╝  ██║  ██║██╔══╝  \n");
    printf(" ╚██████╗ ███████╗██║   ██████╔╝███████╗\n");
    printf("  ╚═════╝ ╚══════╝╚═╝   ╚═════╝ ╚══════╝\n");
    printf("  ▓▓▓▓▓▓▓  ▓▓▓▓▓▓▓ ▓▓   ▓▓▓▓▓▓  ▓▓▓▓▓▓▓  \n");
    printf("===========================================================================\n");
           printf("Welcome to clydes larp tool!\n");
           printf("[1] WordSpam\n");
           printf("[2] FlagC\n");
           printf("[3] Hacking simulator(not cmatrix)\n");
           printf("Answer: ");
           scanf("%d", &choice2);
           getchar();

if(choice2 == 1){

     printf("Enter word: ");
     fgets(word, sizeof word, stdin);
     word[strlen(word) - 1] = '\0';

     printf("What color do you want(type the name of the color lowercased): \n");
       printf("[1] GREEN\n");
       printf("[2] RED\n");
       printf("[3] YELLOW\n");
       printf("[4] BLUE\n");
       printf("[5] MAGENTA\n");
       printf("[6] CYAN\n");
    printf("Enter choice here: \n");
    fgets(choice, sizeof choice, stdin);
     choice[strlen(choice) - 1] = '\0';

    if(strstr(choice, "green") != NULL || strstr(choice, "GREEN")!= NULL || strstr(choice, "Green") != NULL){

            while(1 == 1) {
                printf("\033[0;32m%s\033[0m", word);
            }
        }
    if(strstr(choice, "red") != NULL || strstr(choice, "RED")!= NULL || strstr(choice, "Red") != NULL){
           
            while(1 == 1) {
                printf("\033[0;31m%s\033[0m", word);
            }
        }
        if(strstr(choice, "yellow") != NULL || strstr(choice, "YELLOW")!= NULL || strstr(choice, "Yellow") != NULL){
            
            while(1 == 1) {
                printf("\033[0;33m%s\033[0m", word);
            } //closes while function
        }
         if(strstr(choice, "blue") != NULL || strstr(choice, "BLUE") != NULL || strstr(choice, "Blue") != NULL) {
            
            while(1 == 1) {
                printf("\033[0;34m%s\033[0m", word);
            } //closes while function   
        }
         if(strstr(choice, "magenta") != NULL || strstr(choice, "MAGENTA") != NULL || strstr(choice, "Magenta") != NULL){
            // magenta
            while(1 == 1) {
                printf("\033[0;35m%s\033[0m", word);
            } //closes while function  
        }
         if(strstr(choice, "cyan") != NULL || strstr(choice, "CYAN") != NULL || strstr(choice, "Cyan") != NULL){
            // cyan
            while(1 == 1) {
                printf("\033[0;36m%s\033[0m", word);
            } //closes while function  
         }else{
            printf("Unknown color please restart the program and type the colors listed\n");
         }
  }

if(choice2 == 2){

   // THE ANIMATION IS AI I COULD NOT FOR THE LIFE OF ME GET IT TO WORK SORRY :(

    int frame = 0;
    while(1) {
        for (int row = 0; row < 6; row++) {
            int shift = (row + frame) % 4;
            for (int s = 0; s < shift; s++) {
                printf(" ");
            }

            if (row < 2) {
                printf("\033[0;37m[][][][][][][][][][][][][]\033[0m\n"); 
            } else if (row < 4) {
                printf("\033[0;37m[][][][][][][][][][][][][]\033[0m\n"); 
            } else {
                printf("\033[0;37m[][][][][][][][][][][][][]\033[0m\n"); 
            }
        }

        printf("  ||\n  ||\n  ||\n");

        frame++; 
        usleep(150000); 
    }
}

else if(choice2 == 3 ){

    printf("Initialize attack? (Y/n): ");
    scanf("%c", &YandN);
    getchar();
     
       if(YandN == 'y' || YandN == 'Y'){

          printf("\033[0;32mAttacking.\n\033[0m");
          usleep(500000);
          printf("\033[0;32mAttacking..\n\033[0m");
          usleep(500000);
          printf("\033[0;32mAttacking...\n\033[0m");
           usleep(100000);
           printf("\033[0;32mAccess denied. Cracking the password with the ancient diddy technique\n\033[0m");
           usleep(300000);
           printf("\033[0;32mPassword cracked, trying new password.\n\033[0m");
             usleep(100000);
           printf("\033[0;32mPassword cracked, trying new password..\n\033[0m");
             usleep(100000);
           printf("\033[0;32mPassword cracked, trying new password...\n\033[0m");
              usleep(30000);
              printf("\033[0;32mAccess initialized getting sensitive files.\n\033[0m");
               usleep(500000);
              printf("\033[0;32mAccess initialized getting sensitive files..\n\033[0m");
               usleep(500000);
              printf("\033[0;32mAccess initialized getting sensitive files...\n\033[0m");
              usleep(1000000);
              printf("\033[0;32mSensitive files found: Epstien_List_Real_NOT_fake.txt   BEST_INTIMITE_POSITIONS_WITH_PARTNER.txt     password.txt\n\033[0m");
              usleep(30000);
              printf("\033[0;32mreading the files.\n\033[0m");
              usleep(500000);
              printf("\033[0;32mreading the files..\n\033[0m");
              usleep(500000);
              printf("\033[0;32mreading the files...\n\033[0m");
              usleep(500000);
              printf("\033[0;32mman...this is some shady shit. I'm deleting this no one will have these files L EZZZ\n\033[0m");
              usleep(2500000);
              printf("\033[0;32mL\n\033[0m");
              usleep(350000);
              printf("\033[0;32mL\n\033[0m");
              usleep(350000);
              printf("\033[0;32mL\n\033[0m");
              usleep(350000);
              printf("\033[0;32mL\n\033[0m");
              usleep(350000);
              printf("\033[0;32mL\n\033[0m");
              usleep(350000);
              printf("\033[0;32mL\n\033[0m");
              usleep(350000);
              printf("\033[0;32mL\n\033[0m");
              usleep(350000);
              printf("\033[0;32mL\n\033[0m");
              usleep(350000);
              printf("\033[0;32mL\n\033[0m");
              usleep(350000);
              printf("\033[0;32mL\n\033[0m");
              usleep(350000);
       }else{
         printf("Farewell then. Goodbye\n");
       }

}
  }
