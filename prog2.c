#include <stdio.h>
int main()
{
int n,i;
char word[100];
printf("Enter the word: ");
scanf("%s",word);
do{
	printf("Enter the key: ");
	scanf("%d",&n);
}
while(n/10!=0);
for(i=0;1;++i)
{
	if(word[i]==0)break;
	word[i]=word[i]+n;
	printf("%c",word[i]);
}
printf("\n");
return 0;
}
