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
			osoba *temp = pierwszy;
			while (temp->next)
			{
				temp = temp->next;
			}
			temp->next = nowa;
			ostatni = nowa;
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
};
int main()
{
	Lista *nowa = new Lista();
	nowa->dodaj();
	nowa->dodaj();
	nowa->dodaj();
	osoba *wsk = nowa->pierwszy->next->next;
	nowa->usun();
	cout << wsk->imie;
}

