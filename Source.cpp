#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;


// define protocol
void Tong(int a, int b);
void tru(int a, int b);
void nhan(int a, int b);
void chia(int a, int b);

int main()
{
	/*int n;
	int i;
	cout << "Please enter an integer value:";
	cin >> i;
	cout << "The value you entered is " << i;
	cout << "and its double is " << i * 2 << ".\n";
	system("pause"); */
	int a, b;
	cout << "Please enter an integer value a:";
	cin >> a;
	cout << "Please enter an integer value b:";
	cin >> b;
	Tong(a,b);
	tru(a,b);
	nhan(a, b);
	chia(a, b);

	system("pause");
	return 0;
	//cout << "nhap gia tri n" ;
	//cin >> &n;

}

void Tong(int a, int b)
{
		/*int a, b;
		cout << "Please enter an integer value a:";
		cin >> a ;
		cout << "Please enter an integer value b:";
		cin >> b;*/
		cout << "Value a + b:" << a + b << endl;

}
void tru(int a, int b)
{
	/*int a, b;
	cout << "Please enter an integer value a:";
	cin >> a;
	cout << "Please enter an integer value b:";
	cin >> b;*/
	cout << "Value a - b:" << a - b << endl;
}

void nhan(int a, int b)
{
	cout << "Value a * b:" << a * b << endl;
}
void chia( int a, int b)
{
	/*
	TH1: b = 0; kq = vo nghiem
	TH2: a > b 
	*/
	if (b == 0)
	{
		cout << "Program no value" << endl;
	}
	else
	{
		cout << "Value a/b :" << a / b << endl;
	}
	

}