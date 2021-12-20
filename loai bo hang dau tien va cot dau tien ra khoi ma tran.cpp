#include <stdio.h>
int main() {
	int t; scanf("%d", &t);
	int dem=0;
	while (t--) {
		
		int n,m; scanf("%d %d", &n, &m);
		int a[20][20];
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++)
				scanf("%d", &a[i][j]);
				
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++)
				a[i][j]=a[i+1][j];
		n--;					
		for (int i=0; i<n; i++)
			for (int j=0; j<m; j++)
				a[i][j]=a[i][j+1];
		m--;
		
		dem++;
		printf("Test %d:\n", dem);
		for (int i=0; i<n; i++) {
			for (int j=0; j<m; j++)
				printf("%d ", a[i][j]);
		printf ("\n");
		}
	}
	return 0;
}
