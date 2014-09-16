/*Harjoitus 5
Sami Liimatainen
IIO14S1
16.9.2014
Versio 1.1

a) Kirjoita, tallenna ja suorita ym. ohjelma.
b) Kommentoi ylla olevan esimerkin kaikki rivit (mit‰ rivill‰ tapahtuu).
c) Muuta vakioden nimet niin, ett‰
MAX => MINIMI
max => MAKSIMI

Tarkoitus on tulostaa ohjelmalla seuraavat ilmoitukset:
Summa on pienempi kuin MINIMI
Summa on suurempi kuin MAKSIMI
Summa on MINIMIN ja MAKSIMIN v‰liss‰*/

#include <iostream> //input output stream, m‰‰rittelee mit‰ syˆttˆ/tulostus palveluita on k‰ytett‰viss‰
using namespace std; //suurten ohjelmien ominaisuus, nimiavaruuus

//vakioden m‰‰rittely
#define MINIMI 10 //MAX vakion arvoksi on m‰‰ritelty 10, yleens‰ kirjoitettu isolla, vanha tapa
const int MAKSIMI = 20; // max vakion arvoksi on m‰‰ritelty 20 ja kokonaisluku, vakiot aina isolla sekaannusten minimoinniksi, uusi suositeltava tapa

//julkisten muuttujien m‰‰rittely
int summa; //summa muuttuja joka on kokonaisluku

//aliohjelmien esim‰‰rittely
void Laske(int, int);

//p‰‰ohjelma
void main() //p‰‰ohjelman m‰‰rittely aaltosulkujen sis‰ll‰
{
	//m‰‰ritell‰‰n paikallisia muuttujia
	int luku1 = 2; //luku1 on arvoltaan 2
	int luku2; //luku2, ei ole viel‰ arvoa, voi olla mik‰ tahansa
	cout << "Syˆt‰ luku: "; //ilmoitetaan k‰ytt‰j‰lle ett‰ tarvitaan luku, character out
	cin >> luku2; //k‰ytt‰j‰ syˆtt‰‰ arvon luku2:lle, character in
	Laske(luku1, luku2); //Kutsutaan aliohjelma Laske

	if (MINIMI < summa && summa < MAKSIMI)
	{
		cout << "Summa on lukujen " << MINIMI;
		cout << " ja " << MAKSIMI;
		cout << " v‰liss‰\n";
	}

	if (summa < MINIMI) //jos luku1 + luku2 on suurempi kuin MAX niin toteutetaan seuraava rivi
		cout << "Summa on pienempi kuin " << MINIMI; //jos yll‰ oleva summa on pienempi kuin 10 tulostetaan t‰m‰
	else
		cout << "Summa on suurempi kuin " << MINIMI; //jos yll‰ oleva summa on suurempi kuin 10 tulostetaan t‰m‰

	if
		(summa < MAKSIMI) //jos luku1 + luku2 on suurempi kuin max niin toteutetaan seuraava rivi
		cout << "\nSumma on pienempi kuin " << MAKSIMI; //jos yll‰ oleva jos on tosi niin tulostetaan
	else
		cout << "\nSumma on suurempi kuin " << MAKSIMI; //jos yll‰ oleva summa on pienempi kuin 10 tulostetaan t‰m‰
		cout << "\n";
}
//aliohjelman m‰‰ritys
void Laske(int eka, int toka)
{
	summa = eka + toka; //summan arvo lasketaan eka + toka
}