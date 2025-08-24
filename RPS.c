#include<stdio.h>
#include<math.h>
#include<time.h>
int game(char you, char computer)
{
    if (you == computer)
        return -1;
    if ((you == 'r' && computer == 's') ||
        (you == 's' && computer == 'p') ||
        (you == 'p' && computer == 'r'))
        return 1;
    else
        return 0;
}


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
    int n,result;


    srand(time(NULL));
    do{
        printf("Enter r for rock, p for paper and s for scissor\n");
        scanf(" %c",&your_choice);

        n = rand() % 100;
        if (n < 33)
            computer_choice = 's';
        else if (n > 33 && n < 66)
            computer_choice = 'p';
        else
            computer_choice = 'r';

        result=game(your_choice,computer_choice);

        if (result == -1) {
            printf("It's Tie, Rematch........\n");
        }
    }while(result==-1);
    if (result == 1) {
        printf("You have won the game!\n");
    }
    else {
        printf("Computer won the game\n");
    }
        printf("YOu choose : %c and Computer choose : %c\n",your_choice, computer_choice);


    return 0;
}
