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
		printf ("%d ", b[i]);	
}
/*
7
1 5 10 10 5 2 3
*/
//Loai bo trung nhau
