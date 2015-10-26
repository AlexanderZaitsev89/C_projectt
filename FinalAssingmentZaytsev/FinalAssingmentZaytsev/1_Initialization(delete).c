#include "functions.h"

//Function that delets all info from the file
void initializaiton(void){

	FILE *my_file;
	my_file = fopen("AlbumPictures.dat", "wb");

	if(my_file == NULL) {
		printf("Error!\n");
	}
	printf("All information from the drive has been removed\n");
}