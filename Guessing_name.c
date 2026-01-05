#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int guess =0;
    int guessed;
    printf("Lets start the no guessing game!");
   do{
      scanf("%d",&guessed);
      if(guessed>randomNumber){
        printf("Go lower!\n");
      }
     if(guessed<randomNumber){
     printf("Go Higher!\n");
   }
   guess=guess +1 ;
}while(guessed!=randomNumber); 
printf("Congratulation you guessed the no %d in %d number of guesses",randomNumber,guess);   
return 0;
}
