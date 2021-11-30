// 19 sum of an array
#include <stdio.h>
int sum(int a[] , int n);
int main()
{
	int a[100];
	int n,i;
	int sum1;
	printf("size of an array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sum1=sum(a,n);
	printf("sum of an array %d ",sum1);
}

 int sum(int a[], int n){
	int i;
	
	int sum=0;
	for(i=0;i<n;i++){
		sum=sum+a[i];
		
	}
	return sum;
}
