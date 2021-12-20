#include <stdio.h>

void SXTT(int a[], int n) {		//sap xep truc tiep
	for (int i=0; i<n-1; i++) {
		int min=i;
		for (int j=i+1; j<n; j++)
			if (a[min]>a[j]) {
				min=j;
				//swap:
				
			}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
			
		printf("Buoc %d: ", i+1);	
		for (int i=0; i<n; i++)
			printf ("%d ", a[i]);
		printf("\n");	
	}
}

int main() {
	int n; scanf("%d", &n);
	int a[n+5];
	for (int i=0; i<n; i++)
		scanf("%d", &a[i]);
		
	SXTT(a,n);
	return 0;
}
