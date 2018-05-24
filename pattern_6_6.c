#include<stdio.h>
int main()
{ 
int a=1;
for (int i=1;i<=20;i++)
	{
	for(int j=1;j<=20-i;j++)
		{
		printf(" ");
		}
	for(int k=1;k<=i;k++)
		{
		printf("%d",a%10);
		a++;
		}
		a--;
	for(int l=1;l<i;l++)
		{
		a=a-1;
		printf("%d",a%10);
		}
	a++;
	printf("\n");
	}
return 0;
}
