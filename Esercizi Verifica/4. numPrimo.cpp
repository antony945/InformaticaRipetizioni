#include <iostream>

using namespace std;

/*
Funzione che controlla se il numero dato come parametro è primo e trova anche il numero totale di divisori (modificando la variabile data come secondo parametro).

    Nel ciclo "i" parte da 2 e termina prima di "numero" perchè se "i" fosse 1 oppure "numero" la divisione tra "numero" e "i" avrebbe resto zero e la variabile
    "primo" verrebbe impostata su false, anche se magari sono gli unici due casi in cui il numero è divisibile per qualcosa.
    Io voglio invece che venga impostata su false SOLAMENTE quando è sicuro che il numero sia divisibile per un valore compreso tra 1 e "numero" ma con gli estremi esclusi
    Se alla fine del ciclo la variabile primo non è diventata false, significa che il numero è primo
    Dato che l'avevo inizializzata "true" la variabile sarà rimasta "true"

    NB: Un numero è primo quando è divisibile SOLO per 1 e per se stesso.
    NB: Se voglio tenere conto tra i divisori del numero anche di 1 e di se stesso devo aggiungerli io alla fine del ciclo (aggiungendo un +2)
*/
bool primo(int numero, int &numeroDivisori){
    bool primo = true;
    numeroDivisori = 0;

    for(int i=2;i<numero;i++){
        if(numero%i == 0){
            primo = false;
            numeroDivisori++; //Ogni volta che trova che il numero è divisibile per un certo i, aumenta la variabile numeroDivisori
        }
    }

    //Aggiungo manualemente ai divisori trovati i divisori 1 e il numero stesso
    numeroDivisori = numeroDivisori+2;

    //Ritorna il valore di primo
    return primo;
}

/*
Una funzione equivalente può essere anche questa.
    A differenza dell'altra questa fa il ciclo partendo da 1 fino al numero stesso e ogni volta che trova un divisore aumenta la variabile numeroDivisori
    Questa volta però assegna true o false solo alla fine del ciclo.

    SE numeroDivisori==2 ALLORA numero sarà primo (perchè i due divisori sono sicuramente solo 1 e se stesso)
    ALTRIMENTI numero non sarà primo

    E termina restituendo il valore della variabile bool come l'altro.

    Entrambi fanno la stessa cosa, sono solo due metodi leggermente diversi per arrivare allo stesso risultato. Puoi scegliere tu quello che preferisci
*/
bool primo2(int numero, int &numeroDivisori){
    bool primo = true;
    numeroDivisori = 0;

    for(int i=1;i<=numero;i++){
        if(numero%i == 0){
            numeroDivisori++; //Ogni volta che trova che il numero è divisibile per un certo i, aumenta la variabile numeroDivisori
        }
    }

    if(numeroDivisori==2)
        primo = true;
    else
        primo = false;

    //Ritorna il valore di primo
    return primo;
}

int main(){
    int num = 0;
    int totaleDivisori = 0;
    cout << "Inserisci un numero: ";
    cin >> num;

    cout << "PROVA DELLA FUNZIONE primo()" << endl;
    if(primo(num, totaleDivisori)){
        cout << "Il numero " << num << " e' primo";
    }else{
        cout << "Il numero " << num << " non e' primo e ha " << totaleDivisori << " divisori." << endl;
    }

    cout << "PROVA DELLA FUNZIONE primo2()" << endl;
    if(primo2(num, totaleDivisori)){
        cout << "Il numero " << num << " e' primo";
    }else{
        cout << "Il numero " << num << " non e' primo e ha " << totaleDivisori << " divisori." << endl;
    }

    return 0;
}
