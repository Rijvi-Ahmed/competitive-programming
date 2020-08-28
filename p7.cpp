#include <iostream>
using namespace std;

int main() {
  int arr[100];
  arr[0]=1;
  arr[1]=2;
 // int arrSize = sizeof(arr)/sizeof(arr[0]);
 int arrSize =arr.length();
  cout << "The size of the array is: " << arrSize;
  return 0;
}
