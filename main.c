/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: admin
 *
 * Created on June 3, 2020, 8:01 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int doesContain(long n, int I){
    while(n){
        
        if(n%10 == I){
            return 1;
        }
        
        n = n / 10;
    }
    
    return 0;
}

int main(int argc, char** argv) {
    int trait = 7;
    
    long i = 0;
    for(i = 1; i < 20000; i++){
        if(doesContain(i, trait) && doesContain(2 * i, trait) && doesContain(3 * i, trait) && doesContain(4 * i, trait) && doesContain(5 * i, trait) && doesContain(6 * i, trait) && doesContain(7 * i, trait)){
            printf("%d\n", i);
        }
    }
    
    return (EXIT_SUCCESS);
}

