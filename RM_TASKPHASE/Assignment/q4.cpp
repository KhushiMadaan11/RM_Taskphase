#include <iostream>

using namespace std;

int main()
{
    int s;
    int n;
    cout << "enter integer" <<endl ;
    cin >>n;
    int l;
    cout << "enter length" <<endl;
    cin >>l;

    int arr[l];
    for(int i=l-1;i>=0;i--){
        arr[i]= n%10;
        n=n/10;
    }
    for(int i=0; i<l; i++){
        cout << arr[i] <<"  ";
    }
    int max_= arr[0];
    int j=0;
    for(int i=0; i<l; i++){
        if(arr[i]>max_){
            max_= arr[i];
            j=i;
        }
    }
    cout <<"peak index;" <<j <<endl;

    for(int i=0; i<j;i++){
        if(arr[i]>=arr[i+1]){
                s=0;}
        else{
            for(int i=j; i<l;i++){
                if(arr[i]<=arr[i+1]){
                    s=0;
                }
                else{
                    s=1;

       }
    }
    }
    }
    if(s==0){
        cout <<"not a hill no.";
    }
    else{
        cout <<"yes it a hill no.";

}
}
