class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size=nums1.size();
        int j=0;
        for(int i=m;i<size;i++)
        {
            nums1[i]=nums2[j];
            j++;
        }
        sort(nums1.begin() , nums1.end());
        
    }
};


/*
// more optimised sol

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //int size=nums1.size();
        int j=0;
        for(int i=m;i<n+m;i++)
        {
            nums1[i]=nums2[j];
            j++;
        }
        sort(nums1.begin() , nums1.end());
        
    }
};*/