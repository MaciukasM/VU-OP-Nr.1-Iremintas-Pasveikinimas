#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string vardas;
    cout << "Iveskite savo varda:" << endl;
    cin >> vardas;

    int tarpas;
    bool ArIvestas=0; //tikrinimui, ar ivestas tarpas yra skaicius
    do
    {
        cout << "Iveskite tarpa tarp remelio ir vardo (nuo 0 iki 15): " << endl;
        cin >> tarpas;
        //tikrinam ar ivestas tarpas yra skaicius/tinka intervalui
        if (tarpas < 0 || tarpas > 15 || !cin)
        {
          cout << "Iveskite tarpa is naujo." << endl;
          cin.clear();
          cin.ignore(10000, '\n'); //praleidziam netinkama ivedima
        } 
        else ArIvestas = 1;
    } while (ArIvestas==0);

    int eilSk = tarpas * 2 + 3; //visos vizitines korteles eiluciu skaicius

    string eil[eilSk]; // eilutes saugomos masyve

    char PaskRaide = vardas.back(); //randam paskutine raide

    string plotis(tarpas,' '); //tarpas is sonu tarp vardo ir zvaigzduciu

    //vidurine eilute
    if (PaskRaide == 's')
    {
        eil[eilSk / 2] = "*" + plotis + "Sveikas, " + vardas + "!" + plotis + "*";
    }
    else eil[eilSk / 2] = "*" + plotis + "Sveika, " + vardas + "!" + plotis + "*";

    int ilgis = eil[eilSk / 2].length();
    string zvaigzdutes(ilgis, '*'); //padarom kintamaji, kuris susideda is atitinkamo kiekio zvaigzduciu

    eil[0] = zvaigzdutes;
    eil[eilSk - 1] = zvaigzdutes;

    string tusciosEil(ilgis - 2, ' ');

    for (int i = 1; i <= eilSk - 2; i++)
    {
        if (i != eilSk / 2)
        {
            eil[i]= "*" + tusciosEil + "*";
        }
    }

    for (int i = 0; i < eilSk; i++)
    {
        cout << eil[i] << endl;
    }
    return 0;
}
