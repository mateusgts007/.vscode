#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int answer, playerChoice ,machineChoice;
int again = 1;


    printf("welcome to the jankenpon, wanna play with me?\n");
    printf("enter with 1 for yes or 0 for no: ");
    scanf("%d",&answer);

if (answer == 1){
    printf("let's go ");
}

else if(answer == 0 ){
    printf("ok, see you later");
}

while(again){
   printf("choose your move\n");
   printf("1. rock\n");
   printf("2. paper\n");
   printf("3. scissor\n");
   scanf("%d",&playerChoice);


srand(time(NULL));
machineChoice = rand() % 3 + 1;

printf("computer move: %d\n",machineChoice);

if (playerChoice == machineChoice){
    printf("it's a tie");
}

else if (playerChoice == 1 && machineChoice == 3){
    printf("player wins, try again?\n");
}

else if (playerChoice == 2 && machineChoice == 1){
    printf("player wins, try again?\n");
}

else if (playerChoice == 3 && machineChoice == 2){
    printf("player wins, congratulations!!!\n");
}

else if(playerChoice == 2 && machineChoice == 3){ 
    printf("machine wins, congratulations!!!\n");
}

else if(playerChoice == 1 && machineChoice == 2){
    printf("machine wins, congratulations!!!\n");
}

else if(playerChoice == 3 && machineChoice == 1){
    printf("machine wins, congratulations!!!\n");
}


printf("do you want to play again? enter 1 for yes or 0 for no\n");
scanf("%d",&again);

 
}
    return 0;
}     



