#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int x){
    if (x > 1){
        x = fibonacci(x - 1) + fibonacci(x - 2);
    }else if(x == 0||x == 1)
        x = x;
    else;
    return x;
}
