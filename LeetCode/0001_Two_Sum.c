/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

 // @lc code=start


 /**
  * Note: The returned array must be malloced, assume caller calls free().
  */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i=0,j;
    int *result=(int*)malloc(sizeof(int)*2);
    while(i<numsSize-1){
        j=i+1;
        while(j<numsSize){
            if(nums[i]+nums[j]==target){
                *returnSize=2;
                result[0]=i;
                result[1]=j;
                return result;
            }
            j++;
        }
        i++;
    }
    return result;
}
// @lc code=end