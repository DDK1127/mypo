#include<iostream>

using namespace std;

//日數計算 
int main(){
	int year , month , day;
	int number = 0;
	cout << "請依序輸入(西元)年/月/日:" << endl;
	cin >> year >> month >> day;
	cout << "您輸入的日期是 " << year << " 年 " << month << " 月 " << day << " 日 ";
	if( (year % 4 == 0 && year % 100 != 0) || year % 400 ==0){
		number++;
	}
	switch(--month){
		case 12:
			number+=31;
		case 11:
			number+=30;
		case 10:
			number+=31;
		case 9:
			number+=30;
		case 8:
			number+=31;
		case 7:
			number+=31;
		case 6:
			number+=30;
		case 5:
			number+=31;
		case 4:
			number+=30;
		case 3:
			number+=31;
		case 2:
			number+=28;
		case 1:
			number+=31;
	}
	day +=number;
	cout << "第"<< year <<"年的第" << day <<"天" << endl; 
	return 0;
} 
