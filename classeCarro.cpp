// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Carro
{
    public:
    
    string Cor;
    string Modelo;
    float VelMax;
    void Buzinar();
};

int main() {
    Carro MeuCarro;

    MeuCarro.Cor = "Branco";
    MeuCarro.Modelo = "Fusca";
    MeuCarro.VelMax = 150.0f;
    
    MeuCarro.Buzinar();
    cout << MeuCarro.Cor << endl;
    cout << MeuCarro.Modelo << endl;
    cout << MeuCarro.VelMax << endl;
}
     void Carro::Buzinar(){
    cout << "Bi,Bi!!!" << endl;
    };