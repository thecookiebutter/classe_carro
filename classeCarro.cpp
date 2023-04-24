// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//Criacao da classe Carro
class Carro
{
    public:
    //Variaveis e metodo da classe Carro
    string Cor;
    string Modelo;
    float VelMax;
    void Buzinar();
};

int main() {
    //Instancia da classe Carro
    Carro MeuCarro;
    //Variaveis da instancia
    MeuCarro.Cor = "Branco";
    MeuCarro.Modelo = "Fusca";
    MeuCarro.VelMax = 150.0f;
    //Imprimindo metodo e variaveis da instancia
    MeuCarro.Buzinar();
    cout << MeuCarro.Cor << endl;
    cout << MeuCarro.Modelo << endl;
    cout << MeuCarro.VelMax << endl;
}
    //Metodo da classe Carro 
     void Carro::Buzinar(){
    cout << "Bi,Bi!!!" << endl;
    };
