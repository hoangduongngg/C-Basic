#include <stdio.h>
int main() {
	int t; scanf("%d", &t);
	int t1=1;
	while (t--) {
		int n; scanf("%d", &n);
		int a[n+5], b[n+5], dem[10000]={0};
		int k=0;
		
		for (int i=0; i<n; i++) {
			scanf("%d", &a[i]);
			if (dem[a[i]]==0) {
				b[k]=a[i];
				k++;
			}
			dem[a[i]]++;
		}
		printf("Test %d:\n", t1); t1++;
		for (int i=0; i<k; i++)
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
