#include <stdio.h>

void Sort(int a[], int n) {
	for (int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if (a[i]>a[j]) {
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
}

int main() {
	int n; scanf("%d", &n);
	int a[n+5];
	for (int i=0; i<n; i++) 
		scanf("%d", &a[i]);
		
	Sort(a,n);
	printf("%d ", a[n-1]);
	for (int i=n-2; i>=0; i--)
		if (a[i]!=a[n-1]) {
			printf("%d", a[i]);
			break;
		}
	return 0;
}

