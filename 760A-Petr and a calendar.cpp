#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,z;
    scanf("%d %d",&x,&y);
    if(x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12) x = 31;
    else if(x==2) x = 28;
    else x = 30;
    x -= (7-y+1);
    if(x%7==0) z = x/7 + 1;
    else z = x/7 + 2;
    printf("%d\n",z);
    
}
