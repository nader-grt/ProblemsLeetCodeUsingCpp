

#include <iostream>
#include <cmath>
#include <string>

#include <vector>

using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:

    ListNode* deleteDuplicates(ListNode* head) {
    
           
         
             ListNode* current = head;  

    while (current->next != nullptr) {
       
        if (current->val == current->next->val) {
          
            current->next = current->next->next;
        } else {
            
            current = current->next;
        }
    }

    return head;
    }
private:
    int getLength(ListNode * head)
    {
        int count = 0 ;

       ListNode * temp = head ;

       while (temp != nullptr)
       {
         count++ ;
         temp = temp->next ;
       }
        
        return count ;
    }
public:
     void printList(ListNode * head)
    {
       

       ListNode * temp = head ;

       while (temp != nullptr)
       {
         cout<<temp->val <<"    " ;
         temp = temp->next ;
       }
        
        
    }
};


int main()
{

  cout << "======================================================================\n";
  cout << "===    Remove Duplicates from Sorted List using c++ languages App ====\n";
  cout << "======================================================================\n";


     ListNode * stNode = new ListNode(1)  ;
   stNode->next   = new ListNode(1) ;
     stNode->next->next   = new ListNode(1) ;
       stNode->next->next->next   = new ListNode(1) ;
   stNode->next->next->next->next = new ListNode(2) ;
   stNode->next->next->next->next->next = new ListNode(2) ;
   stNode->next->next->next->next->next->next = new ListNode(3)  ;
stNode->next->next->next->next->next->next->next = new ListNode(3)  ;
Solution sol ;

cout<<"\nThe list are   " ;
sol.printList(stNode)   ;
ListNode * result =  sol.deleteDuplicates(stNode)  ;





       while (result != nullptr)
       {
          cout<<result->val << "  "  ;
         result = result->next ;
       }

       cout<<"\n \n "  ;
  return 0 ;
}