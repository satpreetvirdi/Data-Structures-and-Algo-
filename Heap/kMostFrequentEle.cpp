class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int, int> map;
      priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > queue;
      vector<int> result;
      // Counting frequency of each element in map
      for (auto it : nums) {
        map[it]++;
      }
      // Inserting only k element in priority queue
      for (auto & it : map) {
        queue.push({it.second, it.first});
        if (queue.size() > k) {
          queue.pop();
        }
      }
      // Getting the top k elements in an array
      while (k--) {
        result.push_back(queue.top().second);
        queue.pop();
      }

      return result;
    }
};