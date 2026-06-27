COUNTING EVEN AND ODD ELEMENTS IN ARRAY

#include<iostream>
using namespace std;
int main()
{
    int arr[50],i,n,even=0,odd=0;
    cout<<"Enter the number of elements:";
    cin>>n;
    
    cout<<"Enter the elements:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"\nCounting even and odd numbers\n";
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
    }
    cout<<"\nNumber of even elements:"<<even<<"\n";
    cout<<"Number of odd elements:"<<odd;
    return 0;
}
