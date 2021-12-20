#include <stdio.h>
#include <math.h>
int main () {
	int t; scanf("%d", &t);
	while (t--) {
		double a1,a2,b1, b2;
		scanf("%lf %lf %lf %lf", &a1, &a2, &b1, &b2);
		
		double x=pow(a1-b1,2);
		double y=pow(a2-b2,2);
		double kc= sqrt(x+y);
		
		printf("%.4lf \n", kc);
	}
	return 0;
}
