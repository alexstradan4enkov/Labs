/*1
#include<iostream>;
using namespace std;
int main() {
    setlocale(LC_ALL, "RU");
    int a = 0;
    cout << "������� �������� � ��:";
    cin >> a;

    int c = a / 100;
    int d = a % 100;

    cout << c << "m" << d << "cm" << endl;
    return 0;

}
*/
/*2
#include<iostream>;
using namespace std;
 int main() {
	setlocale(LC_ALL, "RU");
	int a = 0;
	cout << "������� �����:";
	cin >> a;
	int b = 0;
	cout << "������� ������:";
	cin >> b;
	int c = a * b;
	cout <<"�������:<< c << "??.?";
	return 0;

}
*/
/*3
#include<iostream>;
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int a = 0;
	cout << "������� ����������� � �������� �������:";
	cin >> a;
	int b = a * 9 / 5 + 32;
	cout <<"����������� � �����������:"<< b << "F";
	return 0;
}
*/
/*4
#include<iostream>;
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int a;
	cout << "������� �����:";
	cin >> a;
	if (a % 2==0) {
		cout << "����� ������";
	}
	else {
		cout << "����� ��������";
	}
	return 0;
}*/
/*5
#include<iostream>;
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int a;
	cout << "������� �����:";
	cin >> a;
	if (a % 5 == 0 && a % 3 == 0) {
		cout << "����� ������� �� 3 �5";
	}
	else if (a % 5 == 0) {
		cout << "����� ������� ������ �� 5";
	}
	else if (a % 3 == 0) {
		cout << "������� ������ �� 3";
	}
	else {		cout << "����� �� ������� �� 3 � �� 5";
	}
	return 0;
}
*/
/*6
#include<iostream>;
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int a = 0;
	cout << "������� ���� �������:";
	cin >> a;
	if (a < 0) {
		cout << "";
	}
	else if (a < 18&& a>0) {
		cout << "���� ������ 18 ���";
	}
	else if (a >=18 && a <= 60) {
		cout << "�� ������ 18, �� ������ 60;
	}
	else {
		cout << "�� ������ 60";
	}
	return 0;
}
*/
/*7
#include<iostream>;
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n = 0;
	cout << "������� �����:";
	cin >> n;
	if (n < 1) {
		cout << "����� ������ ���� ������ 1";
	}

	for (int i = 1; i <= n; i++) {
		cout << i << "*" << i << "=" << i * i << endl;
	}
	return 0;
}
*/
/*
#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	char c;
	int a = 0;

	cout << "������� ������: ";

	while (cin.get(c) && c != '\n') {

		if (c == 'a' || c == 'A' ||
			c == 'e' || c == 'E' ||
			c == 'i' || c == 'I' ||
			c == 'o' || c == 'O' ||
			c == 'u' || c == 'U') {
			a++;
		}
	}

		cout << "���������� ������� ����: " << a << endl;

	return 0;
}
*/
/*9
#include<iostream>;
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n;
	int sum = 0;
	cout << "������� �����:";
	cin >> n;
	if (n < 1) {
		cout << "����� ������ ���� ������ 1";
	}
	else {
		for (int i = 1; i <= n; i++) {

			if (i % 2 == 0 || i % 5 == 0) {
				sum += i;
			}
		}

		cout << "����� ����� 1 �� " << n << ", ��������� �� 2 ��� �� 5:" << sum << endl;
	}
	return 0;
}
*/
/*10
#include<iostream>;
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	 double a;
	cout << "������� �����:";
	cin >> a;
	if (a < 0) {
		cout << "����� �������������";
	}
	else if (a == 0) {
		cout << "����� ����� 0";
	}
	else {
		cout << "����� �������������";
	}
	return 0;
}
*/
/*11
#include <iostream>
using namespace std;

int main() {
	for (int i = 32; i <= 126; i++) {
		cout << i << " : " << (char)i << endl;
	}
	return 0;
}
*/