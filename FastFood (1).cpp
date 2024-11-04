#include<iostream>
#include<string>
using namespace std;

class FastFood
{
	string denumireRestaurant;
	int nrAngajati;
	float suprafataRestaurant;
	bool esteCuspecificItalian;

	const int anInfiintare;
	static int clasaCAENPrincipala;
public:

	FastFood() :anInfiintare(2012)
	{
		this->denumireRestaurant = "Necunoscut";
		this->nrAngajati = 0;
		this->suprafataRestaurant = 0;
		this->esteCuspecificItalian = 0;
	}

	FastFood(string denumireRestaurant) :anInfiintare(2015)
	{
		this->denumireRestaurant = denumireRestaurant;
		this->nrAngajati = 0;
		this->suprafataRestaurant = 0;
		this->esteCuspecificItalian = 0;

	}

	FastFood(string denumireRestaurant, int nrAngajati) :anInfiintare(2016)
	{
		this->denumireRestaurant = denumireRestaurant;
		this->nrAngajati = nrAngajati;
		this->suprafataRestaurant = 0;
		this->esteCuspecificItalian = 0;

	}

	FastFood(string denumireRestaurant, int nrAngajati, float suprafataRestaurant) :anInfiintare(2009)
	{
		this->denumireRestaurant = denumireRestaurant;
		this->nrAngajati = nrAngajati;
		this->suprafataRestaurant = suprafataRestaurant;
		this->esteCuspecificItalian = 0;

	}

	FastFood(string denumireRestaurant, int nrAngajati, float suprafatRestaurant, bool esteCuspecificItalian, int anInfiintare) :anInfiintare(anInfiintare)
	{
		this->denumireRestaurant = denumireRestaurant;
		this->nrAngajati = nrAngajati;
		this->suprafataRestaurant = suprafatRestaurant;
		this->esteCuspecificItalian = esteCuspecificItalian;
	}



	string getdenumireRestaurant()
	{
		return this->denumireRestaurant;
	}

	int getnrAngajati()
	{
		return this->nrAngajati;
	}

	float getsuprafataRestaurant()
	{
		return this->suprafataRestaurant;
	}

	bool getesteCuSpecificItalian()
	{
		return this->esteCuspecificItalian;
	}

	int getAnInfiintare()
	{
		return this->anInfiintare;
	}



	void setdenumireRestaurant(string denumireNouaRestaurant)
	{
		this->denumireRestaurant = denumireNouaRestaurant;
	}

	void setnrAngajati(int nrNouAngajati)
	{
		this->nrAngajati = nrNouAngajati;
	}

	void setsuprafataRestaurant(float supraftaNouaRestaurant)
	{
		this->suprafataRestaurant = supraftaNouaRestaurant;
	}

	void setesteCuspecificItalian(bool esteCuspecificItalianValNoua)
	{
		this->esteCuspecificItalian = esteCuspecificItalianValNoua;
	}
};

int FastFood::clasaCAENPrincipala = 48;

void main()
{
	FastFood f1;
	cout << "Denumire restaurant:" << f1.getdenumireRestaurant() << endl;
	cout << "Numar angajati:" << f1.getnrAngajati() << endl;
	cout << "Suprafata Restaurant:" << f1.getsuprafataRestaurant() << endl;
	cout << "Este cu specific Italian?(0-NU,1-DA)" << f1.getesteCuSpecificItalian() << endl;
	cout << "An infiintare:" << f1.getAnInfiintare() << endl;
	cout << endl << endl;


	FastFood f2("Pizzeria YES");
	cout << "Denumire restaurant:" << f2.getdenumireRestaurant() << endl;
	cout << "Numar angajati:" << f2.getnrAngajati() << endl;
	cout << "Suprafata Restaurant:" << f2.getsuprafataRestaurant() << endl;
	cout << "Este cu specific Italian?(0-NU,1-DA)" << f2.getesteCuSpecificItalian() << endl;
	cout << "An infiintare:" << f2.getAnInfiintare() << endl;
	cout << endl << endl;


	FastFood f3("Hanul Bucatarului", 12);
	cout << "Denumire restaurant:" << f3.getdenumireRestaurant() << endl;
	cout << "Numar angajati:" << f3.getnrAngajati() << endl;
	cout << "Suprafata Restaurant:" << f3.getsuprafataRestaurant() << endl;
	cout << "Este cu specific Italian?(0-NU,1-DA)" << f3.getesteCuSpecificItalian() << endl;
	cout << "An infiintare:" << f3.getAnInfiintare() << endl;
	cout << endl << endl;


	FastFood f4("La umbrelute", 15, 234.56);
	cout << "Denumire restaurant:" << f4.getdenumireRestaurant() << endl;
	cout << "Numar angajati:" << f4.getnrAngajati() << endl;
	cout << "Suprafata Restaurant:" << f4.getsuprafataRestaurant() << endl;
	cout << "Este cu specific Italian?(0-NU,1-DA)" << f4.getesteCuSpecificItalian() << endl;
	cout << "An infiintare:" << f4.getAnInfiintare() << endl;
	cout << endl << endl;


	FastFood f5("LaCosta", 16, 200.54, 1,2020);
	cout << "Denumire restaurant:" << f5.getdenumireRestaurant() << endl;
	cout << "Numar angajati:" << f5.getnrAngajati() << endl;
	cout << "Suprafata Restaurant:" << f5.getsuprafataRestaurant() << endl;
	cout << "Este cu specific Italian?(0-NU,1-DA)" << f5.getesteCuSpecificItalian() << endl;
	cout << "An infiintare:" << f5.getAnInfiintare() << endl;
	cout << endl << endl;


	cout << "____________________________________APEL SETTERI__________________________" << endl << endl;
	cout << "Obiectul m1 inainte de a apela setterii:" << endl << endl;
	cout << "Denumire restaurant:" << f1.getdenumireRestaurant() << endl;
	cout << "Numar de angajati:" << f1.getnrAngajati() << endl;
	cout << "Suprafata restaurant:" << f1.getsuprafataRestaurant() << endl;
	cout << "Este cu specific italian?(0-NU/1-DA)" << f1.getesteCuSpecificItalian() << endl;
	cout << "An infiintare:" << f1.getAnInfiintare() << endl;
	cout << endl << endl;


	f1.setdenumireRestaurant("LaMalu");
	f1.setnrAngajati(45);
	f1.setsuprafataRestaurant(212.54);
	f1.setesteCuspecificItalian(1);


	cout << "Obiectul f1 dupa ce au fost apleati setterii" << endl << endl;
	cout << "Denumire restaurant:" << f1.getdenumireRestaurant() << endl;
	cout << "Numar de angajati:" << f1.getnrAngajati() << endl;
	cout << "Suprafata restaurant:" << f1.getsuprafataRestaurant() << endl;
	cout << "Este cu specific italian?(0-NU/1-DA)" << f1.getesteCuSpecificItalian() << endl;
	cout << "An infiintare:" << f1.getAnInfiintare() << endl;
	cout << endl << endl;
}

















































































