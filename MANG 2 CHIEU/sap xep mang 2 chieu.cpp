#include <stdio.h>
#define MAX 100

void input(int a[MAX][MAX],int n, int m){
			for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				scanf("%d", &a[i][j]);
}

int SapXepMax(int arr[],int n){  // tang dan
		int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                tg = arr[i];
                arr[i] = arr[j];
                arr[j] = tg;        
            }
        }
    }
  
}

void sapxep(int a[MAX][MAX],int m, int n) {
	int b[MAX*MAX];
	int l=0;
	
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++) {
			b[l]=a[i][j];
			l++;
		}
	SapXepMax(b, m*n);
	for (int i=0; i<m*n; i++)
		printf("%d ", b[i]);
}

int main () {
	int t, a[MAX][MAX], m, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &m, &n);
		input(a,n,m);
		sapxep(a,m,n);
	}

}

/*
3
4 4
10 20 30 40
15 25 35 45
24 29 37 48
32 33 48 50

4 4
10 15 30 40
15 25 35 45
24 29 37 48
32 33 48 50

4 4
10 15 30 40
15 25 35 45
24 29 37 48
32 33 48 50
*/
