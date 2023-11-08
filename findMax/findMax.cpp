#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    
	ifstream in ("findMax.in");
    ofstream out ("findMax.out");
   
    int size, max; 
    in >> size;
    int numbers[size];
    
//  cout << size << endl;
        
    for (int i = 0; i < size; i++) {
    	in >> numbers[i];
	}		
	
//	for (int i = 0; i < size; i++) {
//  	cout << numbers[i] << endl;
//	}
	
	max = numbers[0];

	for (int i = 1; i < size; i++) {
    	if (numbers[i]>max)
		max=numbers[i];
	}

	out << max << endl;

    in.close(); 
	out.close();
   
    return 0;
}
