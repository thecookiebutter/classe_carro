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
    //Construtor da classe Carro
    Carro()
    {
    VelMax = 220.f;
    Modelo = "Camaro";
    Cor = "Amarelo";
    }
};

int main() {
    //Instancias da classe Carro
    Carro MeuCarro;
    Carro Carro2;
    //Variaveis da primeira instancia
    MeuCarro.Cor = "Branco";
    MeuCarro.Modelo = "Fusca";
    MeuCarro.VelMax = 150.0f;
    //Imprimindo metodo e variaveis da primeira instancia
    MeuCarro.Buzinar();
    cout << MeuCarro.Cor << endl;
    cout << MeuCarro.Modelo << endl;
    cout << MeuCarro.VelMax << endl;
    //Imprimindo metodo e variaveis da segunda instancia, sendo que esses dados vem do construtor
    Carro2.Buzinar();
    cout << Carro2.Cor << endl;
    cout << Carro2.Modelo << endl;
    cout << Carro2.VelMax << endl;
}
    //Metodo da classe Carro
     void Carro::Buzinar(){
    cout << "Bi,Bi!!!" << endl;
    };