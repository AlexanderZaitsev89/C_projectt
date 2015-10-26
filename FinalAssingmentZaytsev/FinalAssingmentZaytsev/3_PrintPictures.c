#include "functions.h"
/*
Function for printing all the records that are in the file "AlbumPictures.dat"
*/

void printPictureRecords(void){
	Picture onePicture[N];
	int count,i;
	char print1[]="Picnum  ";
	char print2[]="Name  ";
	char print3[]="Description ";
	char print4[]="Location ";


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
	if(count==0){              // for checking that the file is not empty
		printf("File is empty\n");
	}
	else{
		printf("  -------------------------------------------------------------------\n");
		printf(" |%s|%-13.10s|%-13.11s|%-13.10s|NumberOfPersons|\n",print1,print2,print3,print4);
		printf("  -------------------------------------------------------------------\n");
		for(i=0;i<count;i++){		
			printf(" |   %-5d|%-13.10s|%-13.10s|%-13.10s|  %-13d|\n",i+1,onePicture[i].name,onePicture[i].description,onePicture[i].location,onePicture[i].numberOfPersons);
			//printf("Picture number: %d\n",i+1);
			//printf("Name of the picture is: %s \n",onePicture[i].name);
			//printf("Descriprion of the picture is : %s\n",onePicture[i].description);
			//printf("Location where the picture was made : %s\n",onePicture[i].location);
			//printf("Number of people in the picture: %d\n",onePicture[i].numberOfPersons);
		}
		printf("  -------------------------------------------------------------------\n");
	}
}