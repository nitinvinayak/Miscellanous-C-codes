#include<stdio.h>
int main()
{
char inp;
int lines=0,chars=0,words=1;
inp=getchar();
while(inp!=EOF)
{
	switch (inp)
	{
		case '\n':
			lines+=1;
		case ' ':
			words+=1;
		default:
			chars+=1;
	}
	inp=getchar();
}
printf("%d %d %d\n",lines,words,chars);
return 0;
}
