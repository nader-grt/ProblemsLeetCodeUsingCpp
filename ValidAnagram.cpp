#include <iostream>
#include <vector>
#include <map>
#include <cctype>



using namespace std ;


class Solution {
public:
    bool isAnagram(string s, string t) {
         map <char,int> mp  = {};
   
       if(s.length() > t.length()  || t.length() > s.length()) return false ;
     
   
        for(int i = 0 ; i <s.length() ;i++)
        {
          if(s[i])
          {
            mp[s[i]]++ ;
          }

            

        }

    for(int i = 0 ; i <t.length() ;i++)
        {
          

          if(mp[t[i]] == 0)
          {
            return false ;
          }
          
           mp[t[i]]-- ;
        }
       

        return true ;

    }

   
};


int main()
{



    return 0 ;
}