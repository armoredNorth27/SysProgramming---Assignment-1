#include <stdio.h>
#include <ctype.h>

int main(){

    //Counters
    int numQuarters = 0;
    int smOnePlays = 0;
    int smTwoPlays = 0;
    int smThreePlays = 0;
    int numTotalPlays = 0;

    printf("Enter the total number of quarters: ");
    scanf("%d", &numQuarters);

    //Prompt user to continue entering values until 1 <= numQuarters <= 1000
    while( (numQuarters < 1) || (numQuarters > 1000) ){
        printf("Invalid amount. Please enter a number between 1 and 1000 \n");
        scanf("%d", &numQuarters);
    }
    
    //Get the number of times every slot machine has been played
    printf("Enter # of times slot machine 1 has been played since last payment: ");
    scanf("%d", &smOnePlays);

    //Ensure that the first slot machine play amount is greater than or equal to 0
    while( smOnePlays < 0 ){
        printf("Invalid play count. Please enter a number greater than or equal to 0 \n");
        scanf("%d", &smOnePlays);
    }

    printf("Enter # of times slot machine 2 has been played since last payment: ");
    scanf("%d", &smTwoPlays);

    //Ensure that the second slot machine play amount is greater than or equal to 0
    while( smTwoPlays < 0 ){
        printf("Invalid play count. Please enter a number greater than or equal to 0 \n");
        scanf("%d", &smTwoPlays);
    }

    printf("Enter # of times slot machine 3 has been played since last payment: ");
    scanf("%d", &smThreePlays);

    //Ensure that the third slot machine play amount is greater than or equal to 0
    while( smThreePlays < 0 ){
        printf("Invalid play count. Please enter a number greater than or equal to 0 \n");
        scanf("%d", &smThreePlays);
    }

    //Determines how many times the user can play
    for(int i = 1; i <= numQuarters; i++){
        //Plays the first slot machine
        if(i%3 == 1){
            smOnePlays++;
            numTotalPlays++;

            //Gets payed if it's the 35th time playing
            if(smOnePlays%35 == 0){
                numQuarters += 30;
            }
        }

        //Plays the second slot machine
        else if(i%3 == 2){
            smTwoPlays++;
            numTotalPlays++;

            //Gets payed if it's the 100th time playing
            if(smTwoPlays%100 == 0){
                numQuarters += 60;
            }
        }
        
        //Plays the third slot machine
        else if(i%3 == 0){
            smThreePlays++;
            numTotalPlays++;

            //Gets payed if it's the 10th time playing
            if(smThreePlays%10 == 0){
                numQuarters += 9;
            }
        }
    }

    printf("The user can play %d times before they run out of quarters\n", numTotalPlays);

    return 0;
}