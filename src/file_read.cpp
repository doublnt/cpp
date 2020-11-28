#include <iostream>
#include <fstream>

using namespace std;

int main(){
    auto s = "d://Working//Paractice//cpp//doc//word.txt";
    fstream fstrm;
    fstrm.open(s);
    string line;

    while(getline(fstrm, line)){
	    cout << line << endl;
    }

    cout << fstrm.is_open() << endl;
    fstrm.close();
}
