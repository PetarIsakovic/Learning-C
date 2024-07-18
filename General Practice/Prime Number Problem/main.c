#include <stdio.h>

//function has 2 parameters start and end, return number of prim numbers between
int isPrime(int num){
    if(num < 2){
        return 0;
    }
    
    int holder = num-1;
    while(holder > 1){
        if(num % holder == 0){
            return 0;
        }
        holder--;
    }
    return 1;
}

int primeCount(int num1, int num2){
    int larger = 0;
    int smaller = 0;
    
    if(num1 > num2){
        larger = num1;
        smaller = num2;
    }
    else{
        larger = num2;
        smaller = num1;
    }
    
    int count = 0;
    
    for(int i = smaller; i < larger; i++){
        if(isPrime(i)){
           count++; 
        }
    }
    return count;
}

int main()
{
    printf("%d\n", primeCount(1, 6));

    return 0;
}
