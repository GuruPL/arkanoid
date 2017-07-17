#include <iostream>
#include <string>
using namespace std;
class osoba
{
public:
	string imie;
	osoba *next;
	osoba():next(NULL){}
};
class Lista
{
public:
	osoba *pierwszy;
	osoba *ostatni;
	Lista() :pierwszy(NULL){}
	void dodaj()
	{
		osoba *nowa = new osoba();
		cin >> nowa->imie;
		if (pierwszy==NULL)
		{
			ostatni = nowa;
			pierwszy = nowa;
		}
		else
		{
			while (ostatni->next)
			{
				ostatni = ostatni->next;
			}
			ostatni->next = nowa;
		}
	}
	void wypisz()
	{
			osoba *wsk;
			wsk = pierwszy;
			while (wsk)
			{
				cout << wsk->imie << endl;
				wsk = wsk->next;
			}
	}
	void usun()
	{
		osoba *wsk, *wsk2;
		wsk = pierwszy;
		while (wsk)
		{
			wsk2 = wsk->next;
			delete wsk;
			wsk = wsk2;
		}
	}
	void dodaj_na_poczatek()
	{
		osoba *nowa = new osoba();
		cin >> nowa->imie;
		osoba *tmp;
		tmp = pierwszy;
		pierwszy = nowa;
		pierwszy->next = tmp;
	}
};
int main()
{
	Lista *nowa = new Lista();
	nowa->dodaj();
	nowa->dodaj();
	nowa->dodaj();
	nowa->dodaj_na_poczatek();
	nowa->wypisz();
}

