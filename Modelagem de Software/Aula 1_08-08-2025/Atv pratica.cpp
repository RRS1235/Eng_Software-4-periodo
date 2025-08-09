#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Carro {
	public:
		string marca;
		int ano;
		
	void Exibir(){
		cout << "O Carro da marca. " << marca << " Esta disponivel no modelo de " << ano << endl;	
	}		
};
	
int main(int argc, char** argv) 
{
	Carro c1; //instancia de Carro
		c1.marca = "Fiat";
		c1.ano = 1990;
		c1.Exibir();
		
	Carro c2;
		c2.marca = "volskisvagem";
		c2.ano = 2000;
		c2.Exibir();
	
  return 0;
}
