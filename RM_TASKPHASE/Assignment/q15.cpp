#include <iostream>

using namespace std;

int main()
{
    int i,j,n,l,temp,min,a[100];

    cout<<"Enter no. of elements:" <<endl;
    cin>>n;


    for(i=0;i<n;i++)
    {
        cout<<"Enter the element" <<endl;
        cin>>a[i];
    }

    for(i=0;i<n-1;i++)
    {
        min=a[i];
        l=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                l=j;
            }
        }

        temp=a[i];
        a[i]=a[l];
        a[l]=temp;
    }

    cout<<"Sorted list is:" <<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<< "   ";
    }
}
