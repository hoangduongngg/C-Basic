#include <stdio.h>
int main() {
	int N;
	double S=0;
	scanf("%d", &N);
	for (int i=1; i<=N; i++) S+=(double)1/i;
	printf("%.4f", S);
}
