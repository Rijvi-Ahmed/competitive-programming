
#include<bits/stdc++.h>
using namespace std;

void DeleteAltr(string arr)
{
    int i,j,k,temp,count=0;
    int len=arr.length();
   // cout<<len;
    for(i=0; i<len; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(arr[i]!=arr[j])
            {
                break;
            }
            else
            {
                temp=arr[j];
                for(k=j; k<len; k++)
                {
                    arr[k]=arr[k+1];

                }
                j--;
                len--;
                count++;
            }
        }
    }

    cout<<count<<endl;

}
int main()
{
    int i,k;
    cin>>k;
    for(i=0; i<k; i++)
    {
        string str;
        cin>>str;
        DeleteAltr(str);
    }



    return 0;


}
