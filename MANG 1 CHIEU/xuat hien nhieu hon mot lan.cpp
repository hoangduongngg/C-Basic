#include <stdio.h>
#include <stdbool.h>

bool check(int a[], int n, int X) {
	for (int i=0; i<n; i++)
		if (a[i]==X) return 0;	//da xuat hien
	return 1;
}
void Solve(int a[], int n) {
	int b[n+5], k=0;
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if (a[i]==a[j] && (check(b,k,a[i])) ) {
				b[k]=a[i];
				k++;
			}
		
	for (int i=0; i<k; i++) printf("%d ", b[i]);
	printf("\n");
}

int main () {
	int n; scanf ("%d", &n);
	int a[n+5];
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
		
	Solve(a,n);
	return 0;
}

