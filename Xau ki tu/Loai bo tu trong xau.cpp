#include <stdio.h>
#include <string.h>

void Loai_Bo (char *s1, char *s2) {
	
	for (int i=0; i<strlen(s1); i++)
		if (strstr(s1,s2)==&s1[i]) {
			strcpy (&s1[i], &s1[i+strlen(s2)+1]);		//cong them 1 dau cach
			i--;		// lui xuong 1 vi tri phong truong hop 2 tu lien nhau giong nhau
 		}
	puts (s1);
}

int main() {
	char s1[100], s2[100];
	gets(s1);		//s1 la 1 xau
	gets(s2);		//s2 la mot tu
	Loai_Bo (s1,s2);
}
/*
mon mon thcs2 la mon 2tc
mon
*/
