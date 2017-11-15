#include <stdio.h>
int max1(int x1,int x2){
    if(x1>=x2) return x1;
    else return x2;
}
void main(){
    int t1=5,t2=8,max;
    max=max1(t1,t2);
    printf("max=%d\n",max);
}
