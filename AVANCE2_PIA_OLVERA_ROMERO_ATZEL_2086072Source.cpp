#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
//Estas son las librerias que se utilizaron para el correcto funcionamiento del programa solicitado.

using namespace std;

struct gamerteca
{
    string nomb, clasif, genero, carac, descrip, consola;//Se declaran las variables como string para poder escribir mas caracteres y que sean letras.
    int codicom, codigo, fecha;//Se declara las variables de codigo y año de lanzamiento como enteros.
    float iva=0.16, pretot, preuni;//Se utiliza un float para poder ingresar precios con decimales.
};
int main() {

    gamerteca tienda[3];
    int opc, busq;//Se declara como entero la variable de opcion
    string busqgen,busqclas;
    
   

    do {

        printf("\t /////****-Bienvenido a Gamerteca-****/////\n");
        printf("\t ****-Ingr%cse una opci%cn porfavor.-****\n",130,162);//Aqui se le pide al usuario ingresar el numero de la opcion.
        printf(" 1.-AGREGAR ART%cCULO\n 2.-MODIFICAR ART%cCULO\n 3.-ELIMINAR ART%cCULO\n 4.-ART%cCULOS VIGENTES\n 5.-LIMPIAR PANTALLA\n 6.-SALIR\n",214,214,214,214);//Estas son las opciones a elegir.
        printf("\t //////////////////////////////////////////\n");
        scanf_s("%d", &opc);

        switch (opc)
        {
        case 1:

            for (int i = 0; i < 3; i++)
            {
                tienda[i].codicom = 20220000 + i;
                printf("N0. DE COMPRA: %d \n", tienda[i].codicom);
                int sal = 1;
                do
                {
                    printf("Ingr%cse el c%cdigo del juego: \n",130,162);
                    scanf_s("%d", &tienda[i].codigo);
                    if (tienda[i].codigo == tienda[i - 1].codigo || tienda[i].codigo == tienda[i - 2].codigo)
                    {
                        printf("El c%cdigo de juego ya existe, ingrese otro: \n",162);
                    }
                    else
                    {
                        sal = 2;
                    }
                } while (sal == 1);

                printf("Ingr%cse el a%co de lanzamiento de su juego: \n",130,164);
                scanf_s("%d", &tienda[i].fecha);
                printf("Ingr%cse el nombre del juego: \n",130);
                cin.ignore();//El cin ignore nos ayuda a que no se ignore el primer espacio, para que asi, no se salte la primera solicitud, en este caso ingresar el nombre del juego.
                getline(cin, tienda[i].nomb);//El getline nos permite ingresar oraciones con espacios entre las palabras.
                printf("Ingr%cse la clasificaci%cn del juego: \n",130,162);
                
                getline(cin, tienda[i].clasif);//Se escribe la clasificacion del juego.
                printf("Ingr%cse el genero del juego: \n",130);
                
                getline(cin, tienda[i].genero);//Se escribe el genero del juego.
                printf("Ingr%cse las caracter%csticas del juego: \n",130,161);
                
                getline(cin, tienda[i].carac);//Se escriben las caracteristicas del juego.
                printf("Ingr%cse la descripcion del juego: \n",130);
                
                getline(cin, tienda[i].descrip);//Se escribe la descripcion del juego.
                printf("Ingr%cse la consola del juego: \n",130);
                
                getline(cin, tienda[i].consola);//Se escribe la consola del juego.
                printf("Ingr%cse el precio del juego: \n",130);
                scanf_s("%f", &tienda[i].preuni);//Se escribe el precio del juego, que en este caso, se pueden ingresar decimales ya que fue declarada como una variable flotante.
                printf("Su impuesto de compra es de: %f \n", tienda[i].iva);
                tienda[i].pretot = tienda[i].preuni* 1.16;
                printf("El precio total de su compra es de: %f\n", tienda[i].pretot);
            }
            break;//El break sirve para dar fin a uno de los casos del switch.
        case 2:
            printf("\t /////P%cGINA EN DESARROLLO!! MUY PRONTO!!/////\n",181);
            system("pause");//En este caso como la pagina sigue en desarrollo, si seleccionamos la opcion 2 nos saltara este mensaje y se pausara la pantalla hasta que presionemos enter.

            break;

        case 3:
            printf("Ingr%cse el C%cdigo de Juego a Eliminar:\n",130,162);
            scanf_s("%d", &busq);

            for (int i = 0; i < 3; i++)
            {
                if (busq == tienda[i].codigo)
                {
                    tienda[i].codigo = 0;
                }
            }
            break;

        case 4:
            printf("C%cmo quiere ver su lista de art%cculos vigentes? \n",162,161);
            printf("1.- Juegos Por G%cnero\n 2.- Juegos Por Clasificaci%cn\n 3.- Lista de Todos los Juegos\n",130,162);
            scanf_s("%d", &busq);

            switch (busq)
            {
            case 1:
                printf("Ingr%cse el g%cnero del juego a buscar\n",130,130);
                cin.ignore();
                getline(cin, busqgen);
                for (int i = 0; i < 3; i++)
                {
                    if(busqgen.compare(tienda[i].genero) == 0)
                    {
                        printf("Esta es su lista de juegos por g%cnero:\n",130);
                        printf("NO.DE COMPRA: %d \n", tienda[i].codicom);
                        printf("C%cdigo de juego: %d \n",162, tienda[i].codigo);
                        printf("A%co de lanzamiento: %d \n",164, tienda[i].fecha);
                        printf("N%cmbre del juego: %s \n",162, tienda[i].nomb.c_str());
                        printf("Clasificaci%cn del juego: %s \n",162, tienda[i].clasif.c_str());
                        printf("G%cnero del Juego: %s \n",130, tienda[i].genero.c_str());
                        printf("Caracter%csticas del Juego: %s \n",161, tienda[i].carac.c_str());
                        printf("Descripci%cn del Juego: %s \n",162, tienda[i].descrip.c_str());
                        printf("Consola del Juego: %s \n", tienda[i].consola.c_str());
                        printf("Precio del Juego: %f \n", tienda[i].preuni);
                        printf("Precio Total del Juego : %f \n", tienda[i].pretot);
                        printf("\t ------------------------------------------------ \n");
                        system("pause");
                    }
                }
                break;
            case 2:
                printf("Ingrese la clasificaci%cn del juego a buscar\n",162);
                cin.ignore();
                getline(cin, busqclas);
                for (int i = 0; i < 3; i++)
                {
                    if (busqclas.compare(tienda[i].clasif) == 0)
                    {
                        printf("Esta es su lista de juegos por clasificaci%cn:\n", 162);
                        printf("NO.DE COMPRA: %d \n", tienda[i].codicom);
                        printf("C%cdigo de juego: %d \n", 162, tienda[i].codigo);
                        printf("A%co de lanzamiento: %d \n", 164, tienda[i].fecha);
                        printf("N%cmbre del juego: %s \n", 162, tienda[i].nomb.c_str());
                        printf("Clasificaci%cn del juego: %s \n", 162, tienda[i].clasif.c_str());
                        printf("G%cnero del Juego: %s \n", 130, tienda[i].genero.c_str());
                        printf("Caracter%csticas del Juego: %s \n", 161, tienda[i].carac.c_str());
                        printf("Descripci%cn del Juego: %s \n", 162, tienda[i].descrip.c_str());
                        printf("Consola del Juego: %s \n", tienda[i].consola.c_str());
                        printf("Precio del Juego: %f \n", tienda[i].preuni);
                        printf("Precio Total del Juego : %f \n", tienda[i].pretot);
                        printf("\t ------------------------------------------------ \n");
                        system("pause");
                    }
                }
                break;
            case 3:
                printf("Esta es su lista de art%cculos vigentes:\n",214);
                for (int i = 0; i < 3; i++)
                {
                    
                    printf("NO.DE COMPRA: %d \n", tienda[i].codicom);
                    printf("C%cdigo de juego: %d \n", 162, tienda[i].codigo);
                    printf("A%co de lanzamiento: %d \n", 164, tienda[i].fecha);
                    printf("N%cmbre del juego: %s \n", 162, tienda[i].nomb.c_str());
                    printf("Clasificaci%cn del juego: %s \n", 162, tienda[i].clasif.c_str());
                    printf("G%cnero del Juego: %s \n", 130, tienda[i].genero.c_str());
                    printf("Caracter%csticas del Juego: %s \n", 161, tienda[i].carac.c_str());
                    printf("Descripci%cn del Juego: %s \n", 162, tienda[i].descrip.c_str());
                    printf("Consola del Juego: %s \n", tienda[i].consola.c_str());
                    printf("Precio del Juego: %f \n", tienda[i].preuni);
                    printf("Precio Total del Juego : %f \n", tienda[i].pretot);
                    printf("\t ------------------------------------------------ \n");
                    
                    
                }
                break;
            }
            break;

        case 5:

            printf("\t /////****-Regresando al inicio-****/////\n");//Seleccionamos esta opcion para limpiar la pantalla, nos lanzara este mensaje.
            system("pause");
            system("cls");//El system cls(clear) nos limpiara la pantalla con todo el contenido que hayamos puesto.
            
            break;

        case 6:
            printf("\t /////****-Muchas Gracias Por Usar Los Servicios De Gamerteca-****/////\n");//Al ser esta opcion la salida, nos dara un agradecimiento por entrar al programa.
            printf("\t /////****-Vuelva Pronto-****/////\n");
            break;//El break termina el caso 6 y se cierra el programa.

        default:
            printf("\t /////****-Ingrese una opci%cn correcta, porfavor-****/////\n",162);//El default nos dira un mensaje el cual nos pedira otra vez poner el numero de la opcion.
            break;
        }
    } while (opc != 6);
    system("pause");
}