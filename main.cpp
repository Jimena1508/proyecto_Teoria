#include <iostream>
#include "Definiciones.h"
#include "CUnaPersona.h"
#include "CAutor.h"
#include "CUsuario.h"
#include "Menu.h"

int main() {
    bool stop=true;
    EnteroSinSigno Opc=0;
    EnteroSinSigno Actividad=0;
    TipoNumerico cont=0;
    EnteroSinSigno dni;
    TipoCadena nombre;
    TipoCadena apellido;
    TipoCadena usuario;
    TipoCadena clave;
    CUnaPersona *pUnaPersona= nullptr;
    do{
        Opc=OpcionPersona();//Definir usuario
        if(cont==0){
            cout << "Ingrese su DNI:";cin>>dni;
            cout << "Nombre:";cin>>nombre;
            cout << "Apellido:";cin>>apellido;
            cout << "Usuario";cin>>usuario;
            cout << "Clave de acceso:";cin>>clave;

            switch (Opc) {
                case 1:
                    pUnaPersona = new CUsuario(dni,nombre,apellido,usuario,clave);
                    break;
                case 2:
                    pUnaPersona = new CAutor(dni,nombre,apellido,usuario,clave);
                    break;
            }
        }
        Actividad=OpcionActividad(Opc);
        switch (Actividad) {
            case 1:
                pUnaPersona->BuscarPublicacion();//Retornar info necesaria publicacion
                break;
            case 2:
                pUnaPersona->ComprarPublicacion();//Retornar link lectura publicacion
                break;
            case 3:
                pUnaPersona->AgregarPublicacion();//Retornar link edicion publicacion
                break;
		      case 4:
                pUnaPersona->EditarPublicacion();//Retornar link edicion publicacion
                break;

 
        }
        delete pUnaPersona;
        pUnaPersona = nullptr;
        Opc=0;

        cont=cont+1;
    }while (stop!=false);
    return 0;
}
