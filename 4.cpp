#include <iostream>
using namespace std;

int add10(int *x){
    return *x+10;
}

int main(){
    int n1;
    cin >> n1;
    cout << add10(&n1) << endl;
}