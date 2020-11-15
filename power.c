#include "myMath.h"  /* Include the header */
#include <stdio.h>
#define E 2.71828
/* Function definitions */

double Power(double x , int y){
	double res =1;
    int i=0;
    if(y>0){ //if it's a positive hezka
    for(i=0; i<y ; i++){
    
        res = res*x;
        }      
    }
    else{
        for(i=-y; i>0 ; i--){ //if it's a negative hezka so it's the same but in shever
    
        res = res*x;
        } 
    res = 1.0/res;     
    }
    return res;
    }

double Exponent(int x){

    return Power(E, x);
}
