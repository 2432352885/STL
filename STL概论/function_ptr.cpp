#include<iostream>
using namespace std;


//函数指针 
int test(int a){
    return a;
}
int main(){
    //int (*函数名)(参数) 函数指针
    //可以赋值给
    int(*fp)(int a);
    fp = test;

    cout << fp(2) << endl;
    
    return 0;
}