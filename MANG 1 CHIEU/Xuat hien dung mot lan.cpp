#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	int a[n+5], b[n+5], dem[100]={0};
	int k=0;
	
	for (int i=0; i<n; i++) {
		scanf("%d", &a[i]);
		if (dem[a[i]]==0) {
			b[k]=a[i];
			k++;
		}
		dem[a[i]]++;
	}
	
	int res=0;		//so cac so xh 1 lan
	for (int i=0; i<k; i++)
		if (dem[b[i]]==1)
			res++;
	
	printf("%d\n", res);
	for (int i=0; i<k; i++)
		if (dem[b[i]]==1)
		printf ("%d ", b[i]);	
}
/*
7
1 5 10 10 5 2 3
*/
