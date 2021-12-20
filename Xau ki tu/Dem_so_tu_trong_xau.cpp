#include <stdio.h>
#include <string.h>

int isSpace(char x)
{
	return (x == ' ' || x == '\n' || x == '\t');
}
void Dem_Tu (char *s) {
	int dem=0;
	for (int i=0; i<strlen(s); i++)
		if (isSpace(s[i]) == 0 && isSpace(s[i + 1]) == 1) dem ++;
	
	printf("%d\n", dem+1);
}

int main() {
	int t; scanf ("%d",&t);
	while (t--) {
		fflush(stdin);
		char s[205];
		gets(s);
		Dem_Tu (s);	
		fflush(stdin);
	//	getchar();	
	}
}
/*
2
Lap trinh     C va C++
ACBDSDS kdfjdkgfdgkhfgjlfgdkjfdgdgfdgfd


/*
Xoa cuoi = Reverse + Xoa dau + Reverse
strrev (s);
	for (int i=0; i<strlen(s); i++)
		if (!isspace(s[i])) {
			strcpy ( s, &s[i]);
			break;
		}
	strrev(s);
	*/
	
/*
/*
void Reverse (char *s) {
	for (int i=0; i<strlen(s)/2; i++)
		s[i]=s[strlen(s)-1-i];//dang sai, o day la swap moi dung
}

void Xoa_Trang_Dau_Cuoi (char *s) {
	for (int i=0; i<strlen(s); i++)
		if (!isspace(s[i])) {
			strcpy ( s, &s[i]);
			break;
		}
		
	
	Reverse (s);
	for (int i=0; i<strlen(s); i++)
		if (!isspace(s[i])) {
			strcpy ( s, &s[i]);
			break;
		}
	Reverse (s);

}
*/
	
