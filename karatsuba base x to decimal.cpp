#include <iostream>
#include <math.h>
#include <string>

// PRIYANSH MEHTA
// 20BCE2292

long get_size(long num){              
    long count = 0;
    while (num > 0) {
        count++;
        num = num/10;
    }
    return count;
}

long karatsuba(long x, long y){                 // using karatsuba algorithm to multiply 
    if ((x<10) || (y<10)){
        return x*y;
    }
    
    long size = fmax(get_size(x), get_size(y));
    long n = (int)ceil(size / 2.0);
    long p = (long)pow(10, n);
    long a = (long)floor(x / (double)p);
    long b = x % p;
    long c = (long)floor(y / (double)p);
    long d = y % p;
    
    long ac = karatsuba(a, c);
    long bd = karatsuba(b, d);
    long e = karatsuba(a + b, c + d) - ac - bd;
    
    return (long)(pow(10 * 1L, 2 * n) * ac + pow(10 * 1L, n) * e + bd);
}

int main(){
    std::string x, y;
    int base;
    std::cout << "Enter value of first number: "; std::cin >> x;
    std::cout << "Enter value of second number: "; std::cin >> y;
    std::cout << "Enter base: "; std::cin >> base;
    std::cout << std::endl;
    
        /*int num1 = stoi(x, 0, 2); //converts from base 2 to decimal
        int num2 = stoi(y, 0, 2); //converts from base 2 to decimal
        
        int num3 = stoi(x, 0, 8); //converts from base 8 to decimal
        int num4 = stoi(y, 0, 8); //converts from base 8 to decimal*/
        
        int num5 = stoi(x, 0, base); //converts from user entered base to decimal
        int num6 = stoi(y, 0, base); //converts from user entered base to decimal
    
    std::cout << num5 << ", " << num6 << std::endl;
    std::cout << karatsuba(num5, num6) << std::endl;
    
}

