MAXIMUM ELEMENT

#include<iostream>
using namespace std;

int main(){
    int arr[50],i,n;
     
    
    cout<<"Enter the number of elements:";
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    };
    int max=arr[0];
    cout<<"Maximum element";
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Max element is:"<<max;
    return 0;
    
}

OUTPUT
Enter the number of elements:5
10 4 70 53 6
Maximum elementMax element is:70

