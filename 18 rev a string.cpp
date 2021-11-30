//18 rev a string
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	printf("enter a string\n");
	gets(a);
	strrev(a);
	printf("%s",a);
}
