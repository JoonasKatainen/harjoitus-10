#include <iostream>
using namespace std;
int main()
{
	double luku;
	int positiiviset, negatiiviset, lkm;
	double positiivisetprs, negatiivisetprs, lkmprs;
	positiiviset = 0;
	negatiiviset = 0;
	lkm = 0;
	cout << "Ohjelma laskee positiivisten ja negatiivisten lukujen määrät annetuista luvuista"<<endl<<"Lopeta lukujen syöttäminen syöttämällä 0"<<endl;
	do
	{
		cin >> luku;
			if( luku > 0 ) positiiviset++;
			if(luku < 0) negatiiviset++;
			if(luku == 0){
			}
			else
			lkm++;
	}while( luku != 0 );
		positiivisetprs = (double)positiiviset / (double)lkm * 100;
		negatiivisetprs = (double)negatiiviset / (double)lkm * 100;
		lkmprs = (double)lkm / (double)lkm * 100;
	cout << "Syötit kokonaislukuja seuraavasti:"<<endl<<"----------------------------------"<<endl;
	cout << "Negatiiviset "<<negatiiviset<<" kpl "<<negatiivisetprs<<"%"<<endl;
	cout << "Positiiviset "<<positiiviset<<" kpl "<<positiivisetprs<<"%"<<endl;
	cout << "Yhteensä "<<lkm<<" kpl "<<lkmprs<<"%"<<endl;
return 0;
}