#include <stdio.h>
#include <stdbool.h>

bool Doi_Xung (int a[], int n) {
	for (int i=0; i<n/2; i++)
		if (a[i]!=a[n-1-i])
			return 0;
	return 1;
}

int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		int a[n+5];
		for (int i=0; i<n; i++)
			scanf("%d", &a[i]);
			
		if (Doi_Xung(a,n)) printf ("YES\n");
		else printf("NO\n");
	}
	return 0;
}