//class Spital
//{
//public:
//	string denumireSpital;
//	float suprafataMP;
//	int nrPacienti;
//	bool areSectiedepediatrie;
//	int nrCadreMedicale;
//	float taxamedieperinternare;
//
//
//	Spital(string denumireSpital, float suprafataMP, int nrPacienti, bool areSectiedepediatrie, int nrCadreMedicale, float taxamedieperinternare)
//	{
//		this->denumireSpital = denumireSpital;
//		this->suprafataMP = suprafataMP;
//		this->nrPacienti = nrPacienti;
//		this->areSectiedepediatrie = areSectiedepediatrie;
//		this->nrCadreMedicale = nrCadreMedicale;
//		this->taxamedieperinternare = taxamedieperinternare;
//
//	}
//};
//
//void main()
//{
//	Spital s1("ReginaMaria", 123.54, 450, 0, 150, 250.5);
//	Spital s2("MedLife", 400.54, 230, 0, 300, 220.56);
//	Spital s3("CLinical", 230.54, 240, 1, 100, 230.54);
//
//
//}
//
//
//
//
//
//
//
//class Liceu
//{
//public:
//	string denumireLiceu;
//	float Suprafata;
//	char ColegiuSauLiceu;
//	bool Cugimnazialasaunu;
//	int nrElevi;
//	int nrCadredidactice;
//	int bursaMedie;
//	bool AreClasedupaamiaza;
//
//	Liceu(string denumireLiceu, float Suprafata, char ColegiuSauLiceu, bool Cugimnazialasaunu, int nrElevi, int nrCadredidactice, int bursaMedie, bool AreClasedupamaiaza)
//	{
//		this->denumireLiceu = denumireLiceu;
//		this->Suprafata = Suprafata;
//		this->ColegiuSauLiceu = ColegiuSauLiceu;
//		this->Cugimnazialasaunu = Cugimnazialasaunu;
//		this->nrElevi = nrElevi;
//		this->nrCadredidactice = nrCadredidactice;
//		this->bursaMedie = bursaMedie;
//		this->AreClasedupaamiaza = AreClasedupamaiaza;
//
//
//
//
//	}
//
//};
//void main()
//{
//	Liceu l1("Colegiul Economic VIrgil Madgearu", 789.34, 'C', 0, 300, 50, 450, 1);
//	Liceu l2("COlegiul National Victor Babes", 450.54, 'C', 1, 350, 67, 500, 1);
//	Liceu l3("Liceul Ion Luca Caragiale", 500.54, 'L', 1, 500, 70, 550, 1);
//}
//
//
//
//
//
//class SuperMarket
//{
//public:
//
//	string DenumireMarket;
//	int NrAngajati;
//	float SuprafataMp;
//	bool esteNonStop;
//	int StocDisponibil;
//	bool AreEasybox;
//
//	SuperMarket(string DenumireMarket, int NrAngajati, float SuprafataMP, bool esteNonStop, int StocDisponibil, bool AreEasybox)
//	{
//		this->DenumireMarket = DenumireMarket;
//		this->NrAngajati = NrAngajati;
//		this->SuprafataMp = SuprafataMP;
//		this->esteNonStop = esteNonStop;
//		this->StocDisponibil = StocDisponibil;
//		this->AreEasybox = AreEasybox;
//
//	}
//
//};
//
//void main()
//
//{
//	SuperMarket SM1("YES", 12, 300.50, 1, 2532235235235, 0);
//	SuperMarket SM2("LaLau", 15, 400.56, 0, 49416421298461, 1);
//	SuperMarket SM3("LadoiPasi", 20, 500.53, 1, 1247812381548, 1);
//
//}