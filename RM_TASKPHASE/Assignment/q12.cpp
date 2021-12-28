#include <iostream>

using namespace std;

int fact(int x){
    if(x==1){
        return 1;
    }
    else{
        return x * fact(x-1);
    }
}

int main()
{
    int y;
    cout << "enter no. for factorial" <<endl;
    cin >> y;
    cout << "factorial is;";
    cout << fact(y) <<endl;

}
