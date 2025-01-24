#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    //     //problem 1
    //     string name;
    //     int age;
    //     cout << "Enter your name: ";
    //     cin >> name ;
    //     cout << "Enter your age: ";
    //     cin >> age;
    //     cout << "Hello " << name << " , you are " << age << " years old. " << endl;
    //     return 0;
    // }
    // //problem 2
    // cout << setw(5) << "1" << endl;
    // cout << setw(5) << "2" << endl;
    // cout << setw(5) << "3" << endl;
    // cout << setw(5) << "4" << endl;
    // cout << setw(5) << "5" << endl;
    //problem 3
    // int a, b;
    // cout << "enter two integers: ";
    // cin >> a >> b;
    // int temp = a;
    // a = b;
    // b = temp;
    // cout << "Swapped values:  " << "a = " << a << " b = " << b << endl;
    // //problem 4
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // cout << "\nNumber\tSquare" << endl;
    // cout << "-----------------" << endl;
    // for (int i = 1; i <= n; ++i) {
    //     cout << i << "\t" << i * i << endl;
    // }
    //problem 5
#include <string>
    string input;
    cout << "Please enter a string" << endl;
    cin >> input;
    int m = (50-input.length()/2);
    cout << "|"<<setw(m)<< input << setw(m)<< "|" << endl;
    return 0;
}








