//
// Created by Jimena on 19/12/2020.
//

#include "CUsuario.h"


CUsuario::CUsuario(EnteroSinSigno _DNI, TipoCadena _Nombre, TipoCadena _Apellido,TipoCadena _Usuario, TipoCadena _ClaveAcceso)
                    :CUnaPersona(_DNI,_Nombre,_Apellido,_Usuario,_ClaveAcceso)
{

}

TipoCadena CUsuario::Comprar()
{
    //return ("hola");
}
