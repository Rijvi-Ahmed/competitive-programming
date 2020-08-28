#include <bits/stdc++.h>
using namespace std;

// Function to get the missing number
int getMissingNo(int a[], int n)
{
    int sum=0,ans;
	int total = (n + 1) * (n + 2) / 2;
	for (int i = 0; i < n; i++)
		sum += a[i];
    cout<<sum<<endl;
    ans=total-sum;
	return ans;
}

// Driver Code
int main()
{
	//int arr[] = { 1, 2, 4, 5, 6 };
	//int n = sizeof(arr) / sizeof(arr[0]);
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
        cin>>arr[i];
	}
	int miss = getMissingNo(arr, n);
	cout << miss;
}
