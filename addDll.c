#include <stdlib.h> 
#include <stdio.h>
#include "typesStructs.h"

#include "oneSnapShot.h"

#pragma warning(disable:4996)

//resets the head and tail of dll
DLLName* DLLName_Head = NULL;
DLLName* DLLName_Tail = NULL;

int countOfDll = 0;

//adds a dll to the linked list
//gets a dll name
void addDLL(char dllName[])
{
	// The function has started

	//count the dll, every time a new dll enter to function it is increases by one
	++countOfDll;

	//if the function (addDLL) gets NULL it will reset the DLLName_Head 
	if (dllName == NULL)
	{
		//resetting the dll count
		countOfDll = 0;
		DLLName_Head = NULL;
		return;
	}

	//creates a new place in memory
	DLLName* newDLL = (DLLName*)malloc(sizeof(DLLName));
	if (!newDLL)
	{
		//error - No memory allocation
		exit(1);
	}

	//add the dll number into the new space
	newDLL->countDLL = countOfDll;

	//add the dll name into the new space
	strcpy(newDLL->nameOfDLL, dllName);

	//resetting the next because there is none
	newDLL->next = NULL;

	//entered only when the first dll is created
	if (DLLName_Head == NULL)
	{
		//save the first dll in DLLName_Head
		DLLName_Head = newDLL;

		//the tail always points to the last dll
		DLLName_Tail = newDLL;

		//There is nothing in front of newDLL because it the first
		newDLL->prev = NULL;
	}
	else
	{
		//connecting the old dll to the new dll
		DLLName_Tail->next = newDLL;

		//connecting the new dll to the old dll
		newDLL->prev = DLLName_Tail;

		//makes the tail be the new dll
		DLLName_Tail = newDLL;

	}

	// creates a header struct for dll

}




