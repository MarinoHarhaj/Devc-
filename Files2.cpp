//umjesto koristenja cin, koristenjem getline mozemo u txt file upisat vise redova
#include <iostream>
#include <fstream>

using namespace std;

int main (){
	
	ofstream sejvam("grupaA.txt", ios::app);
	
	string bla;
	
   cout<<"unesite neki tekst"<<endl;
   
    getline(cin, bla);
    
    sejvam << bla << endl;
    
    sejvam.close();
	
		
}
