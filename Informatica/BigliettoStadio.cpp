#include <iostream>
#include <string>
using namespace std;

struct DatiSistema {
    int soglia1;
    int soglia2;
    int soglia3;
    double prezzo1;
    double prezzo2;
    double prezzo3;
    double prezzo4;
};
void stampa(string x){
     std::cout<<x<<" ";
}
void stampaln(string x){
     std::cout<<x<<endl;
}
void input(string x, int &dato){
    stampa(x);
    cin>>dato;
}
bool controlloPositivo(int dato){
     if(dato< 0)
        return false;
     return true;
}

void caricaTabellaPrezzi(DatiSistema &x){
    x.soglia1=10;
    x.soglia2=18;
    x.soglia3=65;
    x.prezzo1=0.0;
    x.prezzo2=5.0;
    x.prezzo3=10.0;
    x.prezzo4=0.0;
}
double cercaPrezzo(DatiSistema x, int eta){
     if(eta<x.soglia1)
        return x.prezzo1;
     if(eta<x.soglia2)
        return x.prezzo2;
     if(eta<x.soglia3)
        return x.prezzo3;
     return x.prezzo4;
}
int main(){
    int eta;
    double prezzo;
    DatiSistema recordPrezzi;
    caricaTabellaPrezzi(recordPrezzi);
    stampaln("eta < "+to_string(recordPrezzi.soglia1) + "  prezzo "+ to_string(recordPrezzi.prezzo1));
    stampaln("eta < "+to_string(recordPrezzi.soglia2) + "  prezzo "+ to_string(recordPrezzi.prezzo2));
    stampaln("eta < "+to_string(recordPrezzi.soglia3) + "  prezzo "+ to_string(recordPrezzi.prezzo3));
    stampaln("oltre "+to_string(recordPrezzi.soglia3) + "  prezzo "+ to_string(recordPrezzi.prezzo4));
    input("inserire eta (>0)", eta );
    while(!(controlloPositivo(eta))){
          input("inserire eta (>0)", eta );
          }
    prezzo=cercaPrezzo(recordPrezzi, eta);
    stampaln("Prezzo "+to_string(prezzo)+ " euro");
    return 0;
}


