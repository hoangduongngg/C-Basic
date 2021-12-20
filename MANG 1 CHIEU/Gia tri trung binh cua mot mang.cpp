#include <stdio.h>

int main() {
		int n; scanf("%d", &n);
		int a[n+5];
		float sum=0;
		for (int i=0; i<n; i++) {
			scanf("%d", &a[i]);
			sum+=a[i];
		}
		float N=n;
		float TB= sum/n;
		printf("%.3f\n", TB);	
		return 0;
}
