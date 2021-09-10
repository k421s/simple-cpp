#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int mat1[3][3];
    int mat2[3][3];
    int mat3[3][3];
    int i = 0;
    int j = 0;
    srand(2);
    
    cout << "Matrix 1" << endl;
    
    for(i = 0; i < 3; ++i){
        for(j = 0; j < 3; ++j){
            mat1[i][j] = ((rand() % 10) + 0);
            cout << mat1[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << endl << "Matrix 2" << endl;
    
     for(i = 0; i < 3; ++i){
        for(j = 0; j < 3; ++j){
            mat2[i][j] = ((rand() % 10) + 0);
            cout << mat2[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << endl << "Matrix 3" << endl;
    
    for(i = 0; i < 3; ++i){
        for(j = 0; j < 3; ++j){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            cout << mat3[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
