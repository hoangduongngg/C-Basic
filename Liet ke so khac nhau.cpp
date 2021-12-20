#include <iostream>
using namespace std;
int n, a[100],i;
void nhap() {
	cin>>n;
	for (i=1; i<=n; i++) cin>>a[i];
}

void sapxep() {
	for (i=1; i<n; i++)
	for (int j=i+1; j<=n; j++) {
		if (a[i]>a[j]) {
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}

int main() {
	nhap();
	sapxep();
	for (i=1; i<=n; i++) {
		cout<<a[i]<<" ";
	//	while (a[i+1]=a[i]) i++;
	}
}
