#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	int liczba, strzal, proby=0;
	cout << "Witaj pomyslalem sobie liczbe z zakresu od 1 do 100" << endl;
	srand(time(NULL));
	liczba = rand()%100+1;

	while(strzal !=liczba)
	{
		proby++;
		cout << "Zgadnij jaka(to Twoja "<< proby <<" proba): " << endl;
		cin >> strzal;
		if(strzal==liczba)
			cout << "Udalo sie wygrywasz w " << proby <<" probie!" << endl;
		else if(strzal<liczba)
			cout << "To za malo!" << endl;
		else if(strzal>liczba)
			cout << "To za duzo!" << endl;
	}
	system("pause");
}
