#include <stdio.h>
int main()
{
int height,width;
printf("Enter the height and width : ");
scanf("%d",&height);
scanf("%d",&width);
for(int i=1;i<=height;i++)
	{
	for (int j=1;j<=width;j++)
		{
		if ((i%2==0) && (j%2==0))
			printf("1");
		else
			printf("0");
		}
	printf("\n");
	}
return 0;
}
