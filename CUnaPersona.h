//
// Created by Jimena on 19/12/2020.
//

#ifndef PROYECTO_TEORIA_CUNAPERSONA_H
#define PROYECTO_TEORIA_CUNAPERSONA_H


#include "Definiciones.h"

class CUnaPersona {
protected:
    EnteroSinSigno DNI;
    TipoCadena Nombre;
    TipoCadena Apellido;
    TipoCadena Usuario;
    TipoCadena ClaveAcceso;
public:
    CUnaPersona() {}
    CUnaPersona(EnteroSinSigno _DNI, TipoCadena _Nombre, TipoCadena _Apellido,TipoCadena _Usuario, TipoCadena _ClaveAcceso);
    virtual ~CUnaPersona(){}

    //---metodo de acceso
    void setDNI(EnteroSinSigno _DNI) {DNI = _DNI;}
    EnteroSinSigno getDNI() {return DNI;}
    void setNombre(TipoCadena _Nombre) {Nombre = _Nombre;}
    TipoCadena getNombre() {return Nombre; }
    void setApellido(TipoCadena _Apellido){Apellido= _Apellido;}
    TipoCadena getApellido() {return Apellido;}
    void setUsuario(TipoCadena _Usuario){Usuario= _Usuario;}
    TipoCadena getUsuario() {return Usuario;}
    void setClaveAcceso(TipoCadena _Apellido){ClaveAcceso= _Apellido;}
    TipoCadena getClaveAcceso() {return ClaveAcceso;}

    //---metodos
    TipoCadena BuscarPublicacion ();
    virtual TipoCadena ComprarPublicacion() = 0;
    virtual TipoCadena EditarPublicacion() = 0;
    virtual TipoCadena DescargarPublicacion() = 0;
    virtual TipoCadena AgregarPublicacion() = 0;
};

#endif //PROYECTO_TEORIA_CUNAPERSONA_H
