//
//  main.cpp
//  Home Work 12
//
//  Created by 何宗愷 on 2019/4/11.
//  Copyright © 2019 何宗愷. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    int v,b,n;
    int a=10;
    
    for(v=a;v>=1;v--){
        for(b=a;b>v;b--){
            printf(" ");
        }
        for(n=1;n<=v;n++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
