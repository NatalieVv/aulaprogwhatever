#pragma once
//a classe inimigo possui o método SetVida(int vida) que altera o atributo "vida" do objeto.
//Lance uma exception caso a vida informada seja inconsistente

#include <exception>
using namespace std;

class Inimigo
{
	private:
		int vida = 100;
	public:
		int SetVida(int dano)
		{
			vida = vida - dano;
			if(vida < 0)
			{
				throw exception("sua vida nao pode ser negativa!");				
			}		
			return vida - dano;
		}

		int GetVida() const
		{
			return vida;
		}
};
