#include <stdio.h>
#define MAX 100

int main() {
	int m,n; scanf("%d%d",&m, &n);
	int A[MAX][MAX];
	
	for (int i=1; i<=m; i++) 
		for (int j=1; j<=n; j++)
			scanf("%d", &A[i][j]);
	int a,b; scanf("%d%d",&a, &b);
	
	int temp[n+1];
	for (int i=1; i<=n; i++)	temp[i]=A[a][i];
	for (int i=1; i<=n; i++)	A[a][i]=A[b][i];
	for (int i=1; i<=n; i++)	A[b][i]=temp[i];
	
	for (int i=1; i<=m; i++) {
		for (int j=1; j<=n; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
	return 0;
}
