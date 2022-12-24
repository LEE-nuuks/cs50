#include<iostream>

using namespace std;

int main()
{
    // character to decimal
    
    
    // decimal to character
    
    // method::1
    int num = 49;
    char ch = num;
    cout << ch;
    
    cout << char(32); // space
    
    
    // method::2
    int ascii = 43;
    cout << char(ascii);
    
    cout << char(32); // space
    
    
    // method::3
    int num2 = 50;
    cout << static_cast<char>(num2);
    
    cout << char(32); // space
    
    
    // method::4
    int equ = 61;
    cout << (char) equ;
    
    cout << char(32); // space
    
    
    int res = 51;
    cout << static_cast<char>(res);


    return 0;
}

// ref:: ascii table: https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
