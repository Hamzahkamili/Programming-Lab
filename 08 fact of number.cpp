//8 fact of number
#include <stdio.h>
int main()
{
int i,n,j;
int flag=1;
scanf("%d",&n);
for(i=1;i<=n;i++){
	flag=flag*i;
}
printf("%d",flag);
}
