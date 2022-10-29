#include<bits/stdc++.h>
using namespace std;
int cd(int l,int r,int a){
    int c=0;
    for(int i=l;i<=r;i++){
        if(i%a==0)
          {
              c++;
          }
    }
    return c;
}
int main(){
    int l,r,a;
    cin>>l>>r>>a;
    cout<<cd(l,r,a);
    return 0;
}