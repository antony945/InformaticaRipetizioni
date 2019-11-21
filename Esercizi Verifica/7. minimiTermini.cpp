#include <iostream>

using namespace std;

/* Funzione che riduce ai minimi termini numeratore e denominatore ottenuti come parametro tramite passaggio per riferimento */
void minimiTermini(int &numeratore, int &denominatore){
    int minimo = 0;
    int MCD = 0; //Serve a contenere il divisore più grande

    if(numeratore<denominatore)
        minimo = numeratore;
    else
        minimo = denominatore;

    for(int i=1;i<=minimo;i++){
        if(numeratore%i == 0 && denominatore%i == 0){
            MCD = i; //Assegna alla variabile MCD il valore di i. Alla fine del ciclo avrà il valore del divisore più grande per entrambi i numeri
        }
    }

    //Il programma è più corretto se dividiamo il numeratore e il denominatore solo una volta alla fine per il divisore più grande piuttosto che all'interno del ciclo
    //(Andava comunque bene anche come era fatto prima)
    numeratore = numeratore/MCD;
    denominatore = denominatore/MCD;
}

int main(){
    int n = 0, d = 0;
    cout << "Inserisci il numeratore: ";
    cin >> n;
    cout << "Inserisci il numeratore: ";
    cin >> d;

    minimiTermini(n, d);

    cout << "Il numeratore ridotto ai minimi termini e': " << n << endl;
    cout << "Il denominatore ridotto ai minimi termini e': " << d << endl;

    return 0;
}
