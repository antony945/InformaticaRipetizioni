#include <iostream>

using namespace std;

int mcd(int a, int b){
    int mcd = 0;

    if(a%b == 0)
        return b;

    return mcd(b, a%b);


int main(){
    cout << "La somma delle cifre voluta e': " << f(123);

    return 0;
}
