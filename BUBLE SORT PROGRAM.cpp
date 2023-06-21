#include<stdio.h>
#include<conio.h>
int DATA[10]={22,45,77,89,67,56,34,23,12,13,};
int N=10;
int main()
{
	int i;
	printf("values contained in DATA[10]=");
	for(i=0;i<10;i++)
		printf("%d",DATA[i]);
}
void BUBBLE()
{
 int i, k,PTR,TEMP;
 	for(i=0;i<10;i++)
		for(k=0;k<=(N-1-1);k++)
			{
				PTR=0;
				while(PTR<=(N-k-1-1))
				{
					if(DATA[PTR]>DATA[PTR+1])
					{
						TEMP=DATA[PTR];
						DATA[PTR]=DATA[PTR+1];
						DATA[PTR+1]=TEMP;
					}
				PTR=PTR+1;
				}
				printf("\n\n enter the array after sorting DATA[10]=");
			}
}
