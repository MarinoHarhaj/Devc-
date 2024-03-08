//Ovaj program kopira tekst iz original fajla u novi stvoreni txt file.
//da bi ovaj program radio, original txt file mora biti u istom folderu kao i ovaj program da bi se mogla napraviti kopija.
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char nazivKopije[30];
	ifstream citanje("Original.txt", ios::binary);
	cout << "Unesi ime kopije: " << endl;
	cin >> nazivKopije;
	
	ofstream pisanje(nazivKopije);
	string red;
	while(getline(citanje, red))
	{
		pisanje << red << endl;
	}
	
	citanje.close();
	pisanje.close();
	
	return 0;
}
