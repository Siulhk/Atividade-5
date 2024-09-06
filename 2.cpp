#include <iostream>
using namespace std;

int mult(int *x, int *y){
    return *x**y;
}

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    cout << mult(&n1,&n2);
}