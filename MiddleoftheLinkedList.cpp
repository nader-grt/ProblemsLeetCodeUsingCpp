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

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {

        ListNode *firstHead = head;
    
        int n = this->getLength(head);
        // int middlePair =n  % 2;

        if (n == 1)
        {
            return head;
        }
        int middleN = (n / 2 != 0);
        middleN = ((n / 2) + 1);

     
        if (n == 2)
        {

            return head->next;
        }

        for (int i = 1; i <= n; i++)
        {


            ListNode *middleHead = head;
         
              
            if (middleN == i)
            {

          
              
                for (int j = middleN; j <= n; j++)
                {
               
                
                    middleHead = middleHead->next;
                    if(middleHead->val == firstHead->val)
                    return middleHead;
                }

              
            }

             firstHead = firstHead->next;
        }

        return nullptr;
    }



/**
     when ask chatgpt 
ListNode* middleNode(ListNode* head)
    {
        int n = getLength(head);

        // position of middle (second middle when even)
        int middleIndex = n / 2;

        ListNode* temp = head;

        for (int i = 0; i < middleIndex; i++)
        {
            temp = temp->next;
        }

        return temp;
    }
 * 
 */
private:
    int getLength(ListNode *head)
    {

        ListNode *temp = head;
        int count = 0;

        while (temp != nullptr)
        {
            temp = temp->next;
            count++;
        }

        return count;
    }
};

int main()
{
    cout << "======================================================================\n";
    cout << "===       Middle of the Linked List using c++ languages App       ====\n";
    cout << "======================================================================\n";

    // Middle of the Linked List
    ListNode *head = nullptr;

    for (int i = 2; i >= 1; i--)
    {
        ListNode *stNode = new ListNode(i);

        stNode->next = head;
        head = stNode;
    }

    Solution sol;
    ListNode *resultHead = sol.middleNode(head);

    // ListNode*  resultHead = head ;

    cout << "the list of resultHead is   " << endl;
    while (resultHead != nullptr)
    {
        cout << "  " << resultHead->val;
        resultHead = resultHead->next;
    }

    cout << "\n\n ";

    return 0;
}
