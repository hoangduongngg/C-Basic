#include <stdio.h>

void Out (int a[50][50], int n, int m) {
    int i, j;
    for (i=1; i<=n; i++) {
        for (j=1; j<=m; j++) {
            printf ("%d ", a[i][j]);
        }
        printf ("\n");
    }
}

void Xoahang (int a[50][50], int n, int m) { //xoa hang x
    int i,j;
    for (i=1; i<=n; i++) {
        if (i%2==1) {
            int x=i;
            for (i=x; i<n; i++)
               for (j=1; j<=m; j++) {
                    a[i][j]=a[i+1][j];
                }
            n--;
            }
        }
    Out(a,n,m);
}

void Bien_doi (int a[50][50], int n, int m) {
    int i,j;
    if (n==m) Out(a,n,m);
    if (n>m) {
        Xoahang (a,n,m);
    }
    

}
int main() {
    int n, m, i,j;
    int a[50][50];
    scanf ("%d%d", &n, &m);
    fflush(stdin);
    for (i=1; i<=n; i++)
        for (j=1; j<=m; j++)
            scanf ("%d", &a[i][j]);

    Bien_doi (a,n,m);
    return 0;
}