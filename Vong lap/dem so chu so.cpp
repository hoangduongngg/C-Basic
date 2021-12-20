#include <stdio.h>
int main() {
	int N; scanf("%d", &N);
	int scs=0;
	while (N>0) {
		scs++;
		N=N/10;
	}
	printf("%d", scs);
}
