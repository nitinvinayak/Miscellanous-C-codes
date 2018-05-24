#include <stdio.h>
int main()
{
int N,X,f=0,i;
printf("Enter the value of N: ");
scanf("%d",&N);
int arr[N];
for (i=0;i<N;++i)
{
	scanf("%d",&arr[i]);
}

scanf("%d",&N);
printf("Enter the value of X: ");
i=0;
while(i!=N)
{
	if (arr[i]==X)f+=1;
	i++;
}

printf("The number of occurences of %d is %d\n",X,f);
return 0;
}
	
