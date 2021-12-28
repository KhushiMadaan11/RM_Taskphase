#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    cout << "enter no.1"<<endl;
    cin >> n1;
    cout << "enter no.2" <<endl;
    cin >> n2;
    int gcd;
    int temp;
    if(n1>n2){
        temp=n2;
    }
    else{
        temp=n1;
    }
    for(int i=1; i<=temp; i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    cout <<"greatest common divisor is: " <<gcd;
}
