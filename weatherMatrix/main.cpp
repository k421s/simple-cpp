 #include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int array1[25];                          //
    int array2[25];                          //
    int i            = 0;                    //initialized variables
    int j            = 0;                    //
    
    cout << "Part one" << endl;
    
    for (i = 0; i < 25; ++i){
        array1[i] = ((rand() % 25) + 25);    //assigns random numbers for each element
    }
        
    
    for (i = 0; i < 25; ++i){                //copies array one to array two
        array2[i] = array1[i];
    }
    
    cout << "Array 1:" << endl;
    
    for (i = 0; i < 25; ++i){                 //prints array one with a loop
        cout << array1[i] << " ";
    }
    
    cout << endl << "Array 2:" << endl;
    
    for (i = 0; i < 25; ++i){                 //array two loop
        cout << array2[i] << " ";
    }
    
    
    int temp[7][24];
    int const HOURS_DAY    = 24;
    int const DAYS_WEEK    = 7;
    int tuesTot            = 0;               //part two initialized variables
    int tuesAvg            = 0;
    int noonTot            = 0;
    int noonAvg            = 0;
    
    
    cout << endl << endl;
    cout << "Part two" << endl;
    cout << "A table to illustrate the weather data:" << endl;
    
    
    for (i = 0; i < 7; ++i){
        for(j = 0; j < 24; ++j){
            temp[i][j] = ((rand() % 31) + 50);     //assigns numbers to index temp
            cout << temp[i][j] << "\t";            //7 days 24 hours
        }                                          //random temperatures 
        cout << endl;
    }
    for (i = 2; ((i < 3) && (i > 1)); ++i){
        for( j = 0; j < 24; ++j){                  //sets tuesTot equal to temp
            tuesTot = temp[i][j] + tuesTot;
        }
    }
    
    tuesAvg = tuesTot / HOURS_DAY;
    cout << "The average temperature for tuesday is: " << tuesAvg << " degrees." << endl;
     
    for(i = 0; i < 7; ++i){                           //avg temp for noon
        for(j = 12; j == 12; ++j){
            noonTot = temp[i][j] + noonTot;
        }
    }
    noonAvg = noonTot / DAYS_WEEK;
    cout << "The average temperature for noon is: " << noonAvg << " degrees." << endl << endl;


    int mat1[3][3];                                   //matrix variables 
    int mat2[3][3];                                   //3x3 matrix
    int mat3[3][3];
    srand(2);
    
    cout << "Matrix 1" << endl;
    
    for(i = 0; i < 3; ++i){
        for(j = 0; j < 3; ++j){                       //random matrix numbers
            mat1[i][j] = ((rand() % 10) + 0);         //matrix 1
            cout << mat1[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << endl << "Matrix 2" << endl;
    
     for(i = 0; i < 3; ++i){                         //matrix 2
        for(j = 0; j < 3; ++j){
            mat2[i][j] = ((rand() % 10) + 0);
            cout << mat2[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << endl << "Matrix 3" << endl;
    
    for(i = 0; i < 3; ++i){                        //matrix 3
        for(j = 0; j < 3; ++j){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
            cout << mat3[i][j] << "\t";
        }
        cout << endl;
    }
            
    
    
    return 0;
}
    
            
