#include "functions.h"
/*
Function for removing a picture from the album


*/

void removePicture(void){
	Picture onePicture[N];
	int count,i=0,remove;
	char input[25];
	char *ptr;

	//	At first programm reads info from the disk and the it saves it to a temporary array of structures onePicture[N].
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

	// Then asks from the user the number of picture he wants to delete.
	do{
		printf("Enter number of the picture that you would like to remove:");
		fgets(input,25,stdin);
		remove=atoi(input); //atoi returns 0 if the input is not a valid intege
		if(remove==0 || remove<0 ){
			printf("Invalid input.Please enter positive integer  \n");
		}
	}while( remove==0 || remove<0 );

	if(remove>0 && remove<count){   // check of the input
		for(i=remove;i<=count;i++){  // loop that starts from the element (remove+1) and changes the pointer of that element to the next element
			onePicture[i-1]=onePicture[i]; //
		} 
		printf("Picture %d\n",remove+1);
	}
	else{
		printf("No such file \n");
	}

	my_file = fopen("AlbumPictures.dat", "wb");
	if(my_file == NULL) {
		printf("Error!\n");

	}
	else{
		fwrite(onePicture,(count-1),sizeof(Picture),my_file);
	}
	fclose(my_file);
}




