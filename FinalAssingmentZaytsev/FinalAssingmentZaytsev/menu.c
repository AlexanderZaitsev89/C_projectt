#include "functions.h"



//menu function
int print_menu(void)
{
	char input[40];
	int selection;
	do{
		printf("Programm for saving pictures info.Selection operations:\n");
		printf("\t1) Initialize(clear all records)\n");
		printf("\t2) Add pictutres to disk\n");
		printf("\t3) Read picture records \n");
		printf("\t4) Remove a picture\n");
		printf("\t5) Print report(user specified number of persons)\n");
		printf("\t6) Print report(number of persons is zero)\n");
		printf("\t7) Exit program\n");
		//scanf("%d", &selection);
		fgets(input,40,stdin);
		selection=atoi(input); //atoi returns 0 if the input is not a valid intege
		if(selection==0){
			printf("Invalid input.Please enter integer 1-7 \n");
		}
	}while(selection==0);


	return selection;
}