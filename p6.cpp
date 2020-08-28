//how to find duplicate number.
#include <bits/stdc++.h>
using namespace std;
int duprem(int arr[],int n){
    int i,j,arr2[n],a=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
               arr2[a]=arr[i];
               a++;
               }

            }

        }

    for(i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
    }


int main()
{
	int arr[] = { 1,2,1,3,4,5,5,3,2,6,7,7};
	int n = sizeof(arr) / sizeof(arr[0]);
	//int sum = 6;
	duprem(arr, n);
	return 0;
}

