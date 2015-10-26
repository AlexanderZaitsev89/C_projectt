#include "functions.h"
/*
print a report which lists all pictures and marks the pictures that contain just scenery with a star
(number of persons is zero)
*/

void printReport2(void){
	Picture onePicture[N];
	int count,i=0,check=0,findNumber=0;
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