#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include"atm.h"

float moneyDeposit(float balance) {
    float deposit;
    printf("You choose to Deposit a money\n");
    printf("your money is there in account$%.2f\n\n", balance);
    printf("Enter your amount to Deposit\n");
    scanf("%f", &deposit);


    balance = balance+ deposit;

    printf("\n****Your New Balance is:   $%.2f\n\n", balance);
    return balance;

}/
