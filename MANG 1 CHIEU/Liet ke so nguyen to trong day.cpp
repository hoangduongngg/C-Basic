#include <stdio.h>
#include <stdbool.h>
bool SNT(int n) {
	if (n==2) return true;
	if (n<2|| !(n%2)) return false; // n chan khong nguyen to -> toi uu
	for (int i=3; i*i<=n; i+=2)
		if (n%i==0) return false;
	return true;
}

int main () {
	int n; scanf ("%d", &n);
	int a[n+5];
	int dem=0;
	for (int i=0; i<n; i++) {
		scanf ("%d", &a[i]);
		if (SNT(a[i])) dem++;
	}
	printf("%d ", dem);
	for (int i=0; i<n; i++) {
		if (SNT(a[i]))
			printf("%d ", a[i]);
	}
	return 0;
}
