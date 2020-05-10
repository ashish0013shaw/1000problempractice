/*
 * Given a number, determine if its power of 2 using bit manipulation:
   This is good question.
   first lets see some example so we can understand the power.

   if n=3; here n is not a power of 2:
    check some properties of base system:
    3 =00000011 here 3 has two bits
    but whenever you get power of 2 there has only 1 bit because binary system has base 2:
    binary system:
    we can use count the number of bits if its 1 it is power of 2 but it will give o(n)
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(__builtin_popcount(n)==1){
        cout<<"YES The given number is power of 2";
    }
    else{
        cout<<"NO The given number is not power of 2";
    }
return 0;
}
