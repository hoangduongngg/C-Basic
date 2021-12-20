#include <stdio.h>
#define MAX 100

int main() {
	int m,n; scanf("%d%d",&m, &n);
	int A[MAX][MAX];
	
	for (int i=1; i<=m; i++) 
		for (int j=1; j<=n; j++)
			scanf("%d", &A[i][j]);
	int a,b; scanf("%d%d",&a, &b);
	
	int temp[m+1];
	for (int i=1; i<=m; i++)	temp[i]=A[i][a];
	for (int i=1; i<=m; i++)	A[i][a]=A[i][b];
	for (int i=1; i<=m; i++)	A[i][b]=temp[i];
	
	for (int i=1; i<=m; i++) {
		for (int j=1; j<=n; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
	return 0;
}
