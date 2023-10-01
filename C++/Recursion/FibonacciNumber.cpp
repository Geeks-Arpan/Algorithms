#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n<=0){
        cout<<"It should be higher than 0"<<endl;
        return 0;
    }
    if(n==1||n==2) return 1;
    return (fibonacci(n-1)+fibonacci(n-2));
}
int main(){
    int n;
    cout<<"Enter the value of n = ";
    cin>>n;
    int fib = fibonacci(n);
    cout<<"The fibonacci number at position n = "<<fib;
    return 0;
}