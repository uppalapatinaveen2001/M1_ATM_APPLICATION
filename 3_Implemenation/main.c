include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include"atm.h"

//Functions
int mainMenu(void);
float checkBal(float balance);
float moneyDepo(float balance);
float moneyWith(float balance);
int menuExit(void);
int errorMessage(void);


//Main Code
int main() 
{
    //Local Declarations
    int option;
    float balance = 10000.00;
    int choose;

    bool again = true;

    while (again) {
    mainMenu();

    printf("naveens atm machine\n");
    printf("Your Selection:\t");
    scanf("%d", &option);


        switch (option) {
            case 1:
            	system("CLS");
                checkBal(balance);
                break;
            case 2:
            	system("CLS");
                balance = moneyDepo(balance);
                break;
            case 3:
            	system("CLS");
                balance = moneyWith(balance);
                break;

            case 4:
            	system("CLS");
                menuExit();
                return 0;

            default:
                errorMessage();
                break;
        }

        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("Would you like to do another transaction:\n");
        printf("&lt; 1 > Yes\n");
        printf("&lt; 2 > No\n");
        scanf("%d", &choose);

        system("CLS");



        if (choose == 2) {
            again = false;
            menuExit();

        }
      //int  testing =  test_bank_application();

}


    return 0;
}/
