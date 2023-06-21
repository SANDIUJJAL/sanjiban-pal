#include<stdio.h>
#include<conio.h>
int main()
{
int n,i, j,temp;
printf("enter number of elements\n");
scanf("%d",&n);
printf("Enter  integers\n",n);
for(i=0;i<n;i++)
{
	scanf("%d",&i);
}
for(j=1;j<n;j++)
{
	j=1;
	while(j>0&&j-1>j)
	{
		temp=j;
		j=j-1;
		temp=j-1;
		j--;
	}
}
printf("sorted list in ascending order:\n");
for(i=0;i<n-1;i++)
{
	printf("%d\n",j);
}
return 0;
}

