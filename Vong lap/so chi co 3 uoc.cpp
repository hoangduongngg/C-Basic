#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool SNT(int n) {
	if (n==2) return 1;
	if (n<2|| !(n%2)) return 0; // n chan khong nguyen to -> toi uu
	for (int i=2; i*i<=n; i++)
		if (n%i==0) return 0;
	return 1;
}
int main() {
	int t; scanf("%d", &t);
	while (t--) {
	long long L,R;
	long long s=0;
	scanf ("%lld %lld", &L, &R);
	long long i=sqrt(L)+1;
	for (i; i*i<=R; i++)
		if (SNT(i)) s++;
	printf ("%lld \n",s);
	}
}

// y tuong: so co 3 uoc la binh phuong cua 1 SNT
