#include <iostream>
#include <iomanip> // ম্যানিপুলেটরের জন্য 
using namespace std;

int main() {
 // i) width 15, right-justified, fill '*'
 cout << setw(15) << setfill('*') << right << "Advanced C++" << endl;
 cout  << setw(12) << setfill('*') << fixed << setprecision(6) << 45.12 << endl;
 cout << showpos << uppercase << hex << 125 << noshowpos << dec << endl;
 cout  << setw(14) << setfill('*') << fixed << setprecision(6) << 45.12 << endl;

}