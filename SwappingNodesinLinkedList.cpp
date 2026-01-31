

#include <iostream>
#include <cmath>
#include <string>
#include <limits>
#include <cstdlib>
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

/*

Constraints:

The number of nodes in the list is n.
1 <= k <= n <= 105
0 <= Node.val <= 100



*/

class Solution
{
public:
  ListNode *swapNodes(ListNode *head, int k)
  {
    int n = this->getLengthNodes(head);
    int posElement = (n - k + 1);

     if(head == nullptr) return nullptr ;

    cout << "\nThe  list is  Before \t         ";
    this->PrintListNodes(head);

    ListNode *cureentPtr = head;
     
    ListNode *resultCurrentPtr = cureentPtr;

       ListNode *firstValueNode = nullptr;
          ListNode *secondValueNode = nullptr;
 
          int index = 1 ;
          while (index <= n)
          {
        
                   if(index == k)
                   {
              

                    firstValueNode = cureentPtr ; 
                   }


                     if(index == posElement)
                   {
               
                    secondValueNode = cureentPtr  ; 
                   }

            index++ ;
            cureentPtr = cureentPtr->next  ;
          }
          

            //  cout<<"   \n  firstValueNode  of k          =         "<<firstValueNode->val<<endl ; 
            //     cout<<"    secondValueNode of posElement =         "<<secondValueNode->val<<endl ; 

                int temp = firstValueNode->val ;
                firstValueNode->val = secondValueNode->val ;
                secondValueNode->val = temp ;


    return resultCurrentPtr;
  }

private:
  int getLengthNodes(ListNode *head)
  {

    ListNode *temp = head;
    int count = 0;
    while (temp != nullptr)
    {
      count++;
      temp = temp->next;
    }

    return count;
  }

  // just see list
public:
  void PrintListNodes(ListNode *head)
  {

    ListNode *temp = head;
    while (temp != nullptr)
    {
      cout << temp->val << "  ";
      temp = temp->next;
    }
  }
};

int main()
{

  cout << "======================================================================\n";
  cout << "===      Swapping Nodes in a Linked List using c++ languages App  ====\n";
  cout << "======================================================================\n";

  ListNode *head = nullptr;
  for (int i = 7; i >= 1; i--)
  {
    ListNode *stNode = new ListNode(i);

    stNode->next = head;
    head = stNode;
  }

  Solution sol;
  // sol.PrintListNodes(head)  ;

  ListNode *resultListSwap = sol.swapNodes(head, 2);

  cout << "\nThe  list after swaping are   \t ";


  while (resultListSwap != nullptr)
  {
    cout << resultListSwap->val << "  ";
    resultListSwap = resultListSwap->next;
  }

  cout << "\n \n\n";

  return 0;
}