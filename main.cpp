#include <iostream>
#include <locale>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, ""); 
	
	float num1, num2;
	
	cout << "Digite um n�mero:" << endl;
	cin >> num1;
	cout << "Digite outro n�mero:" << endl;
	cin >> num2;
	
	float res = num1 / num2;
	
	cout << endl;
	cout << num1 << " dividido por " << num2 << " � igual a " << res << endl;
	return 0;
}
