#include <iostream>

using namespace std;

void f(int& a, int& b){
    if(a<b){
        a = a*2;
    }else{
        if(b<a)
            b = b*2;
        else{
            a = a*2;
            b = b*2;
        }
    }
}

int main(){
    int a = 3;
    int b = 5;

    f(a,b);

    cout << "Ora a = " << a << endl;
    cout << "Ora b = " << b << endl;

    return 0;
}
