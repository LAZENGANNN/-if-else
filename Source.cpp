#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");

	//1
	/*int a;
	cin >> a;
	if (a == 0) {
		cout << "верно";
	}
	else {
		cout << "неверно";
	}*/

	
	//2
	/*int a;
	cin >> a;
	if (a > 0) {
		cout << "верно";
	}
	else {
		cout << "неверно";
	}*/

	//3
	/*int a;
	cin >> a;
	if (a < 0) {
		cout << "верно";
	}
	else {
		cout << "неверно";
	}*/

	//4
	/*int a;
	cin >> a;
	if (a >= 0) {
		cout << "верно";
	}
	else {
		cout << "неверно";
	}*/

	//5
	/*int a;
	cin >> a;
	if (a <= 0) {
		cout << "верно";
	}
	else {
		cout << "неверно";
	}*/

	//6
	/*int a;
	cin >> a;
	if (a != 0) {
		cout << "верно";
	}
	else {
		cout << "неверно";
	}*/

	//11
	/*int a;
	cin >> a;
	if (a > 0 && a < 5) {
		cout << "верно";
	}
	else {
		cout << "верно";
	}*/

	//12
	/*int a;
	cin >> a;
	if (a == 0 || a == 2) {
		a=a + 7;
	}
	else {
		a=a / 10;
	}
	cout << a;*/

	//13
	/*int a;
	int b;
	int res;
	cin >> a >> b;
	if (a <= 1 && b >= 3) {
		res = a + b;
	}
	else {
		res = a - b;
	}
	cout << res;*/

	//14
	/*int a;
	int b;
	cin >> a >> b;
	if ((a > 2 && a <11) || (b >= 6 && b < 14)) {
		cout << "верно";
	}
	else {
		cout << "неверно";
	}*/

//15
//int a;
//cin >> a;
//switch (a) {
//case 1: cout << "zima"; break;
//case 2: cout << "vesna"; break;
//case 3: cout << "leto"; break;
//case 4: cout << "osen'"; break;
//default: cout << "ошибка номера"; break;
//
//}
//return 0;

//16
//int day;
//cin >> day;
//switch (day) {
//	case 1:
//    case 2:
//	case 3:
//	case 4:
//	case 5:
//	case 6:
//	case 7:
//	case 8:
//	case 9:
//	case 10: cout << "1"; break;
//	case 11:
//	case 12:
//	case 13:
//	case 14:
//	case 15:
//	case 16:
//	case 17:
//	case 18:
//	case 19:
//	case 20:cout << "2"; break;
//	case 21:
//	case 22:
//	case 23:
//	case 24:
//	case 25:
//	case 26:
//	case 27:
//	case 28:
//	case 29:
//	case 30:
//	case 31: cout << "3"; break;
//	default: cout << "ошибка номера"; break;
//}
//return 0;

//17
int month;
cin >> month;
switch (month) {
case 1:
case 2:
case 12: cout << "зима"; break;
case 3:
case 4:
case 5: cout << "весна"; break;
case 6:
case 7:
case 8: cout << "лето"; break;
case 9:
case 10:
case 11: cout << "осень"; break;
default: cout << "ошибка номера"; break;
	return 0;
}


	

	
	



	}
