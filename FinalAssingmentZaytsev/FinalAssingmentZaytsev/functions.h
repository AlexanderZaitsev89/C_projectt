#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 20      // size of the array to keep pictures
#define _CRT_SECURE_NO_WARNINGS

typedef struct pictureInfo {
	char name[25];
	char description[80];
	char location[25];
	int  numberOfPersons;
} Picture;




int print_menu(void);
void initializaiton(void);
void savePictureRecords(void);
void printPictureRecords(void);
void removePicture(void);
void printReport(void);
void printReport2(void);