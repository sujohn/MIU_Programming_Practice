/*
 1. An Evens number is an integer whose digits are all even. For example 2426 is an Evens number but 3224 is not.

 Write a function named isEvens that returns 1 if its integer argument is an Evens number otherwise it returns 0.
 The function signature is int isEvens (int n)
 */

int isEven(int n) {
    
    while (n > 0) {
        
        int remainder = n % 10;
        if (remainder % 2 != 0) {
            return 0;
        }
        n = n / 10;
    }
    
    return 1;
}
