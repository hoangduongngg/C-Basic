#include <stdio.h>
#include <math.h>
int main () {
	int t; scanf("%d", &t);
	while (t--) {
		double a,b,c, d;
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		
		double x=pow(a-c,2);
		double y=pow(b-d,2);
		double kc= sqrt(x+y);
		
		printf("%.4lf \n", kc);
	}
	return 0;
}
