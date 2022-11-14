#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
//Estas son las librerias que se utilizaron para el correcto funcionamiento del programa solicitado.

using namespace std;

string busqgen, busqclas, * nomb, * clasif, * genero, * carac, * descrip, * consola;//Se declaran las variables como string para poder escribir mas caracteres y que sean letras.
int  * codigo, * fecha, registros, desi;//Se declara las variables de codigo y año de lanzamiento como enteros.
float* iva, * pretot, * preuni;//Se utiliza un float para poder ingresar precios con decimales.

void menu();
void ingresar();
void arch();
void elim();
void lista();
void modificar();
int main() {


    menu();
    
}




void menu()
{

    int opc;//Se declara como entero la variable de opcion

    printf("\t /////****-Bienvenido a Gamerteca-****/////\n");
    printf("\t ****-Ingr%cse una opci%cn porfavor.-****\n", 130, 162);//Aqui se le pide al usuario ingresar el numero de la opcion.
    printf(" 1.-AGREGAR ART%cCULO\n 2.-MODIFICAR ART%cCULO\n 3.-ELIMINAR ART%cCULO\n 4.-ART%cCULOS VIGENTES\n 5.-LIMPIAR PANTALLA\n 6.-SALIR\n", 214, 214, 214, 214);//Estas son las opciones a elegir.
    printf("\t //////////////////////////////////////////\n");
    scanf_s("%d", &opc);

    switch (opc)
    {
    case 1:

        ingresar();
        system("pause");
        return menu();
        break;//El break sirve para dar fin a uno de los casos del switch.
    case 2:
        modificar();
        system("pause");
        return menu();

        break;

    case 3:
        elim();
        system("pause");
        return menu();
        break;

    case 4:
        lista();
        system("pause");
        return menu();
        break;

    case 5:

        printf("\t /////****-Regresando al inicio-****/////\n");//Seleccionamos esta opcion para limpiar la pantalla, nos lanzara este mensaje.
        system("pause");
        system("cls");//El system cls(clear) nos limpiara la pantalla con todo el contenido que hayamos puesto.
        return menu();
        break;

    case 6:
        printf("\t /////****-Muchas Gracias Por Usar Los Servicios De Gamerteca-****/////\n");//Al ser esta opcion la salida, nos dara un agradecimiento por entrar al programa.
        printf("\t /////****-Vuelva Pronto-****/////\n");
        arch();
        exit(1);
        break;//El break termina el caso 6 y se cierra el programa.

    default:
        printf("\t /////****-Ingrese una opci%cn correcta, porfavor-****/////\n", 162);//El default nos dira un mensaje el cual nos pedira otra vez poner el numero de la opcion.
        return menu();
        break;
    }
}


void ingresar()
{
    printf("Ingrese el numero de registros que desea hacer\n");
    scanf_s("%d", &registros);

    codigo = new int[registros];
    fecha = new int[registros];
    nomb = new string[registros];
    clasif = new string[registros];
    genero = new string[registros];
    carac = new string[registros];
    descrip = new string[registros];
    consola = new string[registros];
    preuni = new float[registros];
    iva = new float[registros];
    pretot = new float[registros];


    for (int i = 0; i < registros; i++)
    {

        
        
        int n = 1;
        
            printf("Ingr%cse el c%cdigo del juego: \n", 130, 162);
            scanf_s("%d", &codigo[i]);
            do
            { 
            if (codigo[i] == codigo[i - n])
            {
                printf("El c%cdigo de juego ya existe \n", 162);
                printf("Ingrese otro juego\n");
                scanf_s("%d", &codigo[i]);
            }
            else
            {
                n = n + 1;
            }
        } while (n <= i);

        printf("Ingr%cse el a%co de lanzamiento de su juego: \n", 130, 164);
        scanf_s("%d", &fecha[i]);
        printf("Ingr%cse el nombre del juego: \n", 130);
        cin.ignore();//El cin ignore nos ayuda a que no se ignore el primer espacio, para que asi, no se salte la primera solicitud, en este caso ingresar el nombre del juego.
        getline(cin, nomb[i]);//El getline nos permite ingresar oraciones con espacios entre las palabras.
        printf("Ingr%cse la clasificaci%cn del juego: \n", 130, 162);

        getline(cin, clasif[i]);//Se escribe la clasificacion del juego.
        printf("Ingr%cse el genero del juego: \n", 130);

        getline(cin, genero[i]);//Se escribe el genero del juego.
        printf("Ingr%cse las caracter%csticas del juego: \n", 130, 161);

        getline(cin, carac[i]);//Se escriben las caracteristicas del juego.
        printf("Ingr%cse la descripcion del juego: \n", 130);

        getline(cin, descrip[i]);//Se escribe la descripcion del juego.
        printf("Ingr%cse la consola del juego: \n", 130);

        getline(cin, consola[i]);//Se escribe la consola del juego.
        printf("Ingr%cse el precio del juego: \n", 130);
        scanf_s("%f", &preuni[i]);//Se escribe el precio del juego, que en este caso, se pueden ingresar decimales ya que fue declarada como una variable flotante.
        iva[i] = preuni[i] * .16;
        pretot[i] = preuni[i] + iva[i];

        printf("El precio total de su compra es de: %f\n", pretot[i]);

       
    }
}

