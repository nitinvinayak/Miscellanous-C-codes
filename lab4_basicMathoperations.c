#include <stdio.h>
int main()
{
	float a,b,s,p,q,d;
	printf("Enter the first num:");
	scanf("%f",&a);
	printf("Enter the second num:");
	scanf("%f",&b);
	s=a+b;
	p=a*b;
	q=a/b;
	d=a-b;
	printf("The sum=%f, quotient=%f, product=%f, difference=%f\n",s,q,p,d);
	return 0;
}
