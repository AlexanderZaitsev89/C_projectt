#include "functions.h"
/*
Print a report which lists pictures that have at least at least the user specified number of persons
in the picture
*/

void printReport(void){
	Picture onePicture[N];
	int count,i=0,check=0,findNumber;
	char input[25];
	char *ptr;

	FILE *my_file;
	my_file = fopen("AlbumPictures.dat", "rb");

	if(my_file == NULL) {
		printf("Error!\n");

	}
	else{
		// variable "count" will calculate the number of elements that were read from the file
		count=fread(onePicture,sizeof(Picture),N,my_file);
	}
	fclose(my_file);
	do{
	printf("Enter number of people: ");

		fgets(input,25,stdin);
		findNumber=atoi(input); //atoi returns 0 if the input is not a valid intege
		if(findNumber==0 || findNumber<0){
			printf("Invalid input.Please enter positive integer \n");
		}
	}while(findNumber==0 || findNumber<0);


printf("Pictures that contain %d number of persons\n",findNumber);
	for(i=0;i<count;i++){
		if(findNumber==onePicture[i].numberOfPersons){
			
			printf("Picture N : %i\n",i+1);
			check++;
		}
	}
	if(check==0){
		printf("No fiile found\n");
	}



}

