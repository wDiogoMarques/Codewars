// file:    1day.cpp
// author:  Diogo Marques
// data:    11/04/2025
// description:
//  Sum of Digits / Digital Root at codewars.com

#include <iostream>

using namespace std;


int digital_root(int n){
int aux = 0;
if(n <= 9){
    return n;
}else{
    aux = n % 10; // 5
    n = n/10; // 19
    aux = (aux + digital_root(n));
    if(aux > 9){
        aux = digital_root(aux);
    }
    return aux;
}

}

int main(){

cout << "digital_root(16) =  " << digital_root(16) << endl;
cout << "digital_root(195) =  " << digital_root(195) << endl;
cout << "digital_root(992) =  " << digital_root(992) << endl;
cout << "digital_root(167346) =  " << digital_root(167346) << endl;
cout << "digital_root(0) =  " << digital_root(0) << endl;


    return 0;
}
