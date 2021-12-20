#include <stdio.h>

void Doi_tien (int n) {		//tra ve so to tien it nhat
	int a[100]= {1,2,5,10,20,50,100,200,500,1000};
	int res=0;
	for (int i=9; i>=0; i--) {
		res+=n/a[i];
		n=n%a[i];
	}
	printf ("%d\n", res);
}

int main() {
	int t; scanf("%d", &t);
	while (t--) {
		int n; scanf("%d", &n);
		Doi_tien(n);
	}
	return 0;
}
