
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void SellTickets(int agentID, int numTicketsToSell)
{
	while(numTicketsToSell > 0) {
		printf("Agent %d sell a ticket.\n",agentID);
		numTicketsToSell--;
	}
	printf("Agent %d:All donw!\n",agentID);
}

int main()
{
	int numAgents = 10;
	int numTickets = 150;
//	for(int agent=1; agent <= numAgents; agent++)
//	{
//		SellTickets(agent, numTickets/numAgents);
//	}
	InitThreadPackage(false);
	for(int agent=1; agent <= numAgents; agent++)
	{
		char name[32];
		sprintf(name,"Agent %d Thread",agent);
		ThreadNew(name,&SellTickets,2,agent, numTickets/numAgents);
		if(RandomChance(0.1))
			ThreadSleep(1000);
	}
	RunAllThreads();

	return 0;
}
