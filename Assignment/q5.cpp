#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout <<"enter a no." <<endl;
    cin >> n;
    int b=0;
    int i=0;
    while(n>0){
        b+=(n%2)*pow(10,i);
        n/=2;
        i++;
    }
    cout <<"binary no. is: " <<b;
}
