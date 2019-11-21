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

    numeratore = numeratore/MCD;
    denominatore = denominatore/MCD;
}

/* Funzione che calcola la somma tra due frazioni con diverso denominatore
NB Il denominatoreSomma è pari al prodotto dei due denominatori
NB Il numeratoreSomma è pari a (denominatoreSomma/denominatore1)*numeratore1+(denominatoreSomma/denominatore2)*numeratore2

La funzione è giusta ma facendo cosi la somma non sarebbe ridotta ai minimi termini. Importando semplicemente la funzione minimiTermini()
dell'esercizio 7 posso utilizzarla facilmente in questo programma riducendo ai minimi termini numeratoreSomma e denominatoreSomma
*/
void sommaFrazioni(int numeratore1, int numeratore2, int denominatore1, int denominatore2){
    int denominatoreSomma = denominatore1*denominatore2;
    int numeratoreSomma = (denominatoreSomma/denominatore1)*numeratore1+(denominatoreSomma/denominatore2)*numeratore2;

    minimiTermini(numeratoreSomma, denominatoreSomma);

    cout << endl;
    cout << "La somma tra " << numeratore1 << "/" << denominatore1 << " e " << numeratore2 << "/" << denominatore2 << " e' ";
    cout <<  numeratoreSomma << "/" << denominatoreSomma << endl;
}

/* Funzione che calcola la somma tra due frazioni con stesso denominatore */
void sommaFrazioni(int numeratore1, int numeratore2, int denominatore){
    int denominatoreSomma = denominatore;
    int numeratoreSomma = numeratore1+numeratore2;

    minimiTermini(numeratoreSomma, denominatoreSomma);

    cout << endl;
    cout << "La somma tra " << numeratore1 << "/" << denominatore << " e " << numeratore2 << "/" << denominatore << " e' ";
    cout <<  numeratoreSomma << "/" << denominatoreSomma << endl;
}

int main(){
    int n1 = 0, n2 = 0;
    int d1 = 0, d2 = 0;

    cout << "Inserisci il primo numeratore: ";
    cin >> n1;
    cout << "Inserisci il primo denominatore: ";
    cin >> d1;
    cout << "Inserisci il secondo numeratore: ";
    cin >> n2;
    cout << "Inserisci il secondo denominatore: ";
    cin >> d2;

    /*ESEMPIO DI OVERLOADING*/
    if(d1==d2){
        //Se sono uguali invoca la funzione con tre parametri e non quattro
        sommaFrazioni(n1, n2, d1);
    }else{
        //Se sono diversi invoca la funzione con quattro parametri
        sommaFrazioni(n1, n2, d1, d2);
    }

    return 0;
}
