class Solution {
public:
    double findMedianSortedArrays(vector<int>&nums1, vector<int>&nums2) {
        vector<int>l;
        double med;
        int i=0,j=0;
        while(i<nums1.size()&&j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                l.push_back(nums1[i]);
                i++;
            }
            else
            {
                l.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size())
        {
            l.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size())
        {
            l.push_back(nums2[j]);
            j++;
        }
        if(l.size()%2==1)
        {
            med=l[l.size()/2];
        }
        else
        {
            med=l[l.size()/2]+l[l.size()/2-1];
            med=med/2;
        }
        return med;
    }
};
