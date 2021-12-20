#include <stdio.h>
#define MAX 20

int main() {
	int a[MAX][MAX]; 
	int dem, n,m;
	scanf("%d", &n);
	scanf("%d", &m);
	for (int i=1;i <= n;i++) 
		for (int j=1;j <= m;j++)
			scanf("%d", &a[i][j]);
	
	
	for (int i=1;i <= n;i++) {
		for (int j=1;j <= m;j++) {
		if (a[i][j]<2) printf("0 ");
		if ((a[i][j]==2)||(a[i][j]==3)) printf("1 ");
		if (a[i][j]>3) {
			dem=0;
			for(int k=2;k*k<=a[i][j];k++) {
				if(a[i][j]%k==0) dem++;
			}
			if (dem==0) printf("1 ");
			else printf("0 ");
		}
		}
		printf("\n");
	}
	
	return 0;
}
