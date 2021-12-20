#include<stdio.h>
#include <string.h>

int Doi_gio (char s[10]) {
    return ((s[0]-'0')*10+(s[1]-'0'))*60 + (s[3]-'0')*10+(s[4]-'0');
}

void Run (char Ma, char Ten, char giovao, char giora) {
    printf ("%s  %s ", Ma, Ten);
    int time = Doi_gio (giora) - Doi_gio (giovao);
    int gio = time/60;
    int phut = time%60;

    printf ("%d gio %d phut", gio, phut);

    printf ("\n");
}

int main () {
    int t; scanf ("%d",&t);
    while (t--) {
        fflush(stdin);
        char Ma[10], Ten[100];
        gets(Ma); gets (Ten);
        char giovao[10], giora[10];
        gets (giovao); gets(giora);
        
        printf ("%s  %s ", Ma, Ten);
        int time = Doi_gio (giora) - Doi_gio (giovao);
        int gio = time/60;
        int phut = time%60;

        printf ("%d gio %d phut\n", gio, phut);
    }
    

}
