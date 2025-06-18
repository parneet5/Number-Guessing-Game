#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int random, guess;
  int no_of_guess = 0;
  srand(time(NULL));
  // evrytime time is differet and diff numbers are generated.

  printf("Welcome to the world of Guessing Numbers\n");
  random = rand() % 100 + 1; // Generating between 0 to 100


  do{
   printf("\nPlease enter your Guess between(1 to 100): ");
   scanf("%d", &guess);
   no_of_guess++;

   if(guess < random){
    printf("Guess larger number\n");

   }else if(guess > random){
    printf("Guess smaller number\n");
   }
   else{
    printf("Congratulations!! You have successfully guessed the Number in %d attempts.", no_of_guess);
   }
  }while(guess != random);
  
  printf("\n Bye Bye, Thanks for Playing.\n\n");
  printf("\nDeveloped by: Parneet Kaur");
  return 0; 
}