#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	int a[n+5], b[n+5], dem[100]={0};
	int k=0;
	
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
		if (dem[a[i]]==0) {
			b[k]=a[i];
			k++;
		}
		dem[a[i]]++;
	}
	for (int i=0; i<k; i++)
		printf ("%d %d\n", b[i], dem[b[i]]);	
}
/*
7
2 3 3 2 1 9 5
*/
