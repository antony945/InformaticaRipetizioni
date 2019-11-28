#include <iostream>

using namespace std;

/*
Funzione int che calcola il quadrato di un numero dato come parametro
*/
int quadrato(int x){
    return x*x;
}

/*
Funzione void che calcola il quadrato di un numero dato come parametro (devo passare il numero come riferimento per poterlo modificare)
*/
void quadrato2(int &x){
    x = x*x;
}

int main(){
    int num = 0;

    cout << "Inserisci un numero: ";
    cin >> num;

    quadrato2(num); //la funzione ha modificato il valore di "num", che ora contiene il suo quadrato

    cout << endl << "Il quadrato del numero inserito e' " << num << endl;

    return 0;
}
