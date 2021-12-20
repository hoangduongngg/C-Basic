#include <stdio.h>
int main() {
	int t; scanf("%d",&t);
	while (t--) {
		long n; scanf("%ld",&n);
		printf("%ld\n", (n+1)*n/2);
	}
	return 0;
}
