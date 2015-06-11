//
//  main.c
//  C-Starter-Project
//
//  Created by Daniel Mathews on 2015-02-02.
//  Copyright (c) 2015 com.lighthouse-labs. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x;
    
    for (x = 1; x <= 100; x++) {
        if ((x % 5 == 0) && (x % 3 == 0)) {
            printf("FizzBuzz\n");
        } else if (x % 5 == 0) {
            printf("Buzz\n");
        } else if (x % 3 == 0) {
            printf("Fizz\n");
        } else {
            printf("%d\n", x);
        }
    }
    
    return 0;
}
