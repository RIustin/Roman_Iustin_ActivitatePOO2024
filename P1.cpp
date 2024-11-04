#include<iostream>
#include<string>
using namespace std;


class FastFood
{
public:
	string denumireRestaurant;
	int nrAngajati;
	float suprafataMagazin;
	bool esteCuspecificItalian;
	bool esteNonStop;
	int nrPreparate;
	bool AreTerasa;
	float gramajmediu;

	FastFood(string denumireRestaurant, int nrAngajati, float suprafataMagazin,bool esteCuspecificItalian, bool esteNonStop, int nrPreparate, bool AreTerasa,float gramajmediu)
	{
		this->denumireRestaurant = denumireRestaurant;
		this->nrAngajati = nrAngajati;
		this->suprafataMagazin = suprafataMagazin;
		this->esteCuspecificItalian = esteCuspecificItalian;
		this->esteNonStop = esteNonStop;
		this->nrPreparate = nrPreparate;
		this->AreTerasa = AreTerasa;
		this->gramajmediu = gramajmediu;


		

	}
};

void main()
{
	FastFood f1("YESPizza", 12, 123.3, 1, 0, 23, 1, 250.34);
	FastFood f2("HanuBucatarului", 10, 234.54, 0, 0, 12, 1, 230.54);

}









class Spital
{
public:
	string denumireSpital;
	float suprafataMP;
	int nrPacienti;
	bool areSectiedepediatrie;
	int nrCadreMedicale;
	float taxamedieperinternare;


	Spital(string denumireSpital, float suprafataMP, int nrPacienti, bool areSectiedepediatrie, int nrCadreMedicale, float taxamedieperinternare)
	{
		this->denumireSpital= denumireSpital;
		this->suprafataMP = suprafataMP;
		this->nrPacienti = nrPacienti;
		this->areSectiedepediatrie= areSectiedepediatrie;
		this->nrCadreMedicale = nrCadreMedicale;
		this->taxamedieperinternare = taxamedieperinternare;

	}
};

void main()
{
	Spital s1("ReginaMaria",123.54,450,0,150,250.5 );
	Spital s2("MedLife", 400.54, 230, 0, 300, 220.56);
	Spital s3("CLinical", 230.54, 240, 1, 100, 230.54);

	
}







class Liceu
{
public:
	string denumireLiceu;
	float Suprafata;
	char ColegiuSauLiceu;
	bool Cugimnazialasaunu;
	int nrElevi;
	int nrCadredidactice;
	int bursaMedie;
	bool AreClasedupaamiaza;

	Liceu(string denumireLiceu, float Suprafata, char ColegiuSauLiceu, bool Cugimnazialasaunu, int nrElevi, int nrCadredidactice, int bursaMedie, bool AreClasedupamaiaza)
	{
		this->denumireLiceu = denumireLiceu;
		this->Suprafata = Suprafata;
		this->ColegiuSauLiceu = ColegiuSauLiceu;
		this->Cugimnazialasaunu = Cugimnazialasaunu;
		this->nrElevi = nrElevi;
		this->nrCadredidactice = nrCadredidactice;
		this->bursaMedie = bursaMedie;
		this->AreClasedupaamiaza = AreClasedupamaiaza;




	}

};
	void main()
	{
		Liceu l1("Colegiul Economic VIrgil Madgearu", 789.34, 'C', 0, 300, 50, 450, 1);
		Liceu l2("COlegiul National Victor Babes", 450.54, 'C', 1, 350, 67, 500, 1);
		Liceu l3("Liceul Ion Luca Caragiale", 500.54, 'L', 1, 500, 70, 550, 1);
	}





	class SuperMarket
	{
	public:
    
		string DenumireMarket;
		int NrAngajati;
		float SuprafataMp;
		bool esteNonStop;
		int StocDisponibil;
		bool AreEasybox;

		SuperMarket(string DenumireMarket, int NrAngajati, float SuprafataMP, bool esteNonStop, int StocDisponibil, bool AreEasybox)
		{
			this->DenumireMarket = DenumireMarket;
			this->NrAngajati = NrAngajati;
			this->SuprafataMp = SuprafataMP;
			this->esteNonStop = esteNonStop;
			this->StocDisponibil = StocDisponibil;
			this->AreEasybox = AreEasybox;

		}

	};

	void main()

	{
		SuperMarket SM1("YES", 12, 300.50, 1, 2532235235235, 0);
		SuperMarket SM2("LaLau", 15, 400.56, 0, 49416421298461, 1);
		SuperMarket SM3("LadoiPasi", 20, 500.53, 1, 1247812381548, 1);

	}




