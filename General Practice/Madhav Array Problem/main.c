#include <stdio.h>
// 2, 1, 1, 0, 1, 1 

int checkLength(int size){
    //n*(n+1)/2
    int length = 0;
    int n = 1;
    while(length < size){
        length = n*(n+1)/2;
        n++;
        if(length == size){
            return 1;
        }
    }
    return 0;
}

int isMadhavArray(int a[], int size){
    
    if(!checkLength(size)){
        return 0;
    }
    
    int sizeCount = 2;
    int total = a[0];
    
    int index = 1;
    while(index < size){
        int sum = 0;
        for(int i = index; i < index+sizeCount; i++){
            sum += a[i];
        }
        if(sum == total){
            index += sizeCount;
            sizeCount++;
        }
        else{
            return 0;
        }
    }
    
    return 1;
    
}

int main()
{
    int arr[] = {2, 1, 1};
    
    printf("%d\n", isMadhavArray(arr, 3));

    return 0;
}
