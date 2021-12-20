#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void swap (char s1[], char s2[]) {
	char temp[500];
	strcpy(temp,s1);
	strcpy(s1,s2);
	strcpy(s2,temp);
}


void reverse (char s[]) {
	for (int i=0; i<strlen(s)/2; i++) {
		char temp=s[i];
		s[i]=s[strlen(s)-1-i];
		s[strlen(s)-1-i]= temp;
	}
}

bool Nhohon (char s1[], char s2[]) {		// Ktra X<Y?
	if (strlen(s1)>strlen(s2)) return 0;
	if (strlen(s1)<strlen(s2)) return 1;
	for (int i=0; i<strlen(s1);i++) {		// so nao nho hon trc thi la nho hon
		if (s1[i]>s2[i]) return 0;
		if (s1[i]<s2[i]) return 1;
	}
	return 1;
}

void Tong(char s1[], char s2[]) {
	if (!Nhohon(s1,s2)) swap(s1,s2);
	
	char res[501];
	int l=0;
	reverse (s1);
	reverse (s2);
	
	//77921 + 87900 : s2+s1
/*	for (int i=strlen(s1); i<strlen(s2); i++) 	// bu cac phan tu trong
		{
			char bu1[strlen(s2)-strlen(s1)]="0";
			strcat(s1, bu1);
		}
*/	
	int cache=0;
	for (int i=0; i<strlen(s2); i++) {
		int tmp= (s2[i]-'0') + (s1[i]-'0') + cache;
		if (tmp<10)	cache=0;
		else {
			cache=1;
			tmp-=10;
		}
		res[l]=(tmp+'0');
		l++;
	}
	
	for (int i = strlen(s1); i < strlen(s2); i++) {
        int tmp = (s2[i] - '0') + cache;
        if (tmp<10)	cache=0;
		else {
			cache=1;
			tmp-=10;
		}
		res[l]=(tmp+'0');
		l++;
    }
	
	if (cache==1) {
		res[l]=('1');
		l++;
	}
	reverse(res);
	for (int i=0; i<l; i++)
		if (res[i]>='0' && res[i]<='9')
			printf("%c", res[i]);
	printf("\n");
}

int main() {
	int t; scanf("%d", &t);
	while (t--) {
		
		char s1[500]; char s2[500];	//X<Y
		scanf("%s1", &s1);
		scanf("%s2", &s2);
		
		Tong(s1,s2);
		
	}
	return 0;
}
