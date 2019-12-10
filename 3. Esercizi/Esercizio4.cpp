#include <iostream>

using namespace std;

int somma(int n1, int n2, int n3, int n4, int n5){
    return n1+n2+n3+n4+n5;
}

int somma(int n1, int n2, int n3, int n4){
    return n1+n2+n3+n4;
}

int somma(int n1, int n2, int n3){
    return n1+n2+n3;
}

int somma(int n1, int n2){
    return n1+n2;
}

int somma(int n1){
    return n1;
}

int main(){
    cout << somma(3, 6, 2);
}
