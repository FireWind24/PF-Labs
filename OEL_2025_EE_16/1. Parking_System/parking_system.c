#include <stdio.h>

int main(){
int vehicles = 0, total_charge = 0;
int car = 100, bike = 50, truck = 200; //making charges reusable and updatable
while(1){
int choice, hours, charge=0;
printf("\t\t---- Parking System ----\n1. Car - Rs. 100/hr\n2. Bike - Rs. 50/hr\n3. Truck - Rs. 200/hr\n4. Exit\n\nEnter Vehicle Type: "); // printing menu
scanf("%d", &choice);
if (choice == 4) break; //exit program on choice 4
if (choice < 1 || choice > 4) {
printf("Invalid Choice! Please select a valid option.\n");
continue;}
printf("Enter parking hours: ");
scanf("%d", &hours);


switch (choice){	//evaluating other cases

case 1:
	charge += car*hours;
	break;
case 2:
	charge += bike*hours;
	break;
case 3:
	charge += truck*hours;
	break;
default:
	printf("Invalid Choice! \n");
	break;

}
printf("Total Charge: %d\nConfirm? (y/n): ", charge);
char confirm; scanf(" %c", &confirm);
if (confirm == 'y') {total_charge += charge;
printf("Vehicle Added Successfully!\n");
vehicles++;}
else if (confirm == 'n') ;

printf("Do you want to continue? (y/n): ");
scanf(" %c", &confirm);
if (confirm == 'y') continue;
else if (confirm == 'n') break;
}

printf("Total Vehicles Parked: %d\nTotal Revenue: %d\n", vehicles, total_charge);
}
