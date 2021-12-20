#include <stdio.h>
int main() {
	int N, i;
	int chan=0; int le=0;
	
	scanf("%d", &N);
	while(N>0) {
		if ( (N%10)%2==0) chan++;
		else le++;
		N=N/10;
	}
	printf("%d %d", le, chan);
}
