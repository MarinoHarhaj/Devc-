//ovaj program nam daje opciju da upisemo tekst u file te da taj tekst ispise na ekranu
#include <iostream>

#include <fstream>

using namespace std;


int main (){
	
	
ofstream varijabla ("file.txt", ios::app);

string red;

cout<<"unesite neki tekst: "<<endl;

getline(cin,red);

varijabla<<red<<endl;

cout<<"tekst ispisan na ekranu je: "<<red<<endl; 

varijabla.close();



return 0;	
	
	
	
	
}
