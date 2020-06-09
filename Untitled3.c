
#include<bits/stdc++.h>
using namespace std;

int List(int n)
{
    if(n<=1) return n;
    return List(n-1)+List (n-2);
}
int main()
{
    int n ;
    cin>> n;
    cout <<"F" <<n << "=" <<List (n)<<end1;
    return 0;
}
