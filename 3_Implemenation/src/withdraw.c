#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include"atm.h"

float moneyWith(float balance) {
    float wd;
    bool back = true;

    printf("You are liking to withdraw a money\n");
    printf("  Your Balance is: $%.2f\n\n", balance);

    while (back)
    {
    printf("Enter your amount to withdraw:\n");
    scanf("%f", &wd);


    if (wd < balance)
    {
        back = false;
        balance = balance-wd;
        printf("\nYour withdrawing money is:  $%.2f\n", wd);
        printf("edhi amma mana balance:   $%.2f\n\n", balance);

    }

        else
        {

        printf("you are not having a that much of balance\n");
        printf("Your Balance is:   $%.2f\n\n", balance);

        }
    }
    return balance;



}
