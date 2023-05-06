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

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

/**
 * @brief Clase que crea un Stack LIFO con un template para usar varios tipos dde datos
 * 
 * @tparam T 
 */
template<typename T>
class Stack {
private:
  std::vector<T> data_;

public:
  void push(T value) {
    data_.push_back(value); // Adds a new element at the end of the stack
  }

  T pop() {
    if (data_.empty()) {
      throw std::out_of_range("Stack is empty");
    }
    T value = data_.back();
    data_.pop_back(); // Removes the last element in the stack and returns the value
    return value;
  }

  void clear() {
    data_.clear(); // Removes all elements from the stack
  }

  bool empty() const {
    return data_.empty(); //true if the container size is 0, false otherwise.
  }

  std::size_t size() const {
    return data_.size(); //Return stack size
  }

  //Iterating stack and performing func
  void foreach(const std::function<void(T&)>& func) {
    std::for_each(data_.begin(), data_.end(), func);
  }
};

int main() {
  Stack<int> s;
  s.push(2021);
  s.push(2054);
  s.push(6524);

  std::cout << "Stack size: " << s.size() << std::endl;

  //Printing values of the stack with a lambda function
  s.foreach([](int& value) {
    std::cout << "Value: " << value << std::endl;
  });

  //Exception handling
  try {
    while (!s.empty()) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    std::cout << "Stack size: " << s.size() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  //Working with float data type
  Stack<float> f;
  f.push(777.4);
  f.push(77.0);
  f.push(7.23123);
  
  std::cout<<std::endl<<std::endl<<"Adding lines with float data type:"<<std::endl;
  std::cout << "Stack size: " << f.size() << std::endl;

  //Printing values of the stack with a lambda function
  f.foreach([](float& value) {
    std::cout << "Value: " << value << std::endl;
  });

  /*
  //This will trigger an out_of_range exception
  try {
    while (true) {
      int value = s.pop();
      std::cout << "Popped value: " << value << std::endl;
    }
    std::cout << "Stack size: " << s.size() << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  */
  return 0;
}
