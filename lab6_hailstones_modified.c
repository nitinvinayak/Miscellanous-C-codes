#include <stdio.h>
int printHailstones(int);
int printLimitHailstones(int);

int main()
{
int val, term, count,a,b;

printf("Enter a +ve integer to generate the hailstone sequence: ");
scanf("%d",&val);
while (val <= 0) 
{
   printf("Hailstone sequences only for +ve numbers.\nEnter a valid input :");
   scanf("%d",&val);
}
printf("Enter the value for a : ");
scanf("%d",&a);
printf("Enter the value of b : ");
scanf("%d",&b);
count = 1;	
printf("%d\n", val);
for (term = val; term != 1; )
{
   if (term % 2 == 0) 
      term = term / 2;
   if (term%2==1)
      term = (3 * term) + 1;
   if ((term>=a)&&(term<b))
  { printf("%d\n",term);
	printf("Term %d is in the range[%d,%d)",term,a,b);
   count++;
	break;}
   printf("%d\n",term);
   count++;
} 

printf("Number of terms = %d\n",count);
return 0;
}
