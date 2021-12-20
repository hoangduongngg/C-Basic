#include <stdio.h>
#include <math.h>
int main() {
	int t; scanf("%d",&t);
	while (t--) {
		long n; scanf("%ld",&n);
		if ( sqrt(n)==(int) sqrt(n) ) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
