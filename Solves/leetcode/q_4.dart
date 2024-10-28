class Solution {
  double findMedianSortedArrays(List<int> nums1, List<int> nums2) {
    List<int> total=[...nums1, ...nums2];
    total.sort();
    return (total.length%2==0?(total[total.length~/2-1]+total[total.length~/2])/2:total[total.length~/2]).toDouble();
  }
}