ARRAYS...DECLARE ARRAY OF SIZE 5 AND
TAKE FIVE NUMBERS AND PRINT IT ALL

  #include<iostream>
  using namespace std;
  int main(){
    int arr[5],i;
    cout<<"Enter a five numbers:";
    for(i=0;i<5;i++){
        cin>>arr[i];
    };
    cout<<"The elements in array are:";
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    };
    return 0;
  }
    

OUTPUT
Enter five elements:1 2 3 4 5
The elements in array are1 2 3 4 5 
