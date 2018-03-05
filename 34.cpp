#include<iostream>
#include<ctime>
#include<Windows.h>
using namespace std;
int Pointless(int a, int b);
int main() {
		int input;
		int a;
		int b;
		cout << "Please give me a number" << endl;
		cin >> a;
		cout << "One more number" << endl;
		cin >> b;
		
		cout<< Pointless(a, b);
		
		
}
int Pointless(int a, int b) {
	Beep(a, b * 100);
	return a*b;
}