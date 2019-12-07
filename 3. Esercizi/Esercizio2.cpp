#include <iostream>

using namespace std;

/*
int funzioneAallaB(int& a, int& b){
    int potenza = 1;

    for(int i=0; i<b; i++){
        potenza = potenza*a; //Alla fine potenza avrà il valore di a alla b
    }


    return potenza;
}

int funzioneBallaA(int& a, int& b){
    int potenza = 1;

    for(int i=0; i<a; i++){
        potenza = potenza*b; //Alla fine potenza avrà il valore di b alla a
    }

    return potenza;
}*/

int potenza(int base, int esponente){
    int potenza = 1;

    for(int i=0; i<esponente; i++){
        potenza = potenza*base; //Alla fine potenza avrà il valore di a alla b
    }


    return potenza;
}

void funzione(int a, int b, int& aAllaB, int& bAllaA){
    aAllaB = potenza(a, b);
    bAllaA = potenza(b, a);
}


int main(){
    int a_1 = 2;
    int b_1 = 3;

    int p_1 = 0;
    int p_2 = 0;

    funzione(a_1, b_1, p_1, p_2);


    cout << "A = " << a_1 << endl;
    cout << "B = " << b_1 << endl;
    cout << "P_1 = " << p_1 << endl;
    cout << "P_2 = " << p_2 << endl;

    return 0;
}
