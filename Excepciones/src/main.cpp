/**
Licencia MIT

Copyright (c) [2023] Tarea 2 - Grupo 2 - IE 0217 - I Ciclo 2023

Se concede aquí, sin cargo, a cualquier persona que obtenga una copia de este
software y los archivos de documentación asociados (el "Software"), para
utilizar el Software sin restricciones, incluyendo, sin limitación, los
derechos para usar, copiar, modificar, fusionar, publicar, distribuir,
sublicenciar y/o vender copias del Software, y para permitir a las personas a
quienes se les proporcione el Software que lo hagan, sujeto a las siguientes
condiciones:

El aviso de copyright anterior y este aviso de permiso se incluirán en todas
las copias o partes sustanciales del Software.

EL SOFTWARE SE PROPORCIONA "TAL CUAL", SIN GARANTÍA DE NINGÚN TIPO, EXPRESA O
IMPLÍCITA, INCLUYENDO PERO NO LIMITADO A GARANTÍAS DE COMERCIALIZACIÓN,
IDONEIDAD PARA UN PROPÓSITO PARTICULAR Y NO INFRACCIÓN. EN NINGÚN CASO LOS
AUTORES O TITULARES DEL COPYRIGHT SERÁN RESPONSABLES POR NINGUNA RECLAMACIÓN,
DAÑO O OTRA RESPONSABILIDAD, YA SEA EN UNA ACCIÓN CONTRACTUAL, AGRAVIO O DE
OTRO MODO, QUE SURJA DE, FUERA DE O EN CONEXIÓN CON EL SOFTWARE O EL USO U
OTROS ACUERDOS EN EL SOFTWARE.
*/

#include "ClassHeader.hpp"

int main() {
  //Throw Custom exception
  try {
    throw MyException();
  } catch (std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
  }
  //Throwing three standard exceptions
  try {
    throw std::bad_alloc(); // Throwing std::bad_alloc
  } catch (std::bad_alloc& ba) {
    std::cout << "Standard exception: " << ba.what() << std::endl; //Catching and printing std::bad_alloc
  }

  try {
    throw std::bad_cast(); // Throwing std::bad_cast
  } catch (std::bad_cast& bc) {
    std::cout << "Standard exception: " << bc.what() << std::endl; //Catching and printing std::bad_cast
  }

  try {
    throw std::runtime_error("Something failed runtime error!"); // Throwing std::runtime_error
  } catch (std::exception& re) {
    std::cout << "Standard exception: " << re.what() << std::endl; //Catching and printing std::runtime_error
  }

  return 0;
}
