#include<iostream>
#include<string>
using namespace std;





class Masina
{
	string marca;
	int greutateKG;
	float latimeCM;
	bool peDiesel;
	char Euro;
	const int NrRoti;
	static int OptiuneaAirBags;

public:

	Masina() :NrRoti(4)
	{
		this->marca = "Unknown";
		this->greutateKG = 0;
		this->latimeCM = 0;
		this->peDiesel = 0;
		this->Euro = 0;
	}


	Masina(string marca) :NrRoti(4)
	{
		this->marca = marca;
		this->greutateKG = 0;
		this->latimeCM = 0;
		this->peDiesel = 0;
		this->Euro = 0;

	}


	Masina(string marca, int greutateKG) :NrRoti(4)
	{
		this->marca = marca;
		this->greutateKG = greutateKG;
		this->latimeCM = 0;
		this->peDiesel = 0;
		this->Euro = 0;

	}



	Masina(string marca, int greutateKg, float latimeCM) :NrRoti(4)
	{
		this->marca = marca;
		this->greutateKG = greutateKg;
		this->latimeCM = latimeCM;
		this->peDiesel = 0;
		this->Euro = 0;

	}


	Masina(string marca, int greutateKG, float latimeCM, bool peDiesel) :NrRoti(4)
	{
		this->marca = marca;
		this->greutateKG = greutateKG;
		this->latimeCM = latimeCM;
		this->peDiesel = peDiesel;
		this->Euro = 0;
	}

	Masina(string marca, int greutateKg, float latimeCM, bool peDiesel, char Euro) :NrRoti(4)
	{
		this->marca = marca;
		this->greutateKG = greutateKg;
		this->latimeCM = latimeCM;
		this->peDiesel = peDiesel;
		this->Euro = Euro;
	}

	string getmarca()
	{
		return this->marca;
	}

	int getgreutateKG()
	{
		return this->greutateKG;
	}

	float getlatimeCM()
	{
		return this->latimeCM;
	}

	bool getpeDiesel()
	{
		return this->peDiesel;
	}

	char getEuro()
	{
		return this->Euro;
	}


	int getNrRoti()
	{
		return this->NrRoti;
	}


	void setmarca(string MarcaNoua)
	{
		this->marca = MarcaNoua;
	}

	void setgreutateKG(int greutateKGNoua)
	{
		this->greutateKG = greutateKGNoua;
	}

	void setlatimeCM(float latimeCMNoua)
	{
		this->latimeCM = latimeCMNoua;
	}

	void setpeDiesel(bool peDieselNoua)
	{
		this->peDiesel = peDieselNoua;
	}

	void setEuro(char EuroNou)
	{
		this->Euro = EuroNou;
	}

};


