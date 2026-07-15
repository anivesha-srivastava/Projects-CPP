#include<iostream>
#include "Headers/conversion.h"
using namespace std;

int decimal(int dec){
    int ans = 0;
    int power = 1;
    while(dec>0){
        int remainder = dec%10;
        ans += remainder*power;
        dec /=10;
        power *=2;
    }
    return ans;
}
int binary(int bi){
    int ans=0;
    int power =1;
    while(bi>0){
        int remainder = bi%2;
        ans += (remainder*power);
        power *= 10;
        bi /=2;
    }
    return ans;
}