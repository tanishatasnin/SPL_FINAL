#include<stdio.h>

int sumOfSevens(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
            if(arr[i]/7==0){
                sum+=arr[i];
                printf("s=%d\n",sum);
    }
    return sum;
            }


}

int main(){
    int size=5;
    int scores[size];
    for(int i=0;i<size;i++){
        scores[i]=((1500%9)+2*i);
        printf("sc=%d\n",scores[i]);
    }

    printf("Sum= %d\n",sumOfSevens(scores,size));
}
