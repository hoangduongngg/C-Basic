#include <stdio.h>

int main () {
	int a,b;
	scanf("%d %d", &a, &b);
	if (a>0 && b>0) {
		float a1=a;
		float b1=b;
		float div=a1/b1;
		printf("%d %d %d %.2f %d", a+b, a-b , a*b, div, a%b);
	}
	else if (b==0) printf("0");
	
	return 0;
}
