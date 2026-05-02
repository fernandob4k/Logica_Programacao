#include <iostream>

using namespace std;

int main () {

    /*expressão ternaria = condição ? expressão1 : expressão2

    int n1 , n2, grade ;
    string  result ;
    

    cout << "Enter the first grade: " ;
    cin >> n1 ;
    cout << "Enter the second grade: " ;
    cin >> n2 ;

    grade = n1 + n2 ;

    (grade >= 60) ? result = "Approved" : result = "Reproved" ;

    cout << "The student's test score is " << grade << " he is " << result << '\n';*/
    
    int n1 , x;

    x = 5;

    cout << "Ente a value for n1:";
    cin >> n1 ;

    (n1 >= 10 ) ? x++ : x--;
    cout << "the value of x is " << x << '\n';
 
    return 0 ;

}