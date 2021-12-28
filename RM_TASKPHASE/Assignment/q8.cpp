#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    cout <<"enter no. of rows for matrice " << endl ;
    cin >> x;
    cout <<"enter no. of columns for matrice " << endl;
    cin >> y;

    int mat[x][y];

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout <<"enter element" <<endl ;
            cin >> mat[i][j];
        }
    }

    for(int r=0; r<x; r++){
        for(int c=0; c<y; c++){
            cout << mat[r][c] <<" " ;}
        cout << endl;}


    cout << "transpose of the matrice is;" <<endl;
    for(int r=0; r<y; r++){
        for(int c=0; c<x; c++){
            cout << mat[c][r] <<" " ;}
        cout << endl;}







    return 0;
}
