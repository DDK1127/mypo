#include<stdio.h>
#include<stdlib.h>

void avg_sum(double a[], int n, double *min, double *max, double *sum);

int main(){
	double *arr = (double*)malloc(sizeof(double));
	int  i , size = 0 ;
	double num ,Max , Min  ,Sum ;
	while((scanf("%lf" ,&num)) != EOF){
		arr[size++] = num;
		arr = (double*)realloc(arr , sizeof(double));
	}
	avg_sum(arr , size , &Min , &Max , &Sum);
	printf("min = %lf , max = %lf , sum  = %lf\n" , Min ,Max ,Sum);
	return 0;
}
void avg_sum(double a[], int n, double *min, double *max, double *sum){
	int i ;
	*min = a[0] , *max = a[0] , *sum = a[0];
//	printf("min = %d , max = %d , sum  = %d\n" , *min ,*max , *sum);
	for(i = 0 ; i < n ; i++){
		if(a[i] > *max)
			*max = a[i];
		if(a[i] < *min)
			*min = a[i];
		*sum += a[i];
	}
}  
