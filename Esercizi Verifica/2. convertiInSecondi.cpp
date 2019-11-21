#include <iostream>

using namespace std;

/*
Funzione che converte in secondi le ore, i minuti e i secondi passati come parametro per valore
*/
int convertiInSecondi(int ore, int minuti, int secondi){
    int secondiConvertiti = ore*3600+minuti*60+secondi;

    return secondiConvertiti;
}

int main(){
    int o = 0, m = 0, s = 0;
    int secondiTotali = 0;
    cout << "Inserisci le ore: ";
    cin >> o;
    cout << "Inserisci i minuti: ";
    cin >> m;
    cout << "Inserisci i secondi: ";
    cin >> s;

    secondiTotali = convertiInSecondi(o, m, s);

    cout << endl << "I secondi totali sono " << secondiTotali << endl;

    return 0;
}
