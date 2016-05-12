// Meu primeiro código em C++
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* args[])
{

	char inicial;
	string nome;
	string classe;

	cout << "Digite o nome do personagem:" << endl;
	getline(cin, nome);

	inicial = nome[0];

	cout << "Digite a classe do personagem" << endl;
	getline(cin, classe);
	cout << "Personagem " << inicial << ". " << nome << endl;
	cout << "Classe: " << classe << endl;

	int ataque = 10;
	int defesa = 8, magica = 2, def_magica = 4;

	int vida = 50, vida_maxima = 110;
	float porc_vida = (vida * 100) / vida_maxima;

	cout << "Status " << endl;
	cout << "Ataque : " << ataque << " Defesa : " << defesa << endl;
	cout << "Magica : " << ataque << " Def. Magica : " << def_magica << endl;
	
	cout << "Vida : " << vida << " / " << vida_maxima << endl;
	cout.precision(2);
	cout << "Vida% : " << fixed << porc_vida << "%" << endl;

	return 0;
}