#include <stdio.h>

void Dich_Phai (int a[], int n, int k) {
	for (int i=n-k; i<n; i++) printf ("%d ",a[i]);
	for (int i=0; i<n-k; i++) printf ("%d ",a[i]);
}

int main() {
	int n; scanf("%d", &n);
	int a[n+5];
	for (int i=0; i<n; i++) 
		scanf("%d", &a[i]);
	int k; scanf("%d", &k);
	
	Dich_Phai(a,n,k);
	return 0;
}


