#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool So_Dep_02 (char s[]) {
	if (s[0]!='8' || s[strlen(s)-1] !='8') return 0;
	
	int tc=0;		//cs tan cung cua tong cac cs
	for (int i=0; i<strlen(s); i++)
		tc= (tc + (s[i]-'0') )%10;
	if (tc==0) return 1;
	return 0;
}
int main() {
	int t; scanf("%d", &t);
	fflush(stdin);
	while (t--) {
		fflush(stdin);
		char s[500];
		scanf("%s", &s);
		if (So_Dep_02(s)) printf("YES\n");
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
