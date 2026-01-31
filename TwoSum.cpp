#include <iostream>
#include<vector>
#include <unordered_map>
#include <algorithm>

using namespace std ;

class Solution {
public:

    vector<int> twoSum(vector<int>& nums,int target) {
        

    // store indexes 

    //27331214

  vector<int>  resultNums ;
    //   sort(nums.begin(), nums.end());
int length = nums.size() ;
  cout<<nums.size() <<endl ;

//if(length <=2) return ;

  for (int i = 0; i < nums.size(); i++)
  {
   
     for (int j = i+ 1; j < length; j++)
     {
        if((nums[i] + nums[j] ==  target))
        {
            resultNums.push_back(i)  ;
            resultNums.push_back(j)  ;
            return resultNums ;
        }
     }
       
  }
  











        
       return {};

    }

};



int main()
{

      Solution sol ;
      vector<int>  vNumbers = {2,7,5,8,10,15}  ;


vector<int> result = sol.twoSum(vNumbers,13)  ;


 cout<<"\n \nAll indexes are  " ;
for (auto &index : result)
{
   cout<<index << "     " ;
}

        


cout<<"\n\n\n"  ;
    return 0 ;
}
