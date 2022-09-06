#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
#include <conio.h>
//Estas son las librerias que se utilizaron para el correcto funcionamiento del programa solicitado.

using namespace std;
int main() {

    string nomb, clasif, genero, carac, descrip, consola;//Se declaran las variables como string para poder escribir mas caracteres y que sean letras.
    int codigo, fecha;//Se declara las variables de codigo y año de lanzamiento como enteros.
    int opc;//Se declara como entero la variable de opcion
    float preuni;//Se utiliza un float para poder ingresar precios con decimales.

    cout << "\t /////****-Bienvenido a Gamerteca-****/////" << endl;
    cout << "\t ****-Ingrese una opcion porfavor.-****" << endl;//Aqui se le pide al usuario ingresar el numero de la opcion.
    cout << " 1.-AGREGAR ARTICULO\n 2.-MODIFICAR ARTICULO\n 3.-ELIMINAR PRODUCTO\n 4.-ARTICULOS VIGENTES\n 5.-LIMPIAR PANTALLA\n 6.-SALIR\n";//Estas son las opciones a elegir.
    cout << "\t //////////////////////////////////////////" << endl;
    cin >> opc;

    switch (opc)
    {
    case 1:

        cout << "Ingrese el numero del juego" << endl;//Se solicita los valores que fueron declarados como enteros, en este caso la variable codigo y fecha.
        cin >> codigo;
        cout << "Ingrese el año de lanzamiento de su juego, porfavor" << endl;
        cin >> fecha;
        cout << "Ingrese el nombre del juego" << endl;
        cin.ignore();//El cin ignore nos ayuda a que no se ignore el primer espacio, para que asi, no se salte la primera solicitud, en este caso ingresar el nombre del juego.
        getline(cin, nomb);//El getline nos permite ingresar oraciones con espacios entre las palabras.
        cout << "Ingrese la clasificacion del juego" << endl;
        cin.ignore();
        getline(cin, clasif);//Se escribe la clasificacion del juego.
        cout << "Ingrese el genero del juego" << endl;
        cin.ignore();
        getline(cin, genero);//Se escribe el genero del juego.
        cout << "Ingrese las caracteristicas del juego" << endl;
        cin.ignore();
        getline(cin, carac);//Se escriben las caracteristicas del juego.
        cout << "Ingrese la descripcion del juego" << endl;
        cin.ignore();
        getline(cin, descrip);//Se escribe la descripcion del juego.
        cout << "Ingrese la consola del juego" << endl;
        cin.ignore();
        getline(cin, consola);//Se escribe la consola del juego.
        cout << "Ingrese el precio del juego" << endl;
        cin >> preuni;//Se escribe el precio del juego, que en este caso, se pueden ingresar decimales ya que fue declarada como una variable flotante.

        return main();
        break;//El break sirve para dar fin a uno de los casos del switch.
    case 2:
        cout << "\t /////PAGINA EN DESARROLLO!! MUY PRONTO!!/////" << endl;
        system("pause");//En este caso como la pagina sigue en desarrollo, si seleccionamos la opcion 2 nos saltara este mensaje y se pausara la pantalla hasta que presionemos enter.

        return main();//El return main nos ayuda a volver al inicio, sin necesidad de reiniciar el programa.

        break;

    case 3:
        cout << "\t /////PAGINA EN DESARROLLO!! MUY PRONTO!!/////" << endl;
        system("pause");//La pagina sigue en desarrollo y en la opcion 3 saltara el mensaje y nos regresara al inicio.

        return main();

        break;

    case 4:
        cout << "\t /////PAGINA EN DESARROLLO!! MUY PRONTO!!/////" << endl;
        system("pause");//La pagina sigue en desarrollo y en la opcion 4 saltara el mensaje y nos regresara al inicio.

        return main();

        break;

    case 5:

        cout << "\t /////****-Regresando al inicio-****/////" << endl;//Seleccionamos esta opcion para limpiar la pantalla, nos lanzara este mensaje.
        system("pause");//Se pausara la pantalla y presionaremos enter.
        system("cls");//El system cls(clear) nos limpiara la pantalla con todo el contenido que hayamos puesto.
        return main();//El return main nos regresara al inicio y podramos volver a escoger otra opcion.

        break;

    case 6:
        cout << "\t /////****-Muchas Gracias Vuelva Pronto-****/////" << endl;//Al ser esta opcion la salida, nos dara un agradecimiento por entrar al programa.
        break;//El break termina el caso 6 y se cierra el programa.

    default:
        cout << "\t /////****-Ingrese una opcion correcta, porfavor-****/////" << endl;//El default nos dira un mensaje el cual nos pedira otra vez poner el numero de la opcion.
        return main();//Esto es en caso para cuando se ingrese el numero de opcion incorrecto de las opciones disponibles. Por ejemplo de 6 opciones disponibles ingresemos el 7.
    }

}