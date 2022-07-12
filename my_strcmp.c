#include <stdio.h>
#include <string.h>
int mystrlen(char *);
int mystrcmp(char *, char *);
int main(void)
{
char lex[20];
char str1[20];
char str2[20];
int x;
printf("dwse leksi\n");
scanf ("%s", lex);
printf("dwse 2 lekseis gia sygkrish.\n");
scanf ("%s %s", str1, str2);
printf("h leksi %s exei %d xarakthres\n", lex, mystrlen(lex));
x=mystrcmp(str1,str2);
printf("%d", mystrcmp(str1,str2));

 
}
 
int mystrlen(char *str)
{
	int i;
	for (i=0; str[i] != '\0'; i++)
			;
return i;
}

int mystrcmp(char *str1, char *str2)
{
	int res;
	res=strcmp(str1, str2);
	if(res==0)
		return 0;
	else
		return 1;
}
