#include "functions.h"
// function for saving picture info to the disk in binary format. Saves one picture at a time

void savePictureRecords(void){
	Picture onePicture;
	char input[10];
	int inputInt,b;

	FILE *my_file;
	my_file = fopen("AlbumPictures.dat", "ab");

	if(my_file == NULL) {
		printf("Error!\n");

	}

	else{
		printf("Enter name of the picture:");
		fgets(onePicture.name,25,stdin);                  
		if(onePicture.name[strlen(onePicture.name)-1] == '\n') {     // fgets stores the newline in the string-  "\n"
			onePicture.name[strlen(onePicture.name)-1] = '\0';       //
		}

		printf("Enter description of the picture:");
		fgets(onePicture.description,25,stdin);
		if(onePicture.description[strlen(onePicture.description)-1] == '\n') {
			onePicture.description[strlen(onePicture.description)-1] = '\0';
		}

		printf("Enter location where the picture was made:");
		fgets(onePicture.location,25,stdin);
		if(onePicture.location[strlen(onePicture.location)-1] == '\n') {
			onePicture.location[strlen(onePicture.location)-1] = '\0';
		}

		do{
		printf("Enter the nummbers of persons in the picture:");
		fgets(input,10,stdin);

		//inputInt=atoi(input); //atoi returns 0 if the input is not a valid intege
		b=sscanf (input,"%d",&inputInt);
		//printf("%d\n",b);
		//printf("%d\n",inputInt);
		if(b<0 || inputInt<0){
			printf("Invalid input.Please enter positive integer  \n");
		}
		}while(b<0 || inputInt<0);
		onePicture.numberOfPersons=inputInt;

		fwrite(&onePicture,1,sizeof(Picture),my_file);
	}

	fclose(my_file);
}

//void printFunction(char *promt,Picture *ptr ){
//
//	printf("%s",promt);
//
//	fgets(onePicture.description,25,stdin);
//
//	if(onePicture.description[strlen(onePicture.description)-1] == '\n') {
//		onePicture.description[strlen(onePicture.description)-1] = '\0';
//	}
//}



