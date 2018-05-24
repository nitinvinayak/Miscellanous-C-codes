#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int i,n,seed;
seed=time(NULL);
srand(seed);
for(i=0;i<=10;i++)
	{
	printf("%d\n",20+(rand()%100)/5);
	}
return 0;
}
