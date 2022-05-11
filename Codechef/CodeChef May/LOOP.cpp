#include <iostream>
#include <vector>
#include <cstdlib>
#include<math.h>
using namespace std;

 int loop(int initial , int final, int numOfCheckpoints ,int t)
{
    

    int ans,ans1 ,ans2;
    for (int i = 0; i < t; i++)
    {
      
        if (final < numOfCheckpoints || initial < numOfCheckpoints)
        {
            
                ans1 = min(abs(final - numOfCheckpoints), abs(initial- final + numOfCheckpoints));
           
                ans2 = min(abs(numOfCheckpoints - final) , abs(initial-final+numOfCheckpoints));
                if(ans1>ans2){
                    return ans = ans2;
                }else{
                    return ans = ans1;
                }
            
        }
    }
    return ans;

    
}

int main()
{
    int t;
    cin >> t;
    int initial, final, numOfCheckpoints;
    
      for (int i = 0; i < t; i++)
    {
        cin >> initial >> final >> numOfCheckpoints;
        cout<<loop(initial, final, numOfCheckpoints ,t)<<endl;
    }
    
    return 0;
}
