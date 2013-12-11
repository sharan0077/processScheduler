#include "processSchedulerLib.h"
#include "../circular Queue/circularQueLib.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int scheduler(WaitList *processList){
	int i=0,queEmpty;
	cirQueue *processQueue = create(sizeof(processList->process),5);
	while(!processList->noOfProcess){
			queEmpty = enqueue(processQueue,processList->process+(i*processList->sizeOfProcess));
			if(queEmpty){
				if(processQueue->baseAddress->time>0)
					processQueue->baseAddress->time -= 10;
				else
					free(processQueue->baseAddress);
			}
		}
	return 0;
}