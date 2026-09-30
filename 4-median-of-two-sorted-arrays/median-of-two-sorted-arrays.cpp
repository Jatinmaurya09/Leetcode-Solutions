class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size()+nums2.size());
        int i=0;
        int j=0;
        int k=0;
        while(i<nums1.size() and j<nums2.size()){
            if(nums1[i]<nums2[j]){
                ans[k]=nums1[i];
                i++;
                k++;
        }
            else{
                ans[k]=nums2[j];
                j++;
                k++;
            }
    }
            while(j<nums2.size()){
                ans[k]=nums2[j];
                j++;
                k++;
            }
            while(i<nums1.size()){
                ans[k]=nums1[i];
                i++;
                k++;
            }
            int n=ans.size();
            if(n%2==0){
                return (ans[n/2-1]+ans[n/2])/2.0;
            }
            else{
                return ans[n/2];
            }
    }
};