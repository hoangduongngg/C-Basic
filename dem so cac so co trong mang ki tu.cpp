// dem cac so co trong mang ki tu
#include <stdio.h>

int demso (char a[]) {
	int dem, i;
	dem=0;
	for (i=0; a[i]=!'\0'; ++i)
		if ('0'<=a[i]<='9')
			++dem;
			
	return dem;
}

int main () {
	int t, i;
	char a[100];

	scanf("%d", &t);
	while (t--) {
		scanf("%s", a);
		printf ("%d \n", demso(a));
	}
}
