#include <stdio.h>

void Chan_Le (int a[], int n) {
	int c[n+5], l[n+5];
	int j=0, k=0;
	for (int i=0; i<n; i++)
		if (a[i]%2==0) {
			c[j]=a[i];
			j++;
		}
		else {
			l[k]=a[i];
			k++;
		}
		
	for (int i=0; i<j; i++) printf ("%d ",c[i]);
	printf ("\n");
	for (int i=0; i<k; i++) printf ("%d ",l[i]);
	
}

int main() {
	int n; scanf("%d", &n);
	int a[n+5];
	for (int i=0; i<n; i++) 
		scanf("%d", &a[i]);
		
	Chan_Le(a,n);
	return 0;
}


