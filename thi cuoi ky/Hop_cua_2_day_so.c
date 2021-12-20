#include <stdio.h>

void SXep (int a[], int n) {
    int i=0, j=0;
    for (i=0; i<n-1; i++)
        for (j=i; j<n; j++)
            if (a[i]>a[j]) {
                int temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }

}
int main() {
    int n, m;
    scanf ("%d %d", &n, &m);
    int a[n], b[m], c[n], d[m];
    int i, j=0, k=0;
    int check [1000]={0};
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);
    for (i=0; i<m; i++)
        scanf("%d", &b[i]);

    for (i=0; i<n; i++) {
        if (check[a[i]]==0) {
            check [a[i]]=1;
            c[j]=a[i];
            j++;
        }
    }
    for (i=0; i<m; i++) {
        if (check[b[i]]==0) {
            check [b[i]]=1;
            d[k]=b[i];
            k++;
        }
    }

    
    for (i=0; i<k; i++) {
        c[j]=d[i];
        j++;
    }

    SXep (c,j);

    for (i=0; i<j; i++) {
        printf ("%d ", c[i]);
    }



}