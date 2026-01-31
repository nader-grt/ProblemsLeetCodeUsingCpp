#include <iostream>
#include <vector>
#include <map>


using namespace std  ;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int,bool> mp  = {};

        for (int &nbr : nums)
        {
           // cout<<nbr <<"      "   ;

            if(mp.find(nbr) != mp.end())
            {
                return true ;
            }

            mp[nbr] = true ;
        }
        
        return false ;
    }
};

int main()
{ 

     vector <int> vnums = {1,2,3,1,4}  ;

     Solution sol  ;
     sol.containsDuplicate(vnums)  ;

    cout<<"\n\n" ;
      return   0  ;
}
