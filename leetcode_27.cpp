int removeElement(int* nums, int numsSize, int val){
    if(numsSize == 0)
        return 0;
    int *left,*right;
    left = nums;
    right = nums + numsSize - 1;
    int count=0;
    while(left < right)
    {
        if((*right) == val)
        {
            right--;
        }
        if((*left) == val && (*right) != val)
        {
            *left = *right;
            *right = val;
            right--;
        }
        else if((*left) ==val)
        {
            continue;
        }
        left++;
        count++;
    }
    if((*left) != val)
        count++;
    return count;
}