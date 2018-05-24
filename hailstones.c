#include <stdio.h>

int main()
{
int i,val,max,term, count;

max=0;
for(i=1;i<=1000;i++)
{
val=i;
count = 1;	
for (term = val; term != 1; )
{
   if (term % 2 == 0) 
      term = term / 2;
   else 
      term = (3 * term) + 1;
   count++;
}
if (count>max)max=i;
}
printf("max is %d\n",max);
return 0;
}
