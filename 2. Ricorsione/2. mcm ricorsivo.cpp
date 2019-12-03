#include <iostream>

using namespace std;

//Definisco variabile globale inizializzandola a 0 (la utilizzer� nell'mcm)
int MAX = 0;

int mcm(int a, int b){
    //Mi assicuro che a<=b
    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }

    /*
    static int MAX = 0; //Potrei definirla in questo modo al posto di scriverla fuori da qualsiasi funzione come ora ma non � importante sapere perch�
                        //(Variabiile conserva il proprio valore tra un esecuzione e un altra)
    */

    MAX = MAX+b; //Ad ogni ricorsione il numero da controllare aumenta del termine pi� grande

    /* CONTROLLO ERRORI, faccio stampare MAX per vedere che valore assume ogni volta */
    cout << "Il valore possibile e' " << MAX << endl;

    if(MAX%a==0 && MAX%b==0) //Se il numero � divisibile contemporaneamente per A e B termino
        return MAX;

    return mcm(a, b); //Richiamo la funzione ricorsivamente (grazie alla riga 16 cambia ogni volta qualcosa, non entro in un loop)

}


int main(){
    int num1=0, num2=0;

    cout << "Inserisci due numeri positivi (premi 'invio' dopo ogni numero)" << endl;
    cin >> num1 >> num2;
    /* Dovrei fare il controllo per vedere se i numeri inseriti sono positivi ..... */

    cout << endl << "L'mcm tra " << num1 << " e " << num2 << " e': " << mcm(num1, num2);
    return 0;
}
