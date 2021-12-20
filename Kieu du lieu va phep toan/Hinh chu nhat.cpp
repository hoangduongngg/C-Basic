#include <stdio.h>
int main() {
	int a,b; scanf("%d %d", &a, &b);
	if (a>0&&b>0) printf ("%d %d", 2*(a+b), a*b);
	else printf ("0");
	return 0;
}
