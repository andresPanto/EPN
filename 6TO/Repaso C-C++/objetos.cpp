#include <iostream>
using namespace std;


class Conversor{
   private:
   float farenheit;
   float celcius;


   public :
   float getFarenheit(){
       return this->farenheit;
   }
   float getCelcius(){
       return this->celcius;
   }
   void setFarenheit(float readFarenheit){
       this->farenheit = readFarenheit;
   }
    void setCelcius(float readCelcius){
        this->celcius = readCelcius;
   }
   void changeCelciusToFarenhiet(){
       this->farenheit= 1.8*this->celcius+32;
   }
   void changeFarenheitToCelcius(){
       this->celcius= (this->farenheit-32)/1.8;
   
   }
};

int main(){
float temperatura;
char FoC;
Conversor temp = Conversor();
cout<< "Si quiere transformar de Farenheit a Celius entre el caracter C(Mayuscula)\nSi quiere transformar de Celcius a Farenhei entre el caracter C(Mayuscula)"<<endl;
cout<< "Ingrese caracter" <<endl;
cin>> FoC;
cout<< "Ingrese valor" <<endl;
cin >> temperatura;
if (FoC=='F')
{
temp.setFarenheit(temperatura);
temp.changeFarenheitToCelcius();
cout<<"La respuesta en celcius es: " <<temp.getCelcius();
}else if(FoC=='C')
{
temp.setCelcius(temperatura);
temp.changeCelciusToFarenhiet();
cout <<"La respuesta es: " <<temp.getFarenheit() <<endl;
}else{
    cout<<"pendejo, ingrese caracter" <<endl;
}



return 0;
}
