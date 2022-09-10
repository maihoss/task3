#include<iostream>
using namespace std;

int main()
{
    int num_1, num_2; 
    char operation;
    cout<<" please enter the first number" << endl;  
    cout<< "please enter the operation" << endl ; 
    cout<< " please enter the second number" << endl; 
    cin>> num_1 >>operation>>num_2; 
    
    switch (operation){
    
    case '+' :
    cout << num_1 + num_2 ; 
    break;
    
    case '-' : 
    cout << num_1 - num_2 ; 
    break;
    
    case'*' : 
    cout << num_1 * num_2 ;
    break;
    
    case '/' : 
    cout << num_1 / num_2 ; 
    break;
   }
    
    
    return 0;
}