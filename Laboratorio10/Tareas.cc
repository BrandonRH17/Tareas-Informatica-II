#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;
template<typename T>
class Interador{
    public:
    virtual bool valor(T& resultado)=0;
    virtual void siguiente()=0;   
};

template<typename K, typename V>
class Diccionario{
    virtual T& operator[](const K& k)= 0;
    int size();
    iterator(V)*Interdor();
};

int main(){
    vector<string> strs;
    Diccionario<std::string, std::string> strs;

    strs.push_back["Universidad"] = "Universidad del Istmo";

    strs.push_back["Facultad"] = "Ingenieria";

    strs.push_back["Clase"] = "Informatica II";

    iterator<std::string> * it = strs.iterador();

    std::string valor;

    while(it->valor(valor)){

        printf("Se almaceno ''%s''\n", valor.c_str());

        it->siguiente();

    }

    printf("La facultad es ''%s''\n", strs.push_back["Facultad"].c_str());

    delete it;
}