#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	float x1,x2;
	printf("Enter the values of a b c: ");
	scanf("%d %d %d",&a,&b,&c);
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("Roots of the equation are %f %f\n",x1,x2);
	return 0;
}
