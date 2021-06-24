#include <iostream>
using namespace std;

int main(){
    int x, ac=1, num;

    cout<< "Ingresa un numero: " <<endl;
    cin>> num;

    if (num<0) {
        ac =0;
    }
        else if (num==0) {
            ac=1;
        }
    else {
        for (x = 1; x <= num; x++){
            ac = ac*x;
        }
    }
    cout<<" El Factorial de "<< num << " es: " << ac << endl;

    return 0;
}