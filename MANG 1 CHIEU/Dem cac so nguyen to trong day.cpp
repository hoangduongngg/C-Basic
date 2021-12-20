#include <stdio.h>
#include <stdbool.h>
bool SNT(int n) {
	if (n==2) return 1;
	if (n<2 || n%2==0) return 0;
	for (int i=3; i*i<=n; i+=2)
		if (n%i==0) return 0;
	return 1;
}

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
	int t; scanf("%d", &t);
	int t1=1;
	while (t--) {
		int n; scanf("%d", &n);
		int a[n+5], b[n+5], dem[100000]={0};
		int k=0;
		
		for (int i=0; i<n; i++) {
			scanf("%d", &a[i]);
			if (dem[a[i]]==0) {
				b[k]=a[i];
				k++;
			}
			dem[a[i]]++;
		}
		
		Sort(b,k);
		
		printf("Test %d:\n", t1); t1++;
		for (int i=0; i<k; i++)
			if (SNT(b[i]))
				printf ("%d xuat hien %d lan\n", b[i], dem[b[i]]);
			
		printf("\n");
	}	
	return 0;
}
/*
1
10
1 7 2 8 3 3 2 1 3 2
*/
