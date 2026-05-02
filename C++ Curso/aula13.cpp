#include <iostream>

using namespace std;

int main () {

    /*int val ;
    cout << "select a color ";
    cout << "[1] = green, [2] = blue, [3] = red \n";
    cin>> val;

    switch (val){
        case 1:
            cout << "you selected green \n";
            break;
        case 2: 
            cout << "you selected blue \n"; 
            break;
        case 3:
            cout << "you selected red \n";
            break;
        default:
        cout << "Value selected is invalid \n";    
    } 

    cout << "program terminated \n";*/

    int value;

    cout << "Select a transportation method: \n";
    cout << "[1] = car , [2] = motorcycle , [3] = airplane, [4] = helicopter \n";
    cin >> value;

    switch (value){
        case 1:
        case 2:
            cout << "ground trasportation \n";
            switch (value){
                case 1:
                    cout << "you selected car \n";
                    break;
                case 2:
                    cout << "you selected motorcycle \n";
                    break;
         }
            break;
        case 3:
        case 4:
            cout << "air trasportation \n";
            switch (value){
                case 3:
                    cout << "you selected airplane \n";
                    break;
                case 4:
                    cout << "you selected helicopter \n";
                    break;     
            }
    break;
        default:
            cout << "transportation method selected is invalid \n";
    }

    return 0;
}