void elim()
{
    int busq;
    printf("Ingr%cse el C%cdigo de Juego a Eliminar:\n", 130, 162);
    scanf_s("%d", &busq);

    for (int i = 0; i < registros; i++)
    {
        if (busq == codigo[i])
        {
            codigo[i] = 0;
        }
    }
}
void lista()
{
    int opc2;
    printf("C%cmo quiere ver su lista de art%cculos vigentes? \n", 162, 161);
    printf("1.- Juegos Por G%cnero\n 2.- Juegos Por Clasificaci%cn\n", 130, 162);
    scanf_s("%d", &opc2);

    switch (opc2)
    {
    case 1:
        printf("Ingr%cse el g%cnero del juego a buscar\n", 130, 130);
        cin.ignore();
        getline(cin, busqgen);
        for (int i = 0; i < registros; i++)
        {
            if (genero[i] == busqgen)
            {
                printf("Esta es su lista de juegos por g%cnero:\n", 130);

                printf("C%cdigo de juego: %d \n", 162, codigo[i]);
                printf("A%co de lanzamiento: %d \n", 164, fecha[i]);
                printf("N%cmbre del juego: %s \n", 162, nomb[i].c_str());
                printf("Clasificaci%cn del juego: %s \n", 162, clasif[i].c_str());
                printf("G%cnero del Juego: %s \n", 130, genero[i].c_str());
                printf("Caracter%csticas del Juego: %s \n", 161, carac[i].c_str());
                printf("Descripci%cn del Juego: %s \n", 162, descrip[i].c_str());
                printf("Consola del Juego: %s \n", consola[i].c_str());
                printf("Precio del Juego: %f \n", preuni[i]);
                printf("Precio Total del Juego : %f \n", pretot[i]);
                printf("\t ------------------------------------------------ \n");
                
            }
        }
        break;
    case 2:
        printf("Ingrese la clasificaci%cn del juego a buscar\n", 162);
        cin.ignore();
        getline(cin, busqclas);
        for (int i = 0; i < registros; i++)
        {
            if (clasif[i] == busqclas)
            {
                printf("Esta es su lista de juegos por clasificaci%cn:\n", 162);

                printf("C%cdigo de juego: %d \n", 162, codigo[i]);
                printf("A%co de lanzamiento: %d \n", 164, fecha[i]);
                printf("N%cmbre del juego: %s \n", 162, nomb[i].c_str());
                printf("Clasificaci%cn del juego: %s \n", 162, clasif[i].c_str());
                printf("G%cnero del Juego: %s \n", 130, genero[i].c_str());
                printf("Caracter%csticas del Juego: %s \n", 161, carac[i].c_str());
                printf("Descripci%cn del Juego: %s \n", 162, descrip[i].c_str());
                printf("Consola del Juego: %s \n", consola[i].c_str());
                printf("Precio del Juego: %f \n", preuni[i]);
                printf("Precio Total del Juego : %f \n", pretot[i]);
                printf("\t ------------------------------------------------ \n");
                
            }
        }
        break;
    
       
    default:
        printf("Error: Ingrese otra opcion porfavor:\n");
        return lista();
        break;
    }

}
void modificar()
{
    int mod, opc3;
    do {
        printf("Ingrese el codigo del juego a modificar\n");
        scanf_s("%d", &mod);
        for (int i = 0; i < registros; i++)
        {
            if (mod == codigo[i])
            {
                printf("\t---Que desea modificar de su articulo?\n");
                printf(" 1.-A%co\n 2.-Nombre\n 3.-Clasificacion\n 4.-Genero\n 5.-Caracteristicas\n 6.-Descripcion\n 7.-Consola\n 8.-Precio\n ",164);//Estas son las opciones a elegir.
                printf("\t //////////////////////////////////////////\n");
                scanf_s("%d", &opc3);

                switch (opc3)
                {             
                case 1:
                    
                        printf("Ingr%cse el a%co de lanzamiento de su juego: \n", 130, 164);
                        scanf_s("%d", &fecha[i]);
                    
                    return menu();
                    break;
                case 2:
                   
                    
                        printf("Ingr%cse el nombre del juego: \n", 130);
                        cin.ignore();
                        getline(cin, nomb[i]);
                    
                    return menu();
                    break;
                case 3:
                   
                        printf("Ingr%cse la clasificaci%cn del juego: \n", 130, 162);
                        cin.ignore();
                        getline(cin, clasif[i]);
                    
                    return menu();
                    break;

                case 4:
                    
                        printf("Ingr%cse el genero del juego: \n", 130);
                        cin.ignore();
                        getline(cin, genero[i]);

                    
                    return menu();
                    break;
                case 5:
                    
                        printf("Ingr%cse las caracter%csticas del juego: \n", 130, 161);
                        cin.ignore();
                        getline(cin, carac[i]);
                    
                    return menu();
                    break;
                case 6:
                    
                        printf("Ingr%cse la descripcion del juego: \n", 130);
                        cin.ignore();
                        getline(cin, descrip[i]);
                    
                    return menu();
                    break;
                case 7:
                    
                        printf("Ingr%cse la consola del juego: \n", 130);
                        cin.ignore();
                        getline(cin, consola[i]);
                    
                    return menu();
                    break;
                case 8:
                   
                        printf("Ingr%cse el precio del juego: \n", 130);
                        scanf_s("%f", &preuni[i]);
                        iva[i] = preuni[i] * .16;
                        pretot[i] = preuni[i] + iva[i];
                    
                    return menu();
                    break;
                
                }
            

 
                   
                
            }
        }
    } while (mod > 0);

}

