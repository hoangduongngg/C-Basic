#include <stdio.h>

long long findmin (long long a[], int n) {
	long long min;
	min=a[0];
	int i=1;
	while (i<n) { // for(int i=0; i<n; ++i)
		if (a[i] < min)
			min=a[i];
		++i;
	}
		
	return min;
}

int main () {
	int t, n, i;
	long long a[100];
	
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		i=1;
		while (i<n) { //for (i=0; i<n; ++i)
			scanf("%lld", &a[i]);
			++i;
		}
		printf ("%lld \n", findmin(a,n));
	}
}
