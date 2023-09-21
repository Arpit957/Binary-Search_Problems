class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
          priority_queue<int>pq;
        for(auto &x:nums1){
            pq.push(x);
        }
        
        for(auto &x:nums2){
            pq.push(x);
        }
        
        int n=pq.size();
        for(int i=0; i<(n/2)-1; ++i){
            pq.pop();
        }
        
         double res=0.0;
        if(n&1){
            pq.pop();
            res+=pq.top();
        }
        else {
            res+=pq.top();
            pq.pop();
            res+=pq.top();
            res/=2;
        }
        
        return res;
    }
};
