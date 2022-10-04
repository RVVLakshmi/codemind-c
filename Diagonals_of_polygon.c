#include<iostream>
using namespace std;
int diagonalCount(int n) {
   return n * (n - 3) / 2;
}
int main() {
   int n;
   scanf("%d",&n);
   cout<< diagonalCount(n);
}