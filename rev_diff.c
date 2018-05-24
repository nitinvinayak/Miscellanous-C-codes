#include <stdio.h>
#include <math.h>
int main()
{
int num,rev=0,size=0,temp;
printf("Enter the number: ");
scanf("%d",&num);
temp=num;
while (temp>0)
{
	temp=temp/10;
	size+=1;
}
temp=num;
for (int i=size-1;i>=0;i--)
{
	rev=rev+(temp%10)*pow(10,i);
	temp/=10;
}
printf("Diff of %d and %d is:%d\n",num,rev,num-rev);
return 0;
}
