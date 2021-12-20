#include <stdio.h>
#include <stdbool.h>

int swap (int *a, int *b) {
	int temp=*a; *a=*b; *b=temp;
}

bool SNT(int n) {
	if (n==2) return 1;
	if (n<2 || n%2==0) return 0;
	for (int i=3; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;
}

bool KTra(int n) {
	if (!SNT(n)) return false;
	else {
		int t=0; 		// tong chu so
		while (n>0) {
			t+=n%10; n/=10;
		}
		int f[100];
		f[0]=0;
		f[1]=1;
		int i=2;
		while (f[i]<=27) {		//a<1000 -> tcs <=27
			f[i]=f[0]+f[1];
			if (f[i]==t) return 1;
			if (f[i]>t) return 0;
			i++;
		}
	}
}

int main () {
	int a, b;
	scanf ("%d %d", &a, &b);
	if (a>b) swap(&a,&b);
	for (int i=a; i<=b;i++)
		if (KTra(i)) printf("%d ",i);
	return 0;
}
