#include <stdio.h>

int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		long long a[n+5], b[n+5], dem[10000]={0};
		int k=0;
		
		for (int i=0; i<n; i++) {
			scanf("%d", &a[i]);
			if (dem[a[i]]==0) {
				b[k]=a[i];
				k++;
			}
			dem[a[i]]++;
		}
		if (k==n) printf ("NO\n");
		for (int i=0; i<k; i++)
			if(dem[a[i]]>1) {
				printf ("%d\n", b[i]);
				break;
			}
		}

}
/*
2
7
10 5 3 4 3 5 6
4
1 2 3 4
*/
