#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++) scanf("%d",&A[i]);
    sort(A,A+n);
    long long int x = 0;
    int c = A[n-1];
    for(int i=0;i<n;i++) x += (c-A[i]);
    printf("%lld\n",x);
    
    
}
