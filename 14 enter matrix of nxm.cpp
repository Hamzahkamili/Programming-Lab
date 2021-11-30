//14 enter matrix of mxn order
#include <stdio.h>
int main()
{
	int i,j,n,k;
	int a[100][100];
	printf("enter size of rows of a matrix");
	scanf("%d",&n);
	printf("enter size of coloum of a matrix");
	scanf("%d",&k);
	for(i=1;i<=n;i++){
		for(j=1;j<=k;j++){
			scanf("%d",&a[i][j]);
		}
	}
		for(i=1;i<=n;i++){
		for(j=1;j<=k;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
