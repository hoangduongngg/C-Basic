#include <stdio.h>
int main() {
	int t; scanf("%d", &t);
	t*=2;	// do 1 ki tu nhap 2 lan, co 1 ki tu \0 o cuoi (doan the)
	while (t--) {
		char c; scanf("%c", &c);
		if (c>='A' && c<='Z') printf("%c\n", c+32);
		if (c>='a' && c<='z') printf("%c\n", c-32);
	}
	return 0;
}
