#include<stdio.h>
#include<string.h>
#include<time.h>
#include "OneSnapShot.h"
#include "AcceptingProcess.h"
#include "typesStructs.h"

int main()
{
	time_t t;
	time(&t);
	struct tm* timeinfo;
	timeinfo = localtime(&t);
	char str[100];

	printf("Please type a number:\n 1 Take One SnapShot\n 2 Take 20 SnapShots\n 3 Start Long SnapShot\n 4 End Long SnapShot\n 5 Generate HTML Report\n 6 Reset Collections\n 7 Save in File\n 8 Load from File\n 9 Quit\n");

	// while usuer respons !=9
	int userResponse = 0;
	scanf("%d", &userResponse);
	switch (userResponse) {
	case 1://Take One SnapShot

		
		addOneSnapShot();
	

		break;

	case 2: //Take 20 SnapShots

		
		//addOneSnapShot(userResponse);
		

	case 3:
		//Start Long SnapShot
		break;

	case 4:
		//End Long SnapShot
		break;
	case 5:
		//Generate HTML Report
		break;
	case 6:
		//Reset Collections
		break;

	case 7:
		//Save in File 
		break;

	case 8:
		//Load from File
		break;
	case 9:
		//Quit 
		break;
	}
	return 0;
}