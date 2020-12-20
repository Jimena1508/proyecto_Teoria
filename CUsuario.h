//
// Created by Jimena on 19/12/2020.
//

#ifndef PROYECTO_TEORIA_CUSUARIO_H
#define PROYECTO_TEORIA_CUSUARIO_H

#include "CUnaPersona.h"
#include "Definiciones.h"

class CUsuario:public CUnaPersona
{
public:
    CUsuario() {};
    CUsuario(EnteroSinSigno _DNI, TipoCadena _Nombre, TipoCadena _Apellido,TipoCadena _Usuario, TipoCadena _ClaveAcceso);
    virtual ~CUsuario(){};

    //metodos
    TipoCadena ComprarPublicacion() override;
    TipoCadena DescargarPublicacion() override;
    TipoCadena EditarPublicacion() override ;
};


#endif //PROYECTO_TEORIA_CUSUARIO_H
