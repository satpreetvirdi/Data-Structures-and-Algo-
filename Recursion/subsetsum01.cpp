// Problem Link :- https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbk5hcEJXVXZRM0JMNnlCUUgtakg4VDlfMFIyZ3xBQ3Jtc0trTzNVOE9ycE5rWmpud2U4ZEdwTXdGd2JCczEwb1J0ZTBCZldlU09uT18zWnFHbkRUQUU5S0dJS3Q1emNtTTRSekdsOWtlc1Y2MjViNnRPR1lnSktYbjduUnE4Z1oxZWNzcUQ0RlIzc2tuMXZucDBPVQ&q=https%3A%2F%2Fpractice.geeksforgeeks.org%2Fproblems%2Fsubset-sums2234%2F1&v=rYkfBRtMJr8
class Solution
{
    
    public:
     void func(int ind,int sum,vector<int> &arr ,int N,vector<int> &sumSubset){
    if(ind == N){
        sumSubset.push_back(sum);
        return;
    }
    func(ind + 1,sum+arr[ind],arr,N,sumSubset);
    func(ind+1 ,sum ,arr ,N ,sumSubset);
         
     }

        
    
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
  vector<int> sumSubset;
    func(0,0,arr,N,sumSubset);
    sort(sumSubset.begin(),sumSubset.end());
    return sumSubset;    }
};