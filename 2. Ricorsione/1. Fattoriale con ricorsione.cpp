#include <iostream>

using namespace std;

/*
Il fattoriale di n (identificato con n!) è pari al prodotto di tutti i numeri
naturali (escluso lo 0) minori o uguali a n
Es. 3! = 3*2*1 = 6
    6! = 6*5*4*3*2*1 = 0
    0! = 1 (per definizione)

    IN GENERALE
    n! = n*(n-1)*(n-2)*....*1
*/
int fattoriale(int n){
    int fattoriale = 1;

    //0! non è 0*qualcosa ma è uguale per definizione a 1
    if(n==0)
        return 1;

    for(int i=2; i<=n; i++)
        fattoriale = fattoriale*i;

    return fattoriale;
}

int fattorialeRicorsivo(int n){
    //CASO BASE
    //......

    //PROBLEMA SIMILE A QUELLO DI PARTENZA MA PIU' "SEMPLICE" (si deve avvicinare pian piano al caso base)
    //......
}

int main(){
    int num = 0;
    cout << "Inserisci il numero positivo del quale vuoi calcolare il fattoriale: ";
    cin >> num;

    cout << "Il fattoriale (calcolato non ricorsivamente) di " << num << " e' " << fattoriale(num) << endl;
    cout << "Il fattoriale (calcolato ricorsivamente) di " << num << " e' " << fattorialeRicorsivo(num) << endl;

    return 0;
}
