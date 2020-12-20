//
// Created by Jimena on 19/12/2020.
//

#include <iostream>
#include "Menu.h"
using namespace std;

EnteroSinSigno OpcionPersona (){
    EnteroSinSigno Opcion=0;
    do {
        cout << "Hola, ¡Bienvenido(a) a nuestra biblioteca virtual!\n";
        cout << "Seleccione el tipo de acceso que desea a la plataforma: \n";
        cout << "1. Usuario \n";
        cout << "2. Autor \n";
        cout << "Ingresa el numero ([1] o [2]) de la opcion elegida:"; cin >> Opcion;
    } while (Opcion != 1 and Opcion !=2);
    return (Opcion);
}
EnteroSinSigno OpcionActividad (EnteroSinSigno Opcion){
    EnteroSinSigno actividad=0;
    do {
        cout << "Seleccione el tipo de actividad que desea realizar: \n";
        cout << "1. Buscar Publicacion\n";
        cout << "2. Comprar Publicacion \n";
        if(Opcion==2)
            cout << "3. Editar publicacion \n";
        cout << "Ingresa el numero de la opcion elegida:"; cin >> Opcion;
    } while ((actividad <1) and (actividad >3));
    return (actividad);
}

bool OpcionContinuar (){
    EnteroSinSigno Opcion=0;
    bool stop=true;
    cout << "¿Desea continuar en la plataforma?"<<endl;
    cout<< "Opciones: [1] Si, [2] No "<<endl;cin>>Opcion;
    switch (Opcion) {
        case 1:
            stop=true;
            break;
        case 2:
            stop=false;
            break;
    }
    return (stop);

}