#include<iostream>
using namespace std;

int test(int a){
    return a;
}
int main(){

    int(*fp)(int a);
    fp = test;

    cout << fp(2) << endl;
    
    return 0;
}