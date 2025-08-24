#include<stdio.h>

int main(){
    printf("***********************************************\n");
    printf("******Welcome to Rock Paper Scissor game ******\n");
    printf("***********************************************\n");

    printf("**************************************Rules of the Game ***************************************\n");
    printf("*                     two players secretly pick one of rock, paper, or scissors.              *\n");
    printf("*  Both players reveal their selection to the other player at once; the winner is chosen      *\n");
    printf("*  based on what the selections are. Rock beats scissors (by crushing them); scissors         *\n");
    printf("*  beats paper (by cutting it); and paper beats rock (by covering it). If both players select *\n");
    printf("*                                the same one, it is a tie.                                   *\n");
    printf("***********************************************************************************************\n");

    char your_choice,computer_choice;
    printf("Enter r for rock, p for paper and s for scissor\n");
    scanf("%c",your_choice);
    return 0;
}
