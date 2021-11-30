//5 print fib series
#include <stdio.h>
int main()
{
int b,c,i,n;
int a=1;
b=1;

scanf("%d",&n);
printf("%d ",a);
printf("%d ",b);
for(i=0;i<=n;i++){
	c=a+b;
	printf("%d ",c);
a=b;
b=c;
}

}
