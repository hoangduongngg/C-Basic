#include <stdio.h>

long long giaithua(int n) {		//tinh giai thua cua n
	int gt=n;
	if (n>=3)
		for (int i=2; i<n; i++) 
			gt*=i;
	return gt;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", giaithua(0));
}
