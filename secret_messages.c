//Author: Alexander Nedev, 101195595
//Version: 1.0

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Encrypts a string using an encryption key
void encrypt_message();
//Decrypts a string using a secret key
void decrypt_message();


void encrypt_message(){

    char encryptInput[150] = {0};

    char input[150] = {0};
    //Get secret message from user
    printf("Enter a message to encrypt: ");
    fgets(input, sizeof input, stdin);

    //Have to subtract 1 from the string length 
    //because fgets adds a \n character at the end
    int wordLength = strlen(input) - 1;

    int counter = 0;

    //Applies the secret key
    for(int i = 0; i < wordLength; i++){
        if(tolower(input[i]) == 'a'){
            encryptInput[counter] = input[i];
            encryptInput[counter+1] = 'p';
            encryptInput[counter+2] = tolower(input[i]);
            counter+=3;
        }
        else if(tolower(input[i]) == 'e'){
            encryptInput[counter] = input[i];
            encryptInput[counter+1] = 'p';
            encryptInput[counter+2] = tolower(input[i]);
            counter+=3;
        }
        else if(tolower(input[i]) == 'i'){
            encryptInput[counter] = input[i];
            encryptInput[counter+1] = 'p';
            encryptInput[counter+2] = tolower(input[i]);
            counter+=3;
        }
        else if(tolower(input[i]) == 'o'){
            encryptInput[counter] = input[i];
            encryptInput[counter+1] = 'p';
            encryptInput[counter+2] = tolower(input[i]);
            counter+=3;
        }
        else if(tolower(input[i]) == 'u'){
            encryptInput[counter] = input[i];
            encryptInput[counter+1] = 'p';
            encryptInput[counter+2] = tolower(input[i]);
            counter+=3;
        }
        else{
            encryptInput[counter] = input[i];
            counter++;
        }
    }

    //Prints encrypted message
    printf("%s\n", encryptInput);

    return;
}

void decrypt_message(){

    char decryptInput[150] = {0};

    char input[150] = {0};
    //Get secret message from user
    printf("Enter a message to decrypt: ");
    fgets(input, sizeof input, stdin);

    //Have to subtract 1 from the string length 
    //because fgets adds a \n character at the end
    int wordLength = strlen(input) - 1;

    int counter = 0;
    
    //Applies the secret key
    for(int i = 0; i < wordLength; i++){
        if(tolower(input[i]) == 'a'){
            decryptInput[counter] = input[i];
            i+=2;
        }
        else if(tolower(input[i]) == 'e'){
            decryptInput[counter] = input[i];
            i+=2;
        }
        else if(tolower(input[i]) == 'i'){
            decryptInput[counter] = input[i];
            i+=2;
        }
        else if(tolower(input[i]) == 'o'){
            decryptInput[counter] = input[i];
            i+=2;
        }
        else if(tolower(input[i]) == 'u'){
            decryptInput[counter] = input[i];
            i+=2;
        }
        else{
            decryptInput[counter] = input[i];
        }
        counter++;
    }

    //Print the decrypted statement
    printf("%s\n", decryptInput);

    return;
}

int main(){

    char choice;
    
    //Get choice to decrypt or encrypt
    printf("What would you like to do? (Enter E for encrypt or D for decrypt): ");
    scanf("%c", &choice);
    getchar();

    if(tolower(choice) == 'e'){
        encrypt_message();
    }
    else if(tolower(choice) == 'd'){
        decrypt_message();
    }
    else{
        printf("That's not one of the choices!\n");
    }

    return 0;
}
