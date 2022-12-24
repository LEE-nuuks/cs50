#include<iostream>

using namespace std;

// convert ascii code >> (character>decimal) (decimal to character)

int main()
{
    // character to decimal
    cout << "Character to Decimal\n";
    
    // method::1
    char cha = 'A';
    int asc = cha;
    cout << asc;
    
    cout << " ";
    
    // method::2
    char user_char = ' '; // space
    cout << int(user_char);
    
    cout << " ";
    
    // method::3
    char us_char = '>';
    cout << static_cast<int>(us_char);
    
    cout << "\nDecimal to Character\n";
    
    
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
