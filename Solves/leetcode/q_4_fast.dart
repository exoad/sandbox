// still unintended, but after analysis, addAll is faster than spread op
class Solution {
  double findMedianSortedArrays(List<int> nums1, List<int> nums2) {
    nums1.addAll(nums2);
    nums1.sort();
    return (nums1.length%2==0?(nums1[nums1.length~/2-1]+nums1[nums1.length~/2])/2:nums1[nums1.length~/2]).toDouble();
  }
}