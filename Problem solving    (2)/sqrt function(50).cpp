
#include <iostream>
#include <cmath>
#include <string>
#include<cstdlib>
using namespace std;


int MySum(inta, intb) 
{ int s = 0;    
s = a + b; 
return s; }

int main()
{ 
	int arr1[5] = { 200,100,50,25,30 }; 
    int a, b, c; 
    a = 10;  
    b = 20;  
    a++;     
     ++b;     
      c = a + b;
     cout << a << endl;  
      cout << b << endl;   
      cout << c << endl;
    for (int i = 1; i <= 5; i++) 

 {  
        cout << i << endl;     
    a = a + a * i; 
 }     
     c = MySum(a, b); 
   cout << c;   
   return 0;
}



