#include<stdio.h>
#include "atm.h"
#define PROJECT_NAME   "ATM"


void test_mainMenu(void);
void test_checkBalance(void);
//void test_moneyDeposit(void);
//float moneyWithdraw(float balance);
void test_menuExit(void);
void test_errorMessage(void);


void setUp(){}

void tearDown(){}


int main()
{

  UNITY_BEGIN();


  RUN_TEST(test_mainMenu);
  RUN_TEST(test_checkBalance);
  
  RUN_TEST(test_menuExit);
  RUN_TEST(test_errorMessage);

  
  return UNITY_END();
}


void test_mainMenu(void) {
  TEST_ASSERT_EQUAL(6,mainMenu());

  
}
void test_checkBalance(void) {
  TEST_ASSERT_EQUAL(15000.00,checkBalance(15000.00));
 
}
void test_menuExit(void) {
  TEST_ASSERT_EQUAL(5,menuExit());
 
}
void test_errorMessage(void) {
  TEST_ASSERT_EQUAL(9,errorMessage());
 
}
