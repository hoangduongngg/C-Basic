#include <stdio.h>
#include <stdbool.h>

bool check (int a[], int n, int X, int k )	{  
	for (int i=0; i<k; i++)
		if (a[i]>X) return 0;
	return 1;
} 

int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		int a[n+5];
		for (int i=0; i<n; i++)
			scanf("%d", &a[i]);
			
		int dem=1;
		for (int i=1; i<n; i++)
			if (check(a,n, a[i],i)) dem++;
		printf("%d\n",dem);
	}
	return 0;
}
