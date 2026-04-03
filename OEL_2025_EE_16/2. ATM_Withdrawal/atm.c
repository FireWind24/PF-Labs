#include <stdio.h>

int main(){
char choice;
do {
int PIN, curr_bal, withdraw, rem_bal, daily_limit = 20000;
int notes_1000, notes_500, notes_100;
printf("\t\t=== ATM Cash Withdrawal ===\n");
printf("Enter 4-Digit PIN: ");
scanf("%d", &PIN);
if (PIN > 9999 || PIN < 1000){
printf("Invalid PIN; Try again!\n");
choice = 'y';
continue;}

printf("Enter current balance: ");
scanf("%d", &curr_bal);
printf("Enter amount to withdraw (multiple of 500) : ");
scanf("%d", &withdraw);
if (withdraw % 500 != 0){
printf("Invalid amount! Must be multiple of 500.\n");
}

else if (withdraw > curr_bal){
printf("Insufficient balance!\n");
}

else if (withdraw > daily_limit){
printf("Warning! Daily withdrawal limit exceeded.\n");
}
else {
curr_bal -= withdraw;

int notes = withdraw;
notes_1000 = notes / 1000;
notes %= 1000;
notes_500 = notes / 500;
notes %= 500;
notes_100 = notes / 100;
notes %= 100;

printf("\t\t---Withdrawal Summary---\n");
printf("1000 x %d\n500 x %d\n100 x %d\n", notes_1000, notes_500, notes_100);
printf("Remaining Balance: %d\n", curr_bal);}
printf("Do you want another transaction? (y/n) ");
scanf(" %c", &choice);
if (choice == 'n') {printf("Thank you for using ATM!\n");
}
}
while(choice == 'y');
}
