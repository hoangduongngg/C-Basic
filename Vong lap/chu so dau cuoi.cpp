#include <stdio.h>
int main(){
	int N; scanf("%d", &N);
	int cuoi=N%10;
	while (N>0){
		if (N<10) printf("%d ", N);
		N=N/10;
	}
	printf("%d", cuoi);
}
