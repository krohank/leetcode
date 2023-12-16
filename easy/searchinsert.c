int searchInsert(int* nums, int numsSize, int target) {
    int a=0;
    int b= numsSize-1;

    for (;a<=b;){
        int c= a+(b-a)/2;

        if (nums[c]== target){
            return c;
        } else if (nums[c]<target){
            a= c+1;
        } else {
        b= c-1;
        }
    } return a;
}
