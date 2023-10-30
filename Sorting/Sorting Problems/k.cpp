class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n =nums1.size();
        int m = nums2.size();
        int k = n+m;
        vector<int> temp(k);
        
        int a=0;
        int b=0;
        int c=0;

        while (a<n && b<m){
            if (nums1[a] <= nums2[b]) {
                temp[c++]=nums1[a++];
            }
            else {
                temp[c++]=nums2[b++];
            }
        }

        while(a<n1){
            temp[c++]=nums1[a++];
        }

        while(b<n2){
            temp[c++]=nums2[b++];
        }
    }
    double ans=0;
    if(k%2!=0){
        ans=temp[k/2];
    }
    else{
        ans=(temp[(k/2)-1]+temp[k/2])/2;
    }
    return ans;
};