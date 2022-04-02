#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include"atm.h"

float moneyDepo(float balance) {
    float depo;
    printf("You choose to Deposit a money\n");
    printf("your money is there in account$%.2f\n\n", balance);
    printf("Enter your amount to Deposit\n");
    scanf("%f", &depo);


    balance = balance+ depo;

    printf("\nNI BALANCE IS   $%.2f\n\n", balance);
    return balance;

}/
