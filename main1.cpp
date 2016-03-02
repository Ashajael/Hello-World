//something
#include <iostream>
int main (void)
{using namespace std;
cout << "Hola mundo"<< endl ;
cout << "test" << endl ;
int a , b , c , d (2) ; //declarar variables dentro de la funcion main
a = 6 ; // asignar variables y trabajo de variables
b = a ;
c = a + b ;
cout << c << endl;

string word ("mystring") ;   //Uso de strings para guardas textos(objetos) tambien pueden ser inicializadas con () y {}
 cout << word << endl ; 
 word = "other string" ;     //Cambio del contenido del string
cout << word << endl;
cout << d ;                 // Uso de la variable d declarada inicialmente con el metodo () 
return 0;
}
