#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "thread_107.h"

void SellTickets(int agent, int *nonTicketsp, semaphore lock)
{
    while(true) {
        SemaphoreWait(lock);
        if(*nonTicketsp == 0) break;
        (*nonTicketsp)--;
        SemaphoreSignal(lock);
        printf("some signal\n");
        //sleep
    }
	SemaphoreSignal(lock);
}

char buffer[8];

void Writer()
{
	for(int i=0;i<40;i++) {
		char c =  PrepareRandomChar();
		buffer[i%8] = c;
	}
}

void Reader()
{
	for(int i=0;i<40;i++) {
		char c = buffer[i%8];
		ProccessChar(c);
	}
}

int main()
{
	ITP(false);
	ThreadNew("Writer",Writer,0);
	ThreadNew("Reader",Reader,0);
	RunAllThread();

	return EXIT_SUCCESS;
}
