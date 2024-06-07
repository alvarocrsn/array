#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> numeros;
    cout << "Tamanio: " << numeros.size() << endl;
    cout << "Esta vacia? " << (numeros.empty() ? "si" : "no" ) << endl;

    numeros.push_back(5);
    numeros.push_back(6);
    numeros.push_back(7);
    numeros.push_back(9);

    cout << "Los elementos del vector son: ";

    for(int values : numeros){
        cout << values << " ";
    }


    return 0;
}
