//17 length of a string
#include <stdio.h>
int main(){
	char a[100];
	int i=0,flag=0;
	printf("enter string\n");
	gets(a);
	while(a[i]!='\0'){
		i++;
		flag++;
	}
	printf("the lenth of string is %d ",flag);
}
