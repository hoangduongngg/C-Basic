#include <stdio.h>
void SortUp(int a[], int n) {
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if (a[i]>a[j]) {
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}		
}

void SortDown(int a[], int n) {
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if (a[i]<a[j]) {
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}		
}

int main() {
	int t; scanf("%d", &t);
	int k=1;
	while (t--) {
		int n; scanf("%d", &n);
		int a[n+5], b[n+5], ab[n*2+5];
		for (int i=0; i<n; i++)
			scanf("%d", &a[i]);
		for (int i=0; i<n; i++)
			scanf("%d", &b[i]);
			
		SortUp (a,n);
		SortDown (b,n);
		
		for (int i=0; i<n; i++) {
			ab[i*2]=a[i];
			ab[i*2+1]=b[i];
		}
		
		printf ("Test %d:\n",k); k++;
		for (int i=0; i<2*n; i++)
			printf ("%d ", ab[i]);	
		printf("\n");
	}
	return 0;
}
