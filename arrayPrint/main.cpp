#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int array1[25];
    int array2[25];
    int i = 0;
    
    for(i = 0; i < 25; ++i){
        array1[i] = ((rand() % 10) + 10);
    }
        
    
    for( i = 0; i < 25; ++i){
        array2[i] = array1[i];
    }
    cout << "Array 1:" << endl;
    
    for(i = 0; i < 25; ++i){
        cout << array1[i] << " ";
    }
    
    cout << endl << "Array 2:" << endl;
    
    for(i = 0; i < 25; ++i){
        cout << array2[i] << " ";
    }
    

	
	return 0;
}                      
