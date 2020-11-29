#include <iostream>
using namespace std;

namespace math{
    double pi = 3.14159;
}

double pi = 3.14;

int main(){
    double pi = 3;

    cout << math::pi << endl;
    cout << ::pi << endl;
    cout << pi << endl;
}