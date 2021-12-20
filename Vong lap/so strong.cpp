#include <stdio.h>
int main(){
	int N; scanf("%d", &N);
	int sum=0;
	int n=N;
	while (n>0) {
		int gt=1;
		for (int i=1; i<=n%10; i++)
			gt*=i;
		sum+=gt;
		n/=10;
	}
	if (N==sum) printf("1");
	else printf("0");
}
