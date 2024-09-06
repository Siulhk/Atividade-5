#include <iostream>
using namespace std;

void GrandeLetra(string *p);

int main(){
    string v;
    getline(cin, v);
    GrandeLetra(&v);
    cout << v;
}

void GrandeLetra(string *p){
    for(int i=0;i<=(*p).length();i++){
        if((*p)[i] >= 97 && (*p)[i] <= 122){
            (*p)[i] -= 32;
        }
    }
}