#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int votes[] = {0, 0, 0, 0, 0, 0, 0, 0};
    int totalVote = 0;
    int validVote = 0;
    int winner = -1;
    char wordWinner[] = "";
    int numWinners = 0;
    time_t t;
    srand( (unsigned) time(&t) );

    //Case all the votes
    for(int i = 0; i < 200; i++){
        int x = rand()%10;

        switch(x){
            case 0: case 8: case 9:
                votes[0]++;
                break;
            case 1:
                votes[x]++;
                validVote++;
                break;
            case 2:
                votes[x]++;
                validVote++;
                break;
            case 3:
                votes[x]++;
                validVote++;
                break;
            case 4:
                votes[x]++;
                validVote++;
                break;
            case 5:
                votes[x]++;
                validVote++;
                break;
            case 6:
                votes[x]++;
                validVote++;
                break;
            case 7:
                votes[x]++;
                validVote++;
                break;           
        }
        totalVote++;
    }

    //Calculate the winner
    for(int i = 1; i < 8; i++){
        if(votes[i] > winner){
            winner = votes[i];
        }

    }

    printf("Total votes: %d\n", totalVote);
    printf("Valid votes: %d\n", validVote);
    printf("Invalid votes: %d\n", votes[0]);
    printf("Candidate          Votes\n");
    printf("Lillian Burns       %d\n", votes[1]);
    printf("Padma Sami          %d\n", votes[2]);
    printf("Musa Balewa         %d\n", votes[3]);
    printf("Kondo Masahiro      %d\n", votes[4]);
    printf("Adelina Peguero     %d\n", votes[5]);
    printf("Fan Yu              %d\n", votes[6]);
    printf("Helyan Shone        %d\n", votes[7]);
    printf("The winner(s): ");

    for(int i = 1; i < 8; i++){
        
        if( winner == votes[i] && i == 1 ){
            numWinners++;
            printf("Lillian Burns");
        }
        else if( winner == votes[i] && i == 2 ){
            numWinners++;
            if(numWinners > 1){
                printf(", ");
            }

            printf("Padma Sami");

        }
        else if( winner == votes[i] && i == 3 ){
            numWinners++;
            if(numWinners > 1){
                printf(", ");
            }

            printf("Musa Balewa");

        }
        else if( winner == votes[i] && i == 4 ){
            numWinners++;
            if(numWinners > 1){
                printf(", ");
            }

            printf("Kondo Masahiro");

        }
        else if( winner == votes[i] && i == 5 ){
            numWinners++;
            if(numWinners > 1){
                printf(", ");
            }

            printf("Adelina Peguero");

        }
        else if( winner == votes[i] && i == 6 ){
            numWinners++;
            if(numWinners > 1){
                printf(", ");
            }

            printf("Fan Yu");

        }
        else if( winner == votes[i] && i == 7 ){
            numWinners++;
            if(numWinners > 1){
                printf(", ");
            }
            
            printf("Helyan Shone");
        }

    }

    printf("\n");

    return 0;
}