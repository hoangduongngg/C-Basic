// N=123456

#include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	int chan=0;
	int le=0;
	
	while (N>0) {
		if (N%2==0) chan++;
		else le++;
		N=N/10;
	}

	printf("%d ", le);
	printf("%d", chan);

}
