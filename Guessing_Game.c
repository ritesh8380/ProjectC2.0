#include <stdio.h> //Important c programming library
#include <stdlib.h> //standard library is important for general purpose functions such as time,random numbers etc 
#include <time.h> //time related i.e it will change the random number as time goes
#include <string.h> //manipulations related to the strings

int main(){
    srand(time(NULL)); //important seeding the random number with time(NULL) value
    int random = rand() % 100 + 1; //creation of random number from 1 till 100
    int guess_no,attempts = 0,medium; //attempts will increase at each step
    char string[20];
    char string2[30];
    char string3[10];

    printf("welcome Lets play the Number guessing game\n");
    printf("(0)Easy\n");
    printf("(1)Medium\n");
    printf("(2)Hard\n");
    printf("chose the difficulty level :\t");

    while(1){ //this is infinite loop because the code will run until the condition is true i.e any non zero interger
     if(scanf("%d",&medium) == 1 && medium >= 0 && medium <=2 ){
        break;
     }else {
        printf("Invalid Input please enter valid difficulty level (0,1 or 2): \t");
        while (getchar() != '\n'); //getchar is the library which removes the input until the newline character
    }
}

    
    switch(medium){
        case(0) :
         strcpy(string,"1 till 10");
         random = rand() % 10 +1;
        break;
        case(1) :
         strcpy(string,"1 till 50");
         random = rand() % 50 +1;
        break;
        case(2) :
         strcpy(string,"1 till 100");
         random = rand() % 100 +1;
        break;
        default: 
        printf("please provide the valid input\n");
        return 1;
    }
    
    printf("computer chose the number from %s you just have to guess that number !\n",string);
    
do{
    printf("guess begins :\t");
    if(scanf("%d",&guess_no) != 1){
        printf("Invalid input please enter valid input !\n");
    while(getchar() != '\n');
        continue;
    }
    attempts++;

    if(guess_no > random){
        printf("your Number is greater !\n");
    }
    else if(guess_no < random){
        printf("Your Number is smaller !\n");
    }
    else{
        printf("\nyes %d is the correct guess ! \n",guess_no);
    }
    if(attempts ==1 ){
        strcpy(string3,"st"); //This is like taking the empty bowl (string3) and filling it will any thing (st)
    }
    else if(attempts == 2){
        strcpy(string3,"nd");
    }
    else if(attempts == 3){
        strcpy(string3,"rd");
    }
    else{
        strcpy(string3,"th");
    }
    if(medium == 0){
        if(attempts <= 3){
            strcpy(string2,"Excellent gameplay \"*****\" !");
        }
        else if(attempts <= 5){
            strcpy(string2,"Well played \"***\" !");
        }
        else{
            strcpy(string2,"Amazing gameplay \"*\"!");
        }
    }
    else if(medium == 1){
        if(attempts <= 10){
            strcpy(string2,"Excellent gameplay \"*****\" !");}
        else if(attempts <= 30){
            strcpy(string2,"Well played \"***\"!");}
        else{
            strcpy(string2,"Amazing gameplay \"*\" !");
        }
    }
    else if(medium == 2)
    {
        if(attempts <= 30){
            strcpy(string2,"Excellent gameplay \"*****\" !");
        }else if(attempts <= 50){
            strcpy(string2,"Well played \"***\" !");
        }else{
            strcpy(string2,"Amazing gameplay \"*\"!");
        }
    }
} while (random != guess_no);
printf("your %d%s attempt is your successful attempt\n",attempts,string3);
printf("Rating : %s\n",string2);
printf("Developer : Ritesh Sharma (India)\n");
printf("Thanks for your contribution Good BYE ! Visit again.\n");
printf("\n");
return 0;
}