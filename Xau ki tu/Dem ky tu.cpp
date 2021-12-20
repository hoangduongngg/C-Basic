#include <stdio.h>

void Dem(char s[]) {
	int i=0;
	int chu=0, so=0, khac=0;
	while (s[i]!='\0') {
		if ((s[i]>='A' && s[i]<='Z')|| (s[i]>='a' && s[i]<='z')) chu++;
		else
			if (s[i]>='0' && s[i]<='9') so++;
			else khac++;
		i++;
	}
	
	printf("%d %d %d", chu, so, khac);
}
int main() {
	char str[100];
	gets(str);
	Dem(str);
	return 0;
}
