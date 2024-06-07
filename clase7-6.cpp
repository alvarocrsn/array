#include <iostream>
#include <vector>

using namespace std;

int main(){

    /// vector o array estatico
    int numerosEstaticos[6] = {1, 2, 3, 4, 5, 6};

    int tamanio = sizeof(numerosEstaticos) / sizeof(*numerosEstaticos);
    ///permite conseguir el total de espacio en memoria del array por el puntero de ese array
    ///el puntero apuunta al espacio de memoria de un elemento individual

    ///vector dinamico
    vector<int> numerosDinamicos = {1, 2, 3};

    numerosDinamicos.push_back(10); /// ingresa un dato al final del vector array
    numerosDinamicos.pop_back(); /// va a quitar el ultimo elemento
    numerosDinamicos.size(); /// tamaño del array
    numerosDinamicos.empty(); /// pregunta si esta vacio y devuelve bool


    /// Iterar arrays

    for(int i=0; i < numerosDinamicos.size(); i++){
        cout << numerosDinamicos[i] << " ";
    }

    /// En rango

    for(int values : numerosDinamicos){
        cout << values << " ";
    }


    return 0;
}
