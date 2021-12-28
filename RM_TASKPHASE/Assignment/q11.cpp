#include <iostream>
using namespace std;

int BiSearch(int arr[], int num, int beg, int end)
{
 int mid;

 if (beg > end){

  cout << "Number is not found";
  return 0;

 } else {

  mid = (beg + end) / 2;

  if(arr[mid] == num){

   cout << "Number is found at index " << mid;


  } else if (num > arr[mid]) {

   BiSearch (arr, num, mid+1, end);

  } else if (num < arr[mid]) {

   BiSearch (arr, num, beg , mid-1);
  }
 }


}

int main() {

 int arr[10], num, i, n, beg, end;

 cout <<"Enter the size of an array";
 cin >> n;

 cout <<"Enter the sorted values";

 for(i=0; i<n; i++) {

  cin >> arr[i];
 }

 cout <<"Enter a value to be search";
 cin >> num;

 beg = 0;
 end = n-1;

 BiSearch (arr, num, beg, end);

 return 0;
}
