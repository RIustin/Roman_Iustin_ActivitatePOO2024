#include<iostream>
using namespace std;

class Cofetarie
{
private:
	string nume;//
	int nrAngajati;//
	float* salarii;
	bool esteVegana;
	const int anDeschidere;
	float adaos;
	static int TVA;
public:
	Cofetarie() :adaos(30), anDeschidere(2024) {
		this->nume = "Delice";
		this->nrAngajati = 0;
		this->esteVegana = true;
		this->salarii = NULL;
	}


	Cofetarie(string nume, int nrAngajati, bool esteVegana, int an, float adaos) :anDeschidere(an)
	{
		this->nume = nume;
		this->nrAngajati = nrAngajati;
		this->esteVegana = esteVegana;
		this->adaos = adaos;
		this->salarii = new float[nrAngajati];
		for (int i = 0; i < nrAngajati; i++) {
			this->salarii[i] = 1000 + i * 100;
		}
	}
	
	Cofetarie(const Cofetarie& c) :anDeschidere(c.anDeschidere) {
		//string nume;

		this->nume = c.nume;

		//int nrAngajati;

		this->nrAngajati = c.nrAngajati;

		//float* salarii;

		this->salarii = new float[c.nrAngajati];
		for (int i = 0; i < c.nrAngajati; i++)
			this->salarii[i] = c.salarii[i];

		//bool esteVegana;

		this->esteVegana = c.esteVegana;

		//float adaos;

		this->adaos = c.adaos;
	}

	//DECONSTRUCTOR: ELIBERARI DIN MEMORIE HEAP:
	~Cofetarie()
	{
		if (this->salarii != NULL) {
			delete[]this->salarii;
		}
	}


	//functiile set si get:

	string getNume()
	{
		return this->nume;
	}

	void setNume(string nume)
	{
		if (nume.length() > 1) {
			//setam atributul nume
			this->nume = nume;
		}
	}
	int getNrAngajati() {
		return this->nrAngajati;
	}
	
	
	void setNrAngajati(int nrAngajati, float* salarii)
	{
		if (nrAngajati > 0) {
			this->nrAngajati = nrAngajati;
			if (this->salarii != NULL)
				delete[]this->salarii;
			this->salarii = new float[this->nrAngajati];
			for (int i = 0; i < this->nrAngajati; i++) {
				this->salarii[i] = salarii[i];
			}
		}
	}

	float* getSalarii()
	{
		return this->salarii;
	}

	

	float getSalariu(int index)
	{
		if (index >= 0 && index < this->nrAngajati) {
			return this->salarii[index];
		}
	}



	void afisare()
	{
		cout << "Nume: " << this->nume << endl;
		cout << "Nr. angajati: " << this->nrAngajati << endl;
		cout << "E vegana?: " << (this->esteVegana ? "da" : "nu") << endl;
		cout << "An deschidere: " << this->anDeschidere << endl;
		cout << "Adaos: " << this->adaos << endl;
		cout << "TVA: " << this->TVA << endl;
	}
	
	static void modificaTVA(int noulTVA)
	{
		if (noulTVA > 0)
			Cofetarie::TVA = noulTVA;
		
	}

	static int calculareNrTotalAngajati(int nrCofetarii, Cofetarie* vector)
	{
		int suma = 0;
		for (int i = 0; i < nrCofetarii; i++)
			suma += vector[i].nrAngajati;
		return suma;
	}

};

int Cofetarie::TVA = 9;

void f(Cofetarie c) {

}

int main()
{

	Cofetarie c;

	cout << c.getNume() << endl;
	c.setNume("");
	cout << c.getNume() << endl;
	c.setNume("Alt nume");
	cout << c.getNume() << endl;
	//initializare inline:
	c.setNrAngajati(4, new float[4] { 2, 6, 4, 9 });



	Cofetarie c2("Minimal", 3, false, 2020, 10);

	cout << c2.getSalarii()[1] << endl;
	cout << c2.getSalariu(1) << endl; 


	c2.setNrAngajati(5, new float[5] {1, 2, 3, 4, 5});
	cout << c2.getSalariu(3);

	Cofetarie c3(c2);
	Cofetarie c4 = c2;
	f(c4);
}