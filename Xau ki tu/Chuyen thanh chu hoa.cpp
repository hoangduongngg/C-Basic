#include <stdio.h>

void Upper(char s[]) {
	int i=0;
	while (s[i]!='\0') {
		if (s[i]>='a' && s[i]<='z') s[i]-=32;
		i++;
	}
}
int main() {
	char str[100];
	gets (str);
	Upper(str);
	printf("%s", str);
	return 0;
}
