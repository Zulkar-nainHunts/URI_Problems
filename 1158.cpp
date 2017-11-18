
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <string.h>
#include <strings.h>
#include <bits/stdc++.h>
#include <math.h>
#include <time.h>
#include <limits.h>
using namespace std;

int main() {
    long long int i,X,Y,sum;
    int N;
    scanf("%d",&N);
    
    for (int i = X; i < N; i++) {
        scanf("%d%d",&X,&Y);

    }
    sum=0;
    for(i=X;i<Y+N;i++){
        
        if(i%2==1)
        sum += i;
    }

    printf("%lld\n",sum);

    //rest something
    return 0;
}
