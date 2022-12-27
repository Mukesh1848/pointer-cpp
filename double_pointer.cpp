#include<iostream>
using namespace std;


void update(int **ptr){
    
    //  ptr = ptr + 1; // no chnages
     
    //  *ptr = *ptr +1;  // changes
     
     **ptr = **ptr +1;  // chnages 
}

int main() {

    int i =5;
    int *p = &i;
    int **ptr =&p;
    
    /*
    
    // printing  value of i
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**ptr<<endl;
    
    // printing  adress of i 
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*ptr<<endl;
    
   
    // printitng value of first pounter 
    cout<<ptr<<endl;
    
     */
     
     cout<< "before " << i << endl;
    cout<< "before " << p << endl;
    cout<< "before " << ptr << endl;
    update(ptr);
    cout<< "after " << i << endl;
    cout<< "after " << p << endl;
    cout<< "after " << ptr << endl;
  
    return 0;
}
