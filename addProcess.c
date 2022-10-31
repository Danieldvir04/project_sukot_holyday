#include <stdlib.h>
#include <stdio.h>
#include "typesStructs.h"
#include "oneSnapShot.h"
//#include "typesFilesHeader.h"
//#include "resetCollectionsFile.h"
//#include "structHeaderFunction.h"
//#include "SnapShotList.h"
//#include "dictionaryFunctions.h"
//#include "logFile.h"
#pragma warning(disable:4996)
snapshot* newSnapShot;
PROCESS* newProcess;
PROCESS* PROCESS_Head = NULL;
PROCESS* PROCESS_Tail = NULL;

int countP = 0;

//get process and links it to a process linked list
void addProcess(PROCESS* processNew) {




	//each process has a new list
	//reset the DLLName_Head 
	addDLL(NULL);

	//if the function (addProcess) gets NULL it will reset the PROCESS_Head 
	if (processNew == NULL) {

		//resetting the process count
		countP = 0;
		PROCESS_Head = NULL;


		return;
	}

	
	++countP;

	//creates a new place in memory
	newProcess = (PROCESS*)malloc(sizeof(PROCESS));
	if (!newProcess) {

		//error - No memory allocation
		exit(1);
	}


	//add the all information from new process into the new space
	strcpy(newProcess->nameOfProcess, processNew->nameOfProcess);
	newProcess->PageFaultCount = processNew->PageFaultCount;
	newProcess->WorkingSetSize = processNew->WorkingSetSize;
	newProcess->QuotaPeakPagedPoolUsage = processNew->QuotaPeakPagedPoolUsage;
	newProcess->QuotaPagedPoolUsage = processNew->QuotaPagedPoolUsage;
	newProcess->PagefileUsage = processNew->PagefileUsage;
	newProcess->processId = processNew->processId;
	newProcess->numbersOfDLL = processNew->numbersOfDLL;

	//add the process number into the new space
	newProcess->countProcess = countP;

	//Enter only if it does not download from a file

	newProcess->next = NULL;

	//links the new process to the linked list
	if (PROCESS_Head == NULL) {


		PROCESS_Head = newProcess;
		PROCESS_Tail = newProcess;
		newProcess->prev = NULL;
	}
	else {

		PROCESS_Tail->next = newProcess;
		newProcess->prev = PROCESS_Tail;
		PROCESS_Tail = newProcess;
	}

	// creates a header struct for processes


}
// creates a header struct
