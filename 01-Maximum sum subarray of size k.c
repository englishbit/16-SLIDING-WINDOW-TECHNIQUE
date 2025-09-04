#include<stdio.h>
int main(){
    
    int n,k;
    scanf("%d",&n);
    
    scanf("%d",&k);

    //logic for special case



    if(k<1){
        printf("wrong input for k\n");
        return -1;
    }
    if(n<k){
        printf("wrong input for n\n");
        return -1;
    }
    int arr[n];

    

    //logic for taking input

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //logic for window calculating

    int window_sum=0;
    for(int i=0;i<k;i++){
        window_sum=window_sum+arr[i];
    }


    //logic for window updating 
    int max_sum=window_sum;
    for(int i=k;i<n;i++){
        window_sum=window_sum+arr[i];
        window_sum=window_sum-arr[i-k];
         if(window_sum>max_sum){
            max_sum=window_sum;
         }
    }

        printf("the maximum sum subarray of size %d is %d\n",k,max_sum);













    return 0;
}

