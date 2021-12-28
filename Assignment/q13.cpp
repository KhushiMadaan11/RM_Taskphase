#include <iostream>

using namespace std;

int main()
{
    int x;
    int sum=0;
    cout << "enter a number" <<endl;
    cin >> x;
    while(x>0){
        sum= sum + x%10;
        x= x/10;
    }
    cout << "sum of digits is;" <<sum ;

    return 0;
}
