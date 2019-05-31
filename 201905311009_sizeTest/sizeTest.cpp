// Within this program I will evaluate the different sizes of basic data types.

#include <iostream>
using namespace std;

int main()
{
    int a;
    short b;
    long c;
    float d;
    double e;
    long double f;
    char g;
    string myString;

    cout << "The size of an INT is "<< sizeof(a) <<" byte(s).\n";
    cout << "The size of a SHORT is "<< sizeof(b) <<" byte(s).\n";
    cout << "The size of a LONG is "<< sizeof(c) <<" byte(s).\n";
    cout << "The size of a FLOAT is "<< sizeof(d) <<" byte(s).\n";
    cout << "The size of a DOUBLE is "<< sizeof(e) <<" byte(s).\n";
    cout << "The size of a LONG DOUBLE is "<< sizeof(f) <<" byte(s).\n";
    cout << "The size of a CHAR is "<< sizeof(g) <<" byte(s).\n";

    cout << "Enter a string for size evaluation: ";
    getline (cin, myString);
    cout << "The size of your string \""<<myString<<"\" is "<< sizeof(myString) <<" byte(s).\n";

    return 0;
}