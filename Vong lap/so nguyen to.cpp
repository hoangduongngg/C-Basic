#include <stdio.h>
#include <stdbool.h>
bool SNT(int n) {
	if (n==2) return 1;
	if (n<2 || n%2==0) return 0;
	for (int i=3; i*i<=n; i+=2)
		if (n%i==0) return 0;
	return 1;
}

int main () {
	int t; scanf("%d", &t);
	while (t--) {
	int n; scanf("%d", &n);
	if(SNT(n)) 		printf("YES \n");
	else 			printf("NO \n");
	}
}

/*
2
10
5
*/
