#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool SNT(int n) {
	if (n==2) return 1;
	if (n<2 || n%2==0) return 0;
	for (int i=3; i*i<=n; i+=2)
		if (n%i==0) return 0;
	return 1;
}

bool So_Dep_03 (char s[]) {
	for (int i=0; i<strlen(s); i++) {
		if (!SNT(s[i]-'0')) return 0;
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
		if (So_Dep_03(s)) printf("YES\n");
		else printf("NO\n");
		fflush(stdin);
	}
	return 0;
}
/*
3

123456787654321

235755557532

2222333355557777235775327777555533332222
*/
