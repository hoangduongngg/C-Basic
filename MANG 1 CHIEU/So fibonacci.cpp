#include<stdio.h>

int fibo(int n){
    if (n<2) return n;
    int f0=0,f1=1,f;
    for (int i=2; i<=n; i++){
        f=f0+f1;
        f0=f1;
        f1=f;
    }
    return f;
}

int main(){
    int t; scanf("%d",&t);
    while(t--){
        int n; scanf("%d ",&n);
        if (n>=0) printf("%d\n", fibo(n));
    }
    return 0;
}
