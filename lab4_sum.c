#include <stdio.h>
int main()
{
int x=12;
float y=234.5678;
char ch='Y';
printf(	"%5d\n",x);
printf(	"%-5d\n",x);
printf(	"%-8.2f\n",y);
printf(	"%+8.2f\n",y);
printf(	"%+-8.2f\n",y);
printf(	"%c\n",ch);
return 0;
}

