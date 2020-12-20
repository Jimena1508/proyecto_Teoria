//
// Created by Jimena on 19/12/2020.
//

#include <iostream>
#include "CAutor.h"

CAutor::CAutor(EnteroSinSigno _DNI, TipoCadena _Nombre, TipoCadena _Apellido,TipoCadena _Usuario, TipoCadena _ClaveAcceso)
        :CUnaPersona(_DNI,_Nombre,_Apellido,_Usuario,_ClaveAcceso)
{

}

TipoCadena DescargarPublicacion() {

}

TipoCadena EditarPublicacion(){

}

TipoCadena ComprarPublicacion(){
    cout<<"Usted puede acceder a la publiciones sin pagar por ellas, gracias.";
    return ("Accion_Invalida");
}