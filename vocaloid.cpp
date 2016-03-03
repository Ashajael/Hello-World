// minijuego de vocaloid
#include <iostream>

int main ()
{using namespace std;
 string voc;
 cout << "Hola me gustan mucho los vocaloids.\nCual es el nombre de tu favorito?\n";
 getline (cin,voc);
 cout << "No me gusta mucho "<<voc<< " prefiero a Honne Dell.\n";
 cout << "Y hay alguno que te moleste, te caiga mal o te disguste? Me podrias decir su nombre??\n";
 getline (cin, voc);
 cout << "Pues a mi me encanta " << voc;
 }
