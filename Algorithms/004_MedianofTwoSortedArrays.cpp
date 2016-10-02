class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double medianIndex = (nums1.size()+nums2.size())/2.0;
        bool isEven = (nums1.size()+nums2.size())%2==0 ? true:false;
        if(!isEven) medianIndex -= 0.5;

        vector<int> nums;
        double result = 0;
        for(int i=0,j=0,k=0; i<=medianIndex; i++){
            if(j>=nums1.size()){
                nums.push_back(nums2.at(k++));
            }
            else if(k>=nums2.size()){
                nums.push_back(nums1.at(j++));
            }
            else {
                if(nums1.at(j)<=nums2.at(k)){
                    nums.push_back(nums1.at(j++));
                }
                else if(nums1.at(j)>=nums2.at(k)){
                    nums.push_back(nums2.at(k++));
                }
            }
        }
        if(isEven){
            int n1 = nums.back();
            nums.pop_back();
            int n2 = nums.back();
            result = (n1+n2)/2.0;
        }
        else result = nums.back();

        return result;
    }
};