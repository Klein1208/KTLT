#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <math.h>
using  namespace std;

// void mu2(string& A[]){
//     stringstream ss;
//     for(int i=0; i<63; i++){
//         ss << to_string(pow(2,i));
//         getline(ss,A[i],',');
//     }
// }
void CongChuoi(string& A, string& B){
    
    int a= A.length();
    int b= B.length();
    if( a < b) swap(a,b);
    int dodai=a+1;
    for(int i=0; i<A.length()/2; i++){
        swap(A[i],A[A.length()-1-i]);
    }
    for(int i=0; i<dodai-a; i++){
        A.push_back('0');
    }
    for(int i=0; i<B.length()/2; i++){
        swap(B[i],B[B.length()-1-i]);
    }
    for(int i=0; i<dodai-a; i++){
        B.push_back('0');
    }
    int temp=0;
    for(int i=0, i<length; i++){
        A[i]=A[i]+B[i]+temp;
        temp=A[i]%10;
        A[i]/=10;
    }
}


int main(){
    int test;
    cin >> test;
    while(test--){
        string bin;
        cin >> bin;
        string  dec= "0";
        for(int i=0; i<=bin.length()-1; i++){
            
        }
    }
}