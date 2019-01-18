#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int n;
long double numero;
long double resultado=0;

int main(int argc, char** argv) {
	cout<<"introduce el numero de valores a sumar"<<endl;
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		cout<<"introduce el valor"<<i<<endl;
		cin >> numero;
		resultado+=numero;
	}
	cout<<"Elresultado de la suma es:"<<resultado<<endl;
	
	
	return 0;
}
