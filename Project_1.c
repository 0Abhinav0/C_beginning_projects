#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int user_guess, random_number, number_of_guesses = 1;
    srand(time(0));
    random_number = rand()%100 +1;
    printf("%d\n", random_number);

    do
    { printf("Guess the number\n");
      scanf("%d", &user_guess);

    if (user_guess>random_number){
        printf("The guess number is smaller\n");
    }

    else if (user_guess<random_number){
        printf("The guess number is greater\n");
    }
    else{
        printf("You guessed it in %d attempts\n", number_of_guesses);
    }
    number_of_guesses++;
    
    } while (user_guess!=random_number);
    
    return 0;
}