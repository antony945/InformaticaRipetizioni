#include <iostream>

using namespace std;

/*
Funzione che controlla se il numero dato come parametro è primo
*/
bool primo(int numero){
    bool primo = true;

    for(int i=2;i<numero;i++){
        if(numero%i == 0){
            primo = false;
        }
    }

    //Ritorna il valore di primo
    return primo;
}

/*
Funzione che stampa tutti i divisori primi di un certo numero
*/
void stampaDivisoriPrimi(int numero){
    cout << "I divisori primi di " << numero << " sono: " << endl;

    for(int i=1;i<=numero;i++){
        if(primo(i)){ //Equivalente a primo(i) == true
            if(numero%i == 0)
                cout << i << endl; //Stampa il divisore
        }//Se non è primo passa semplicemente al giro successivo, infatti voglio solo i divisori primi
    }
}

int main(){
    int num = 0;
    cout << "Inserisci un numero: ";
    cin >> num;

    stampaDivisoriPrimi(num);

    return 0;
}
