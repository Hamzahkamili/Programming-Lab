//20 fac using recur.
#include <stdio.h>
int rec(int);
int main(){
	int n;
	scanf("%d",&n);

	printf("factorial is %d ",	rec(n));
}
int rec(int n){
	if(n==1)
	return 1;
	if(n==0)
	return 1;
	if (n!=1)
	return n*rec(n-1);
}
