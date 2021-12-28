#include <iostream>

using namespace std;

int main()
{
    int n1,n2;
    cout <<"enter no.1;" <<endl;
    cin >> n1;
    cout << "enter no.2;" <<endl;
    cin >> n2;
    int mid1= n1/2;
    int mid2= n2/2;
    int sum1=0;
    int sum2=0;
    for(int i=1; i<=mid1; i++){
        if(n1%i==0){
            sum1+=i;
        }
    }
    for(int i=1; i<=mid2; i++){
        if(n2%i==0){
            sum2+=i;
        }
    }
    if(sum1==n2){
        if(sum2==n1){
            cout << "amicable";
        }
        else{
            cout <<"not amicable";
        }

    }
    else{
        cout <<"not amicable";
    }
    return 0;
}
