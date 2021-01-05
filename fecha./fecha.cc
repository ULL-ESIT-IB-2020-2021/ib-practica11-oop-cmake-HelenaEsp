#include <iostream>
using namespace std;
class Fecha{
    private:
      int ano_{};
      int mes_{};
      int dia_{};
    public:
     void Imprimir() {
         cout<<dia_<<'/'<<mes_<<'/'<<ano_<<endl;
     }
     int ObtenerMes() {return mes_ ;}
     void SetMes(int mes) {mes_= mes ;}
     
     int ObtenerDia() {return dia_ ;}
     void SetDia(int dia) {dia_=dia ;}

     int ObtenerAno() {return ano_ ;}
     void SetAno(int ano){ano_=ano ;}
 } ;
int main() {
    Fecha hoy;
    hoy.SetDia(10);
    hoy.SetMes(10);
    hoy.SetAno(2020);
    hoy.Imprimir();
    return 0;
}   
