#include <stdio.h>
#include <algorithm>
/*
int swap(int *a, int *b) {
	if (*a<*b) {
		int temp=*a;
		*a=*b;
		*b=temp;
	}
*/	
}
int main() {
	int a1, a2, b1, b2, c1, c2;
	scanf("%d%d%d%d%d%d", &a1, &a2, &b1, &b2, &c1, &c2);
	swap(&a1, &a2); swap(&b1, &b2); swap(&c1, &c2);
	
	int max=a1;
	if (b1>max) max=b1;
	if (c1>max) max=c1;
	
	
	
}

/* y tuong: 
1. ktra chieu dai dai nhat
	2. ktra 2 hinh con lai co 2 canh = nhau khong
		3. ktra 2 canh con lai co tong bang chieu dai dai nhat khong
			4. ktra dai max == canh chung
