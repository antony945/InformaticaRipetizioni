#include <iostream>

using namespace std;

void funzione(char a, int n){ //che tipo deve avere la funzione? void
    int c = 0;

    while(c<n){
        cout << a << endl;
        c++;
    }
}

void funzione(char a){
    for(int i=0; i<5; i++)
        cout << a << endl;
}


int main(){
    funzione('z');

    return 0;
}
