#include <stdio.h>

void Mail(char s[]) {
	//Lowkey + Dem khoach trong
	int i=0, space =0;
	while (s[i]!='\0') {
		if (s[i]>='A' && s[i]<='Z') s[i]+=32;
		if (s[i]==' ') space++;
		i++;
	}
	
	//in chu dau cua ho + ten dem
	int dem=i=0;
	printf("%c",s[0]) ;
	while (dem<space-1)	{  // vi du co 3 space thi dem<2, tuc la in ra dem 2 lan 0 va 1, in ra 2 ki tu
		if (s[i]==' ') {
			dem++;
			printf("%c",s[i+1]) ;
		}
		i++;	
	}
	//in ten
	i=0;
	dem=0;
	while (s[i]!='\0'){
		if (s[i]==' ') {
			dem++;
			i++;
		}
		
		if (dem==space) 
			while (s[i]!='\0') {
				printf("%c",s[i]) ;
				i++;
			}
			
		if (s[i]!='\0') i++;
	}
	
	printf("@ptit.edu.vn");
}

int main() {
	char s[100];
	gets(s);
	Mail(s);
	return 0;
}
