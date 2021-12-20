#include <stdio.h>
#include <string>

bool Day_Uu_The (char a[]) {
	int n=0;
	while (a[n]!='\n') {
		scanf("%c", &a[n]);
		n++;
	}
	
	int chan=0, le=0;
	for (int i=0; i<n; i++)
		if ((a[i]-'0')%2==0) chan++;
		else le++;
		
	if ( (n%2==0 && chan>le) || (n%2==1 && le>chan) ) return 1;
	return 0;
}
int main() {
	int t; scanf("%d", &t);
	while (t--) {
		char a[200];
		
		if (Day_Uu_The(a)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
