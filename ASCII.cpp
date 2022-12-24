#include<iostream>

using namespace std;

// v1
void myKeyboard() {
    // calculator with ascii
    int ch1, ch2;
    cout << "ch1: "; // get ascii value from the user
    cin >> ch1;
    cout << "ch2: "; // get ascii value from the user
    cin >> ch2;
    
    // user give that ascii decimal we use it as our variable name of our program
    int n1 = char(ch1);
    int n2 = char(ch2);
    
    cout << "n1: ";
    cout << n1;
    cin >> n1;
    cout << "n2: ";
    cin >> n2;
    
    char opertion;
    cout << "op: ";
    cin >> opertion;
    
    int space;
    cout << "space? \n\t1. yes\n\t2.no" << endl;
    cin >> space;
    if(space == 1){
        space = 32;
    }
    if(static_cast<int>(opertion) == 43)
    {
        cout << char(ch1) << static_cast<char>(space) << opertion << static_cast<char>(space) << char(ch2) << static_cast<char>(space) << char(61) << static_cast<char>(space) << n1 + n2;
    }
    else if(static_cast<int>(opertion) == 45)
    {
        cout << char(ch1) << static_cast<char>(space) << opertion << static_cast<char>(space) << char(ch2) << static_cast<char>(space) << char(61) << static_cast<char>(space) << n1 - n2;
    }
    else if(static_cast<int>(opertion) == 42)
    {
        cout << char(ch1) << static_cast<char>(space) << opertion << static_cast<char>(space) << char(ch2) << static_cast<char>(space) << char(61) << static_cast<char>(space) << n1 * n2;
    }
    else if(static_cast<int>(opertion) == 47)
    {
        cout << char(ch1) << static_cast<char>(space) << opertion << static_cast<char>(space) << char(ch2) << static_cast<char>(space) << char(61) << static_cast<char>(space) << n1 / n2;
    }
    
}


// v2
void asciiCAL() {
    
    // calculator with ascii
    
    int ch1, ch2;
    cout << "ch1: ";
    cin >> ch1;
    cout << "ch2: ";
    cin >> ch2;
    
    // int n1 = char(ch1);
    // int n2 = char(ch2);
    int n1,  n2;
    
    cout << char(ch1) << "= ";
    cin >> n1;
    cout << char(ch2) << "= ";
    cin >> n2;
    
    int choose;
    char opertion;
    cout << "select the right opertion: ";
    cout << "\n\t1. +\n\t2. -\n\t3. *\n\t4. /\n";
    cin >> choose;
    if(choose == 1) {
        opertion = '+';
    }
    else if (choose == 2) {
        opertion = '-';
    }
    else if (choose == 3) {
        opertion = '*';
    }
    else if (choose == 4) {
        opertion = '/';
    }
    
    int space;
    cout << "space? \n\t1. yes\n\t2.no" << endl;
    cin >> space;
    if(space == 1){
        space = 32;
    }
    if(static_cast<int>(opertion) == 43)
    {
        cout << char(ch1) << static_cast<char>(space) << opertion << static_cast<char>(space) << char(ch2) << static_cast<char>(space) << char(61) << static_cast<char>(space) << n1 + n2;
    }
    else if(static_cast<int>(opertion) == 45)
    {
        cout << char(ch1) << static_cast<char>(space) << opertion << static_cast<char>(space) << char(ch2) << static_cast<char>(space) << char(61) << static_cast<char>(space) << n1 - n2;
    }
    else if(static_cast<int>(opertion) == 42)
    {
        cout << char(ch1) << static_cast<char>(space) << opertion << static_cast<char>(space) << char(ch2) << static_cast<char>(space) << char(61) << static_cast<char>(space) << n1 * n2;
    }
    else if(static_cast<int>(opertion) == 47)
    {
        cout << char(ch1) << static_cast<char>(space) << opertion << static_cast<char>(space) << char(ch2) << static_cast<char>(space) << char(61) << static_cast<char>(space) << n1 / n2;
    }
    
}

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
