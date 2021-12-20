#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
int fibonaci(int n){ 
	int i,f0=0,f1=1,fi; 
	int t=0; 
	while(n>0){ 
		t=t+n%10; n=n/10; } 
		
	for (i=2;i<=t;i++){ 
	fi=f0+f1; f0=f1; f1=fi; } 
	if (fi!=t) return 0; else 
	return 1; 
} 
int kiemtranguyento(int n){ 
	int j; 
	for (j=2;j<n/2;j++)
		if(n%j==0) return 0; 
	return 1; } 
int main(){ 
	int n,a,b,max,min; scanf("%d %d",&a,&b);if(a<=1000 && b<=1000){ if (a>b)max=a ,min=b; else max=b, min=a; for (n=min;n<=max;n++){ if(fibonaci(n) && kiemtranguyento(n)) printf("%d ",n); } } }
