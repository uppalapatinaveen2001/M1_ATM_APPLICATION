#ifndef __ATM_H__
#define __ATM_H__

int mainMenu(void);
float checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
int menuExit(void);
int errorMessage(void);

#endif