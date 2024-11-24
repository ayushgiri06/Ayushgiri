#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int guessed,number,guesses=0;
    srand(time(0));
    number = rand() % 100 + 1; 
    
    printf("welcome to number guessing game!!\n");
    printf("I have guessed a number between 1-100 \n");
do{
    printf("enter your guessed number:");
    scanf("%d",&guessed);
    guesses++;
    if(guessed>number){
    printf("oops too high!!guess again\n");
  }  else if(guessed<number){
    printf("oops too low!!guess again \n");
   } else{
    printf("congratulations!! you have guessed correctly in %d chances",guesses);
   }
}while(guessed!=number);  

    return 0;
}