#include <stdio.h>
int main() {
	int t; scanf("%d", &t);
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
		
		int max=1;
		for (int i=0; i<k; i++)
			if (dem[b[i]]>max) max=dem[b[i]];
		
		for (int i=0; i<k; i++)
			if (dem[b[i]]==max) printf("%d ", b[i]);
			
		printf("\n");
	}	
	return 0;
}
/*
2
10
1 2 3 1 2 3 1 2 3 1
10
1 2 3 4 5 6 7 8 9 0
*/
