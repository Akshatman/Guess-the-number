#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int number, guess,nguesses=1;
    srand(time(0));
    number = rand()%100+1; //Generates a random nuber between 1 and 100
    //Keep running the loop unti; the number is guessed
    do{
        printf("Guess the number between 1 and 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guesses it in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
return 0;
}