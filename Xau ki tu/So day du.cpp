#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool Ktra(char *s) {
	int check[100]={0};
	int dem=0; 	//dem so ki tu khac nhau co trong xau
	for (int i=0; i<strlen(s); i++)
		check[(int) (s[i]-'0')]=1;
		
	for (int i=0; i<100;i++)
		if (check[i]) {
			dem++;		// neu co mat thi dem 1
			if (dem==10) return 1;
			check[i]=0;	// chuyen ki tu do coi nhu da xet de khong bi trung
		}
	return 0;
}
int main() {
	int t; scanf("%d", &t);
	fflush(stdin);
	while (t--) {
		fflush(stdin);
		char s[1000];
		scanf("%s", &s);
		int kt=0;
		
		if (s[0]=='0') {
			printf("INVALID\n");
			kt=1;
		}
		
		else {
			for (int i=0; i<strlen(s); i++) {
				if (s[i]<'0' || s[i]>'9') {
					printf("INVALID\n");
					kt=1;
					break;
				}
					
			}
		}
	//	printf("%d", kt);
		if (kt==0) {
			if (Ktra(s)) printf("YES\n");
			else printf("NO\n");
		}
		fflush(stdin);
	}
	return 0;
}
