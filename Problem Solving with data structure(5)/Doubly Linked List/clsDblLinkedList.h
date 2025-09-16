#pragma once

#include <iostream>

using namespace std;

template<class T>
class clsDblLinkedList
{
protected:
    int _Size=0;


public:

    class Node
    {
    public:
        T value;
        Node* next;
        Node* prev;
    };


    Node* head = NULL;


    void InsertAtBeginning( T value) {


        /*
            1-Create a new node with the desired value.
            2-Set the next pointer of the new node to the current head of the list.
            3-Set the previous pointer of the current head to the new node.
            4-Set the new node as the new head of the list.
        */

        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = head;
        newNode->prev = NULL;

        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
        _Size++;
    }


    // Print the linked list
    void PrintList()

    {
        Node* Current = head;

        cout << "NULL <--> ";
        while (Current != NULL) {
            cout << Current->value << " <--> ";
            Current = Current->next;
        }
        cout << "NULL";
        cout << "\n";

    }

    Node* Find( T value)
    {
        Node* Current = head;
        while (Current != NULL) {

            if (Current->value == value)
                return Current;

            Current = Current->next;
        }

        return NULL;

    }

    void InsertAfter(Node* current, T value)
    {

        Node* NewNode = new Node();
        NewNode->value = value;
        NewNode->next = current->next;
        NewNode->prev = current;

        if (current->next != NULL)
        {
            current->next->prev = NewNode;
        }
        current->next = NewNode;
        _Size++;

    }

    void InsertAtEnd( T value)
    {

        Node* NewNode = new Node();
        NewNode->value = value;
        NewNode->next = NULL;

        if (head == NULL)
        {
            NewNode->prev = NULL;
            head = NewNode;
        }
        else
        {
            Node* current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }

            current->next = NewNode;
            NewNode->prev = current;
        }
        _Size++;



    }


    void DeleteNode( Node*& NodeToDelete)
    {
        if (head == NULL || NodeToDelete == NULL)
        {
            return;
        }

        if (head == NodeToDelete)
        {
            head = NodeToDelete->next;
        }

        if (NodeToDelete->next != NULL)
        {
            NodeToDelete->next->prev = NodeToDelete->prev;
        }

        if (NodeToDelete->prev != NULL)
        {
            NodeToDelete->prev->next = NodeToDelete->next;

        }

        delete NodeToDelete;
        _Size--;


    }


    void DeleteFristNode()
    {
        if (head == NULL)
        {
            return;
        }

        Node* temp = head;
        head = head->next;

        if (head != NULL)
        {
            head->prev = NULL;
        }

        delete temp;
        _Size--;
    }


    void DeleteLastNode()
    {
        if (head == NULL)
        {
            return;
        }

        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }

        Node* current = head;
        while (current->next->next != NULL)
        {
            current = current->next;
        }

        Node* temp = current->next;
        current->next = NULL;
        delete temp;
        _Size--;
    }


    int Size()
    {
        return _Size;
    }

    bool IsEmpty()
    {
        return (_Size == 0 ? true : false);
    }

    void Clear()
    {
        while (_Size > 0)
        {
            DeleteFristNode();
        }
    }



 //Reverseهدفها هو عكس القائمة بحيث يصبح الرأس في نهاية القائمة، والعقدة الأخيرة هي الرأس الجديد
    void Reverse()
    {
        Node* current = head;
        Node* temp = nullptr;

        while (current != nullptr)
        {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }
      
        if (temp != nullptr)
        {
            head = temp->prev;
        }
        
       
    }

    Node* GetNode(int index)
    {
        int counter = 0;

        if (index > _Size - 1 && index < 0)
            return NULL;

        Node* current = head;
        while (current != NULL && (current->next != NULL))
        {
            if (index == counter)
                break;

            current = current->next;
            counter++;
        }
        return current;

    }

   T GetItem(int index)
    {
      
       Node* item = GetNode(index);

       if (item == NULL)
           return NULL;
       else
           return item->value;
        
    }


   bool UpdateItem(int index, T NewValue )
   {
     
       Node* Item = GetNode(index);

       if (Item != NULL)
       {
           Item->value = NewValue;
           return true;
       }

       return false;

       
       
       
   }


   bool InsertAfter(int Index, T value)
   {
       Node* item = GetNode(Index);

       while (item != NULL)
       {
           InsertAfter(item, value);
           return true;
       }
       
       return false;
       
   }







































};

