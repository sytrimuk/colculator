#include <iostream>
#include <stdio.h>
#include <iostream>
#include <locale>
#include <windows.h>
#include <string>
#include <immintrin.h>

using namespace std;

int calculator(int a, char opertator, int b, int sum, bool choice){
	if (choice = false){
		switch (opertator){
			case '+':
				return a + b;
			case '-':
				return a - b;
			case '*':
				return a * b;
			case '/':
				return a / b;
			case '%':
				return a % b;
		default:
			break;
		}
	}
	else{
		switch (opertator) {
		case '+':
			return a + sum;
		case '-':
			return a - sum;
		case '*':
			return a * sum;
		case '/':
			return a / sum;
		case '%':
			return a % sum;
		default:
			break;
		}
	}
}

int main(){
setlocale(LC_ALL, "Russian");
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
system("color 70");
unsigned val; _rdrand32_step(&val); string valS = to_string(val); SetConsoleTitleA(valS.c_str());

	bool choice = false;
	char Opertator;
	int a, b, sum = 0;

	while (true){
		cout << "Введите первое число: "; cin >> a;
		cout << "Введите оператор: "; cin >> Opertator;
		if(choice == false){
			cout << "Введите второе число: "; cin >> b;
			sum += calculator(a, Opertator, b, sum, false);
		}
		else{sum += calculator(a, Opertator, 0, sum, true);}
		cout << "Это равно: " << sum << endl << endl << "===============================================================" << endl;
		choice = true;
	}
	system("PAUSE");
	return 0;
}