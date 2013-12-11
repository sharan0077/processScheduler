#include "testUtils.h"
#include "processSchedulerLib.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../circular Queue/circularQueLib.h"
//create setup, tearDown, fixtureSetup, fixtureTearDown methods if needed

void test_fail(){
	ASSERT(0);
}
WaitList *pList;
void test_scheduler_should_accept_processList_and_process_based_on_priority(){
	int result;
	Process p1 = {1,10};
	Process p2 = {2,20};
	Process p3 = {3,22};
	pList = malloc(sizeof(WaitList));
	
	result = scheduler(pList);
	ASSERT(result);
}