void arch()
{
    ofstream archivo;
    string nombarch;

    nombarch = "RegistrosGamerteca";

    archivo.open(nombarch.c_str(), ios::out);

    if (archivo.fail())
    {
        printf("No se pudo crear el archivo, intentelo mas tarde");
        system("pause");
        exit(1);
    }
    
    archivo << "Código:" << "\t" << "\t";
    archivo << "Año:" << "\t" << "\t";
    archivo << "Nómbre:" << "\t" << "\t";
    archivo << "Clasificación:" << "\t" << "\t";
    archivo << "Genero:" << "\t" << "\t";
    archivo << "Caracteristicas:" << "\t" << "\t";
    archivo << "Descripción: " << "\t" << "\t";
    archivo << "Consola:" << "\t" << "\t";
    archivo << "Precio Unit.:" << "\t" << "\t";
    archivo << "Precio Total:" << "\t" << "\n";


    for (int i = 0; i < registros; i++)
    {

        archivo << codigo[i] << "\t" << "\t";
        archivo << fecha[i] << "\t" << "\t";
        archivo << nomb[i] << "\t" << "\t";
        archivo << clasif[i] << "\t" << "\t";
        archivo << genero[i] << "\t" << "\t";
        archivo << carac[i] << "\t" << "\t";
        archivo << descrip[i] << "\t" << "\t";
        archivo << consola[i] << "\t" << "\t";
        archivo << preuni[i] << "\t" << "\t";
        archivo << pretot[i] << "\t" << "\n";
    }

    archivo.close();
}
