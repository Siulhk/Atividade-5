#include <iostream>
#include <time.h>
using namespace std;
#define n 5

void mostraV(int *p);
void revers(int *p);

int main(){
    srand(time(NULL));
    int v[n];
    for(int i=0;i<=n;i++){
        v[i] = rand() %100;
    }
    mostraV(v);
    revers(v);
    mostraV(v);
}

void mostraV(int *p){
    for(int i=0;i<=n;i++){
        cout << p[i] << " ";
    }
    cout << endl;
}

void revers(int *p){
    int b[n];
    for(int i=0;i<=n;i++){
        b[i] = p[i];
    }
    for(int i=0;i<=n;i++){
        p[i] = b[n-i];
    }
}