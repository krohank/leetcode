int removeDuplicates(int* nums, int numsSize) {
    int num=1;
    int i,j;

    for(i=1,j=1;i<numsSize;i++){
        if(nums[i]!=nums[i-1]){
            nums[j]=nums[i];
            num++;
            j++;
        }
    }
    return num;
}
