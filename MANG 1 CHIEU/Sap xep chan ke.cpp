#include <stdio.h>

void Sort(int a[], int n) {
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if (a[i]>a[j]) {
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
	for (int i=0; i<n; i++)
		printf ("%d ", a[i]);
}

int main() {
	int n; scanf("%d", &n);
	int a[n+5], c[n+5], l[n+5];
	int j=0, k=0;
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
		if (a[i]%2==0) {
			c[j]=a[i];
			j++;
		}
		else {
			l[k]=a[i];
			k++;
		}
	}
		
	Sort(c,j);
	Sort(l,k);
}


