#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

bool prime(int num){
    
    if(num <=1 ){
        return false;
    }
    else if(num <=3){
        return true;
    }
    else if(num % 2 == 0 || num % 3 == 0){
        return false;
    }
    else{
        
        int i = 5;
        while(i*i <= num){
            if(num % i == 0 || num % (i+2) == 0){
                return false;
            }
            i += 6;
        }
    }
    return true;
}

int main() {
    
    int a, d, n;
    scanf("%d%d%d", &a, &d, &n);
    
    int start = n;
    int result = a;
    while(start != 0){
        if(prime(result)){
            start = start - 1;
        };
        result += d;
    };
    
    printf("%d", result - d);
    
    return 0;
}
