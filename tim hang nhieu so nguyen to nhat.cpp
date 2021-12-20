#include <stdio.h>
#include <stdbool.h>
#define MAX 50
bool SNT(int n) {
	if (n==2) return 1;
	if (n<2||n%2==0) return 0;
	for (int i=3; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;
}
int main() {
	int n; scanf("%d", &n);
	int a[MAX][MAX];
	int max=0; int k=1;		// k=hang co nhieu SNT
	for (int i=1; i<=n; i++) {
		int dem =0;
		for (int j=1; j<=n; j++) {
			scanf("%d", &a[i][j]);
			if (SNT(a[i][j])) dem++;
		}
		if (dem>max) {
			max=dem;
			k=i;
		}
	}
	
	printf("%d\n", k);
	for (int i=1; i<=n; i++)
		if (SNT(a[k][i])) printf("%d ", a[k][i]);
	printf("\n");
	return 0;
}
