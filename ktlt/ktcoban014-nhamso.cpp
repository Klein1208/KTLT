#include <iostream>
#include <string>
using namespace std;

unsigned long sum(string& a, char x, char y){
	for(int i=0; i<a.length(); i++){
        if( a[i] == x) a[i] = y;
    }
    unsigned long nu = stoi(a);
    return nu;
}

int main(){
	int test;
	cin >> test;
	while(test--){
		string a, b;
		cin >> a >> b;
		unsigned long min = sum(a,'5','3') + sum(b,'5','3');
        unsigned long max = sum(a,'3','5') + sum(b,'3','5');
        cout << min << " " << max << endl;
	}
}