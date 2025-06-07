#include <iostream>
using namespace std;

int main ()
{
    int opcion;
    int user, carnet = 123456;
    int nota1, nota2, nota3;
    cout << "ingre nombre:"<< endl;
    cin >> user;

    cout << "ingrese codigo:" << endl;
    cin >> carnet;

    cout << "Menu" << endl;
    cout << "1 agregar nota." << endl;
    cout << "2 consultar todas las notas." << endl;
    cout << "3 calcular promedio" << endl;
    cout << "4 salir" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:

    do
    {
     cout << "ingrese su primera nota" << cin >> nota1;
    } while ( 0 >not1 <=10);

    do
    {
     cout <<" ingrese su segunda nota"<< endl;
        cin >> not1;
    } while ( 0> not2 <=10);

    do
    {
     cout <<" ingrese su segunda nota"<<endl;
        cin >> not3;
    } while ( 0> nota3 <=10);

        break;

    case 2:
    
    
    default:
        cout << "COSA QUE NO EXISTE" << endl;
        break;
    }

    return 0;
}