void main()
{
	Masina m1;
	cout << "Marca masini este:" << m1.getmarca() << endl;
	cout << "Greutatea masini este:" << m1.getgreutateKG() << endl;
	cout << "Latimea masinii este:" << m1.getlatimeCM() << endl;
	cout << "Masina este pe diesel?(0-NU/1-DA):" << m1.getpeDiesel() << endl;
	cout << "Masina are euro:" << m1.getEuro() << endl;
	cout << "Numar roti:" << m1.getNrRoti() << endl;
	cout << endl << endl;

	Masina m2("Audi");
	cout << "Marca masini este:" << m2.getmarca() << endl;
	cout << "Greutatea masini este:" << m2.getgreutateKG() << endl;
	cout << "Latimea masinii este:" << m2.getlatimeCM() << endl;
	cout << "Masina este pe diesel?(0-NU/1-DA):" << m2.getpeDiesel() << endl;
	cout << "Masina are euro:" << m2.getEuro() << endl;
	cout << "Numar roti:" << m2.getNrRoti() << endl;
	cout << endl << endl;





	Masina m3("Dacia", 2000);
	cout << "Marca masini este:" << m3.getmarca() << endl;
	cout << "Greutatea masini este:" << m3.getgreutateKG() << endl;
	cout << "Latimea masinii este:" << m3.getlatimeCM() << endl;
	cout << "Masina este pe diesel?(0-NU/1-DA):" << m3.getpeDiesel() << endl;
	cout << "Masina are euro:" << m3.getEuro() << endl;
	cout << "Numar roti:" << m3.getNrRoti() << endl;
	cout << endl << endl;


	Masina m4("Peugeot", 2100, 200);
	cout << "Marca masini este:" << m4.getmarca() << endl;
	cout << "Greutatea masini este:" << m4.getgreutateKG() << endl;
	cout << "Latimea masinii este:" << m4.getlatimeCM() << endl;
	cout << "Masina este pe diesel?(0-NU/1-DA):" << m4.getpeDiesel() << endl;
	cout << "Masina are euro:" << m4.getEuro() << endl;
	cout << "Numar roti:" << m4.getNrRoti() << endl;
	cout << endl << endl;

	Masina m5("Ferrari", 2500, 215, 0);
	cout << "Marca masini este:" << m5.getmarca() << endl;
	cout << "Greutatea masini este:" << m5.getgreutateKG() << endl;
	cout << "Latimea masinii este:" << m5.getlatimeCM() << endl;
	cout << "Masina este pe diesel?(0-NU/1-DA):" << m5.getpeDiesel() << endl;
	cout << "Masina are euro:" << m5.getEuro() << endl;
	cout << "Numar roti:" << m5.getNrRoti() << endl;
	cout << endl << endl;


	Masina m6("Volvo", 2800, 270, 1, 6);
	cout << "Marca masini este:" << m6.getmarca() << endl;
	cout << "Greutatea masini este:" << m6.getgreutateKG() << endl;
	cout << "Latimea masinii este:" << m6.getlatimeCM() << endl;
	cout << "Masina este pe diesel?(0-NU/1-DA):" << m6.getpeDiesel() << endl;
	cout << "Masina are euro:" << m6.getEuro() << endl;
	cout << "Numar roti:" << m6.getNrRoti() << endl;
	cout << endl << endl;


	cout << "____________________________________APEL SETTERI_____________________" << endl << endl;
	cout << "Obiectul m1 inainte de a apela setterii:" << endl << endl;
	cout << "Denumire marca:" << m1.getmarca() << endl;
	cout << "Greutatea masinii este:" << m1.getgreutateKG() << endl;
	cout << "Latimea masinii este:" << m1.getlatimeCM() << endl;
	cout << "Masina este pe diesel?(0-NU/1-DA)" << m1.getpeDiesel() << endl;
	cout << "Masina are euro:" << m1.getEuro() << endl;
	cout << "Numar roti:" << m1.getNrRoti() << endl;
	cout << endl << endl;

	m1.setmarca("Skoda");
	m1.setgreutateKG(2500);
	m1.setlatimeCM(210);
	m1.setpeDiesel(1);
	m1.setEuro(5);

	cout << "Obiectul m1 dupa ce au fost apelati setterii" << endl << endl;
	cout << "Denumire marca:" << m1.getmarca() << endl;
	cout << "Greutatea masinii este:" << m1.getgreutateKG() << endl;
	cout << "Latimea masinii este:" << m1.getlatimeCM() << endl;
	cout << "Masina este pe diesel?(0-NU/1-DA)" << m1.getpeDiesel() << endl;
	cout << "Masina are euro:" << m1.getEuro() << endl;
	cout << "Numar roti:" << m1.getNrRoti() << endl;


	cout << "____________________________________APEL SETTERI_____________________" << endl << endl;
	cout << "Obiectul m2 inainte de a apela setterii:" << endl << endl;
	cout << "Denumire marca:" << m2.getmarca() << endl;
	cout << "Greutatea masinii este:" << m2.getgreutateKG() << endl;
	cout << "Latimea masinii este:" << m2.getlatimeCM() << endl;
	cout << "Masina este pe diesel?(0-NU/1-DA)" << m2.getpeDiesel() << endl;
	cout << "Masina are euro:" << m2.getEuro() << endl;
	cout << "Numar roti:" << m2.getNrRoti() << endl;
	cout << endl << endl;

	m1.setmarca("Mercedes-Benz");
	m1.setgreutateKG(2700);
	m1.setlatimeCM(240);
	m1.setpeDiesel(0);
	m1.setEuro(6);

	cout << "Obiectul m2 dupa ce au fost apelati setterii" << endl << endl;
	cout << "Denumire marca:" << m2.getmarca() << endl;
	cout << "Greutatea masinii este:" << m2.getgreutateKG() << endl;
	cout << "Latimea masinii este:" << m2.getlatimeCM() << endl;
	cout << "Masina este pe diesel?(0-NU/1-DA)" << m2.getpeDiesel() << endl;
	cout << "Masina are euro:" << m2.getEuro() << endl;
	cout << "Numar roti:" << m2.getNrRoti() << endl;


};
