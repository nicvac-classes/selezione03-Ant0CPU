#include <iostream>
using namespace std;

int main() {
    float num1, num2, massimo;

    cout<<"Inserisci due numeri"<<endl;
    cin>>num1;
    cin>>num2;

    if (num1>num2)
    {
        massimo= num1;
    }
    else
    {
        massimo=num2;
    }

    cout<<"Il maggiore è " <<massimo<<endl;
}

