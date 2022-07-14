#include <iostream>

using namespace std ;

bool prime_number(int x);
//質因數分解
int main() {
	int n , i = 2  , k;
	cout << "輸入正整數:"; 
	cin >> n;
	cout << n << " = ";
	while(i <= n){
		while(n % i == 0){
			if(prime_number(i)){
				cout << i;
				n/=i;
			if(n > 1)
				cout<<" * ";
			}
		}
		i++;
	}
    return 0 ;
}
bool prime_number(int x){
	int i , count = 0;
	for(i = 2 ; i <= x ; i++){
		if( x % i == 0)
			count++;
	}
	if(count == 1)
		return 1;
	return 0;
} 
