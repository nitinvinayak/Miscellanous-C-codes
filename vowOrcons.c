#include<stdio.h>
int main()
{
int vow=0,cons=0;
char inp;
printf("Enter the character: ");
inp=getchar();

while((inp!='\n') && (inp!=' '))
{
	while ((inp<65) || (inp>122) || (inp>90 && inp<97))
	{
		inp=getchar();
	}
	switch (inp)
	{
	case 'a' :
	case 'A' :
	case 'e' :
	case 'E' :
	case 'i' :
	case 'I' :
	case 'o' :
	case 'O' :
	case 'u' :
	case 'U' :
	vow=vow+1;
	break;
	default:
	cons=cons+1;
	}	
	inp=getchar();
}
printf("vow=%d,cons=%d\n",vow,cons);
return 0;
}	
