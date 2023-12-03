#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    char* nums[] = {"",
                    "one",   "two",   "three",
                    "four",  "five",  "six",
                    "seven", "eight", "nine"
                    };
                    
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(;a<=b;a++)
        printf("%s\n", (a < 10) ? nums[a] : ((a%2) ? "odd" : "even"));

    return 0;
}