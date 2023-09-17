class Solution {
    public int[] productExceptSelf(int[] nums) {
        int product = 1;
        int[] res = new int[nums.length];
        for(int i = 0; i < nums.length; i++){
            res[i] = product;
            product *= nums[i];
        }
        product = 1;
        for(int i = nums.length - 1; i >= 0; i--){
            res[i] *= product;
            product *= nums[i];
        }
        return res;
        
    }
}