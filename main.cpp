#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string vardas;
    cout << "Iveskite savo varda:" << endl;
    cin >> vardas;

    string eil1, eil2, eil3, eil4, eil5; 

    eil3 = "* Sveikas, " + vardas + "! *"; //vidurine eilute
    
    int ilgis = eil3.length();
    string zvaigzdutes(ilgis,'*'); //padarom kintamaji, kuris susideda is atitinkamo kiekio zvaigzduciu

    //priskiriam ta kintamaji
    eil1 = zvaigzdutes;
    eil5 = zvaigzdutes;

    //ta pati padarom su eilutem, kurios susideda is zvaigzdutes+tarpu+zvaigzdutes
    string tarpai(ilgis - 2, ' ');
    eil2 = "*" + tarpai + "*";
    eil4 = "*" + tarpai + "*";
    
    cout << eil1 << endl;
    cout << eil2 << endl;
    cout << eil3 << endl;
    cout << eil4 << endl;
    cout << eil5 << endl;
    return 0;
}
