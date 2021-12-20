#include <stdio.h>
int main () {
	long a,b;
	scanf("%ld %ld", &a, &b);
	if (a>0 && b>0) {
		float a1=a;
		float b1=b;
		float div=a1/b1;
		printf("%ld\n%ld\n%ld\n%ld\n%ld\n%.2f", a+b, a-b, a*b , a/b, a%b, div);
	}
	return 0;
}
