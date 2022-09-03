#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
#include <conio.h>


using namespace std;
int main() {

    string nomb, clasif, genero, carac, descrip, consola;
    int codigo, fecha;
    int opc;
    float preuni, pretot, impuesto;

    cout << "\t /////****-Bienvenido a Gamerteca-****/////" << endl;
    cout << " 1.-AGREGAR ARTICULO\n 2.-MODIFICAR ARTICULO\n 3.-ELIMINAR PRODUCTO\n 4.-ARTICULOS VIGENTES\n 5.-LIMPIAR PANTALLA\n 6.-SALIR\n";
    cout << "\t //////////////////////////////////////////" << endl;
    cin >> opc;

    switch (opc)
    {
    case 1:
        
        cout << "Ingrese el numero del juego" << endl;
        cin >> codigo;
        cout << "Ingrese el año de lanzamiento de su juego, porfavor" << endl;
        cin >> fecha;
        cout << "Ingrese el nombre del juego" << endl;
        cin.ignore();
        getline(cin, nomb);
        cout << "Ingrese la clasificacion del juego" << endl;
        cin.ignore();
        getline(cin, clasif);
        cout << "Ingrese el genero del juego" << endl;
        cin.ignore();
        getline(cin, genero);
        cout << "Ingrese las caracteristicas del juego" << endl;
        cin.ignore();
        getline(cin, carac);
        cout << "Ingrese la descripcion del juego" << endl;
        cin.ignore();
        getline(cin, descrip);
        cout << "Ingrese la consola del juego" << endl;
        cin.ignore();
        getline(cin, consola);
        cout << "Ingrese el precio del juego" << endl;
        cin >> preuni;

        return main();
        break;
    case 2:
        cout << "\t /////PAGINA EN DESARROLLO!! MUY PRONTO!!/////" << endl;
        system("pause");

        return main();

        break;

    case 3:
        cout << "\t /////PAGINA EN DESARROLLO!! MUY PRONTO!!/////" << endl;
        system("pause");

        return main();

        break;

    case 4:
        cout << "\t /////PAGINA EN DESARROLLO!! MUY PRONTO!!/////" << endl;
        system("pause");

        return main();

        break;

    case 5:

        cout << "\t /////****-Regresando al inicio-****/////" << endl;
        system("pause");
        system("cls");
        return main();

        break;

    case 6:
        cout << "\t /////****-Muchas Gracias Vuelva Pronto-****/////" << endl;
        break;
    }

}