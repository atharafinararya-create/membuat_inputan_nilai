

#include <iostream>
using namespace std;
int main() {
    int nilai;
    cout<<"masukan nilai anda : ";
    cin>>nilai;
    if (nilai>90)
    {
        cout<<"hasil nilai anda adalah : A";
    } 
    else if (nilai>80)
    {
        cout<<"hasil nilai anda adalah : B";
    }
    else if (nilai>70)
    {
        cout<<"hasil nilai anda adalah : C";
    } else {
        cout<<"hasil nilai anda adalah : D";
    }
    return 0;
}
