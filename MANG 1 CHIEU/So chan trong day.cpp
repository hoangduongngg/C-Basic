#include <stdio.h>

void Chan (int a[], int n) {
	int c[n+5];
	int j=0, k=0;
	for (int i=0; i<n; i++)
		if (a[i]%2==0) {
			c[j]=a[i];
			j++;
		}
		
	for (int i=0; i<j; i++)
		printf ("%d ",c[i]);
	printf("\n");
}

int main() {
	int t; scanf("%d",&t);
	    while(t--){
	        int n; scanf("%d", &n);
			int a[n+5];
			for (int i=0; i<n; i++) 
				scanf("%d", &a[i]);
				
			Chan(a,n);
	    }
	    return 0;
}

	



