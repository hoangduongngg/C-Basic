#include <stdio.h>
#define MAX 100

void input(int a[MAX][MAX],int n, int m){
			for(int i=1;i<=m;i++)
			for(int j=1;j<=n;j++)
				scanf("%d", &a[i][j]);
}

void Sapxepgiam(int arr[],int n){
	int temp;
	for(int i=1;i<=n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i] < arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

void timphantu(int a[MAX][MAX],int m, int n, int k) {
	int b[MAX*MAX];
	int l=1;
	
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++) {
			b[l]=a[i][j];
			l++;
		}
	Sapxepgiam(b, m*n);
	
	int h=1;
	int j=1;
	while (h<k && j<=m*n) {		// dem den bao gio h=k thi dung lai
		if (b[j]!=b[j-1]) h++;
		j++;
	}
	
	if (h==k) printf ("%d \n", b[j]);
	else printf ("NO \n");
}

int main () {
	int t, a[MAX][MAX], m, n, k;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d %d", &m, &n, &k);
		input(a,n,m);
		timphantu(a,m,n,k);
	}

}

/*
3
4 4 3
10 20 30 40
15 25 35 45
24 29 37 48
32 33 48 50

4 4 3
10 15 30 40
15 25 35 45
24 29 37 48
32 33 48 50

4 4 5
10 15 30 40
15 25 35 45
24 29 37 48
32 33 48 50
*/
