#include<stdio.h>
#include <conio.h>
int DATA[20]={22,1,67,45,78,89,66,22,42,87};
int N=10;
int LINEAR(int);
main()
{
	int i,ITEM,LOC;
	printf("values contained in DATA[10]=");
	for(i=0;i<10;i++)
		printf("%d",DATA[i]);
	printf("enter the item to be searched=");
	scanf("%d", &ITEM);
	LOC==LINEAR;
	
	if(LOC==-1)
		printf("\n\n ITEM IS NOT PRESENT IN DATA[10]");
	else
		printf("\n\n THE LOCATION OF ITEM IN DATA [10] is=%d",LOC);
	getch();
	}
	int LINEAR(int I)
	{
		int L;
		DATA[N]=I;
		L=0;
		while(DATA[L]!=I)
			L=L+1;
		if(I==N)
		L=-1;
		return(L);
	}
