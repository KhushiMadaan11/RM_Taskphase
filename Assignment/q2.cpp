#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    cout <<"enter no. of rows for matrice 1" << endl ;
    cin >> x;
    cout <<"enter no. of columns for matrice 1" << endl;
    cin >> y;

    int mat1[x][y];

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout <<"enter element" <<endl ;
            cin >> mat1[i][j];
        }
    }

    for(int r=0; r<x; r++){
        for(int c=0; c<y; c++){
            cout << mat1[r][c] <<" " ;}
        cout << endl;}




    int a;
    int b;
    cout <<"enter no. of rows for matrice 2" << endl ;
    cin >> a;
    cout <<"enter no. of columns for matrice 2" << endl;
    cin >> b;

    int mat2[a][b];

    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            cout <<"enter element" <<endl ;
            cin >> mat2[i][j];
        }
    }

    for(int r=0; r<a; r++){
        for(int c=0; c<b; c++){
            cout << mat2[r][c] <<" " ;}
        cout << endl;}

    int prod[x][b];
    int sum=0;
    for(int i=0; i<x; i++){
        for(int j=0; j<b; j++){
            for(int k=0; k<y; k++){
                sum += mat1[i][k] * mat2[k][j];
            }
            prod[i][j]=sum;
            sum=0;

        }
    }

    if(y!=a){
        cout << "not compatible" << endl ;
    }




    else{
        cout <<"product matrix is;" << endl;
            for(int r=0; r<x; r++){
                for(int c=0; c<b; c++){
                    cout << prod[r][c] <<" " ;}
                cout << endl;}
    }


    return 0;
}
