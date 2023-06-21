#include<stdio.h>
#include<conio.h>
int DATA[10]={25,22,45,44,74,88,98,99,81,77};
int N=10;
int LB=0;
int UB=9;
int BINARY(int);

 main()
{
	int i,ITEM,LOC;
	printf("values contained in DATA[10]=");
	for(i=0;i<10;i++)
		printf("%d",DATA[i]);
	printf("\n\n\n enter the ITEM TO BE SEARCHED=");
	scanf("%d",&ITEM);
	
	LOC=BINARY(ITEM);
	
	if(LOC==-1)
		printf("\n\n ITEM IS NOT PRESENT IN DATA[10]");
	else
		printf("\n\n THE LOCATION OF ITEM IN DATA[10] is=%d,LOC");
	getch();
	}
	int BINARY(int I)
	{
		int L,BEG,END,MID;
		BEG=LB;
		END=UB;
		MID=(BEG+END)/2;
		while(BEG<=END && DATA[MID]!=I)
		{
			if(I<DATA[MID])
				END=MID-1;
			else
				BEG=MID+1;
			MID=(BEG+END)/2;
		}
		if(DATA[MID]==I)
			L=MID;
		else
			I=-1;
		return(L);
	}
