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
	printf("%d ", a[0]);
	for (int i=1; i<n; i++)
		if (a[i]!=a[0]) {
			printf("%d", a[i]);
			break;
		}
	return 0;
}

