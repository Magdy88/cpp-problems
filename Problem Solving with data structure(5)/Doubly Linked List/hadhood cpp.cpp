




#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <cctype>
#include <fstream>
#include<stack>
#include <queue>
#include <map>
#include "clsDblLinkedList.h"


using namespace std;








int main()
{
   clsDblLinkedList<int>MydblLinkedList;

   if (MydblLinkedList.IsEmpty())
       cout << "\n Yes List Is Empty\n";
   else
       cout << "\n No List Is Not Empty\n";
   
   
   MydblLinkedList.InsertAtBeginning(5);
   MydblLinkedList.InsertAtBeginning(4);
   MydblLinkedList.InsertAtBeginning(3);
   MydblLinkedList.InsertAtBeginning(2);
   MydblLinkedList.InsertAtBeginning(1);

   cout << "\nLinked List Contenet:\n";
   MydblLinkedList.PrintList();

  

   //cout << "\n\n Item 2 value is: " << MydblLinkedList.GetItem(2);
    

   MydblLinkedList.InsertAfter(4, 500);

   cout << "\n Afte Insert: " << "\n";
   MydblLinkedList.PrintList();







    system("pause>0");

    return 0;


}