#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    
	ifstream in ("addTwoNumbers.in");
    ofstream out ("addTwoNumbers.out");
   
    int a, b;

    in >> a >> b;
    out << a + b  << endl;

    in.close(); 
	out.close();
   
    return 0;
}
