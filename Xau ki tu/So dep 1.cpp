#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool So_Dep_01 (char s[]) {
	for (int i=0; i<strlen(s); i++) {
		if ((s[i]-'0')%2) return 0;
		if (s[i]!=s[strlen(s)-1-i]) return 0;
	}
	return 1;
}
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		fflush(stdin);
		char s[500];
		scanf("%s", &s);
		if (So_Dep_01(s)) printf("YES\n");
		else printf("NO\n");
		fflush(stdin);
	}
	return 0;
}
/*
4
123456787654321
86442824468
8006000444422220000222244440006008
235365789787654324567856578654356786556
*/
