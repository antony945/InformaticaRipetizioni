#include <iostream>

using namespace std;

/*
int somma(int primoP, int secondoP, int terzoP, int quartoP, int quintoP)
    return primoP+secondoP+terzoP+quartoP+quintoP;

int somma(int n1, int n2, int n3, int n4)
    return n1+n2+n3+n4;

int somma(int n1, int n2, int n3)
    return n1+n2+n3;

int somma(int n1, int n2)
    return n1+n2;

int somma(int n1)
    return n1; */

int somma(int primoP, int secondoP=0, int terzoP=0, int quartoP=0, int quintoP=0)
    return primoP+secondoP+terzoP+quartoP+quintoP;



int main(){
    somma(3 , 6, 2);
}
