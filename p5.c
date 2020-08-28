//compare two array
#include<stdio.h>
#include<string.h>
int main(){
    int arr1[]={21,34,41,22,35};
    int arr2[]={61, 34, 45, 21, 11};
    int i,j,n1,n2;
    n1=(arr1);
    n2=strlen(arr2);
    for(i=0;i<n1;i++){
        for(j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                printf(" %d " ,arr1[j]);
            }
        }
    }
     return 0;


}
