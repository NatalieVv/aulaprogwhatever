#pragma once
#include <exception>

using namespace std;

class Calculadora
{
	public:
		float Dividir(float n, float d)
		{
			if(d == 0.0f)
			{
				throw exception("denominador nao pode ser igual a zero");
			}
			
			return n / d;
		}
};
