typedef char String[256];
typedef struct{
	int priority;
	int time;
}Process;
typedef struct{
	Process *process;
	int noOfProcess;
	int sizeOfProcess;
}WaitList;
int scheduler(WaitList* processList);