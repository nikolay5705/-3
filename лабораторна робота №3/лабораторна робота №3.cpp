
#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
  
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	
	cout << "\t\tЛАБОРАТОРНА РОБОТА 3" << endl << endl;
    
	
	
	cout << "\t\t****1**** Програма ABS" << endl<<endl;
	float a;
	cout << " Ведіть будь - яке число для знаходження модуля : x = ";
	cin >> a;
	if (a < 0) {
		 cout << " |" << a << "|" << " = " << -a << endl;
	}
	else {
		cout<< " |" << a << "|" << " = " << a << endl;
	}
	
	cout << endl << endl;
	
	
	cout << "\t\t****2**** Програма MAX0" << endl<<endl;
	int A, B, C;
	cout << " Введіть два цілих числа: " << endl;
	cout << " 1. ";
	cin >> A;
	cout << " 2. ";
	cin >> B;
	cout << endl;
	cout <<" 1. A = " << A << endl;
	cout<< " 2. B = " << B << endl;
	if (A >= B) {
		cout << " Max0 (A, B) = " << A << endl;
	}
	else {
		if (A <= B) {
			cout << " Max0 (A, B) = " << B << endl;
		}
	}
	cout << endl << endl;
	
	
	cout << "\t\t****3**** Програма AB" << endl<<endl;
	int A1, B1, C1;
	cout << " Введіть два цілих числа: " << endl;
	cout << " 1. ";
    cin >> A1;
	cout << " 2. ";
	cin >> B1;
	cout << endl;
	cout << " 1. A = " << A1 << " 2. B = " << B1 << endl;
	if (A1 <= B1) {
		cout << " 1. A = " << A1 << " 2. B = " << B1;
	}
	else {
		if (A1 >= B1) {
			C1 = A1;
			A1 = B1;
			B1 = C1;
			cout<< " 1. A = " << A1 << " 2. B = " << B1;
		}
	}
	cout << endl;
	
	
	cout << "\t\t****4**** Програма ABC" << endl;
    float A2, B2, C2, F2;
	cout << "Введіть три будь-яких числа: " << endl;
	cout << " 1. ";
	cin >> A2;
	cout << " 2. ";
	cin >> B2;
	cout << " 3. ";
	cin >> C2;
	cout << "1. A = " << A2 << " 2. B = " << B2 << " 3. C = " << C2 << endl;
	if (A2 >= B2) {
		F2 = B2;
		B2 = A2;
		A2 = F2;
	}if (B2 >= C2) {
		F2 = C2;
		C2 = B2;
		B2 = F2;
	}if (A2 >= B2) {
		F2 = B2;
		B2 = A2;
		A2 = F2;
	}if (B2 >= C2) {
		F2 = C2;
		C2 = B2;
		B2 = F2;
	}if (A2 >= B2) {
		F2 = B2;
		B2 = A2;
		A2 = F2;
	}
	cout << "1. A = " << A2 << " 2. B = " << B2 << " 3. C = " << C2 << endl;
	cout << endl << endl;


	cout << "\t\t****5**** Програма ABCD" << endl;
	float A3, B3, C3, D3, F3;
	cout << "Введіть чотири будь-яких числа: " << endl;
	cout << " 1. ";
	cin >> A3;
	cout << " 2. ";
	cin >> B3;
	cout << " 3. ";
	cin >> C3;
	cout << " 4. ";
	cin >> D3;
	cout << "1. A = " << A3 << " 2. B = " << B3 << " 3. C = " << C3 << " 4. D = " << D3 << endl;
    if (A3 >= B3) {
		F3 = B3;
		B3 = A3;
		A3 = F3;
	}if (B3 >= C3) {
		F3 = C3;
		C3 = B3;
	 	B3 = F3;
	}if (C3 >= D3) {
		F3 = D3;
		D3 = C3;
		C3 = F3;
	}if (A3 >= B3) {
		F3 = B3;
		B3 = A3;
		A3 = F3;
	}if (B3 >= C3) {
		F3 = C3;
		C3 = B3;
		B3 = F3;
	}if (C3 >= D3) {
		F3 = D3;
		D3 = C3;
		C3 = F3;
	}if (A3 >= B3) {
		F3 = B3;
		B3 = A3;
		A3 = F3;
	}


	cout << "1. A = " << A3 << " 2. B = " << B3 << " 3. C = " << C3 << " 4. D = " << D3 << endl;
	cout << endl << endl;

	cout << "\t\t****6**** Програма HIT" << endl;
	float x0 = 0, y0 = 0;
	float R = 5, x, y;
	cout << " Введіть координати (х,у) точки А на площині: " << endl;
	cout << " x = ";
	cin >> x;
	cout << " y = ";
	cin >> y;
	cout << endl;
	if ((x * x + y * y) <= R * R) {
		cout << " Точка (" << x << "," << y << ") потряпляє в коло з центром в точці (" << x0 << ";" << y0 << ") радіуса " << R << endl;
	}
	else {
		cout << " Точка (" << x << "," << y << ")  HE потряпляє в коло з центром в точці (" << x0 << ";" << y0 << ") радіуса " << R << endl;
	}
	cout << endl << endl;
	
	
	cout << "\t\t****7**** Програма MENU" << endl;
	int f1;
	char a1[] = " ФПМ перемогли у змаганнях з футболу";
	char b1[] = " Ніколи не смійся з цигана, що їде на вилосипеді. Це може бути твій вилосипед =)";
	char c1[] = " Мороз Микола";

	cout << " Працює інформаційна система факультету прикладної математики: " << endl;
	cout << " 1. Новини дня " << endl;
	cout << " 2. Анекдот тижня" << endl;
	cout << " 3. Автора!!!" << endl;
	cout << " Введіть відповідний номер і натисніть ENTER: ";
	cin >> f1;
	cout << endl;
	if (f1 == 1) {
		cout << " 1. Новини дня: " << a1 << endl;
	}
	else {
		if (f1 == 2) {
			cout << " 2. Анекдот тижня: " << b1 << endl;
		}
		else {
			if (f1 == 3) {
				cout << " 3. Автора!!! : " << c1 << endl;
			}
		}
	}

	cout << endl << endl;

	system("pause");
}
