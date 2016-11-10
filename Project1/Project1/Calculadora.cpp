#include "Calculadora.h"
#include <iostream>

class Programa
{
	public:
		int Executar()
		{
			Calculadora calc;
			float r;
			try
			{
				r = calc.Dividir(10.0f, 0.0f);
				cout << "r: " << r << endl;
			}	
			catch(exception& e)
			{
				cout << "Ocorreu um erro epico" << endl;
			}
			
			return 0;
		}
};

int main()
{
	Programa prog;
	return prog.Executar();
}