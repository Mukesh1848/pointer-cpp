#include<iostream>
using namespace std;


void update(int *p){
    
    // p = p+1; // No changes
    *p = *p +1;  // changes
}

int getSum(int arr[] , int n){  
   //   ( arr[] same as a  *arr)
    int sum =0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
    return sum;
}

int main() {

    int a = 5;
    int *p = &a;
    cout<<"before "<<*p<<endl;
    update(p);
    cout<<"after "<<*p<<endl;
    
    int arr[5] ={1,2,3,4,5};
    cout<<" sum of arr "<<getSum(arr ,5)<<endl;
    return 0;
}
