#include<stdio.h>

int main(){
	int n , i , a , b ;
	int sum = 0;
	scanf("%d" , &n);
	for(i = 0; i < n ; i++){
		sum = 0;
		scanf("%d %d" , &a , &b);
		for( a ; a <= b ; a++){
			if(a%2 == 1)
				sum += a;
		}
		printf("Case %d: %d\n" , i+1 , sum);
		
	}
	return 0;
} 
