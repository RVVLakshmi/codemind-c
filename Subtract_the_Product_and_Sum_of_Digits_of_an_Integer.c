#include<stdio.h>
int main(){
 int n,s=0,p=1,d,c;
 scanf("%d",&n);
 for(;n>0;)
 {
     d=n%10;
     s=s+d;
     p=p*d;
     n=n/10;
 }
 c=p-s;
 printf("%d",c);
 return 0;
}