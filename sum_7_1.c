#include <stdio.h>
#include <math.h>
int main()
{
int N;
float sum=0;
printf("Enter the value of N: ");
scanf("%d",&N);
for (int i=0;i<=N;i++)
{
	sum+=pow(0.5,i);
}
printf("Sum is %f\n",sum);
return 0;
}
