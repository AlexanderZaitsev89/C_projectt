
#include "functions.h"




int main(void){

	int selection;
	Picture album;


	selection = print_menu();
	do {

		//selection = print_menu();
		switch(selection) {
		case 1:
			initializaiton();
			selection = print_menu();
			break;
		case 2:
			savePictureRecords();
			selection = print_menu();
			break;
		case 3:
			printPictureRecords();
			selection = print_menu();
			break;
		case 4:
			removePicture();
			selection = print_menu();
			break;
		case 5:
			printReport();
			selection = print_menu();
			break;
		case 6:
			printReport2();
			selection = print_menu();
			break;
		case 7:
			break;
		default:
			printf("Invalid input.Please enter integer 1-7 \n");
			selection = print_menu();
			break;

		}
	} while(selection != 7);
	return 0;
}

