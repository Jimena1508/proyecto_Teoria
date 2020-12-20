//
// Created by Jimena on 19/12/2020.
//

#ifndef PROYECTO_TEORIA_CAUTOR_H
#define PROYECTO_TEORIA_CAUTOR_H

#include "CUnaPersona.h"
#include "Definiciones.h"

class CAutor:public CUnaPersona
{
public:
    CAutor() {};
    CAutor(EnteroSinSigno _DNI, TipoCadena _Nombre, TipoCadena _Apellido,TipoCadena _Usuario, TipoCadena _ClaveAcceso);
    virtual ~CAutor(){};

    //metodos
    TipoCadena ComprarPublicacion() override ;
    TipoCadena DescargarPublicacion() override;
    TipoCadena EditarPublicacion() override ;
};

#endif //PROYECTO_TEORIA_CAUTOR_H
