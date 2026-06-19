#include<iostream>
 using namespace std;
 
 int main(){
    int n,reverse=0,digit;
    cout<<"Enter a number:";
    cin>>n;
    
    int temp=n;
     
    while(n>0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if(temp==reverse){
        cout<<"Palindrome";
    }
    else{
        cout<<"Non Palindrome";
    }
    return 0;
}
        
