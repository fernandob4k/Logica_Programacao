#include <iostream> 
using namespace std;

int main ( ) {

    int num;

    num = 12;

    if ((num >= 3 && num <=6 )||(num > 9 && num < 15 )||(num >15 && num < 20)){
        cout << "\n valor aceito " << '\n';
    }else{
        cout << "\n Não aceito " << '\n' ;
    }
    return 0 ;
}