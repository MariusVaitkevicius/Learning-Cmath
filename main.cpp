#include <iostream>
#include <cmath>

using namespace std;

//                                 -8     m1 * m2
//  calculate         F = 6,673 * 10  * ----------- .
//                                            2
//                                           R

int main()
{
    int m, R;
    double F;
    cout<< "Enter m number:";
    cin>> m;
    cout<< "Enter R number:";
    cin>> R;

    F = 6.673 * (pow(10,-8)) * ((m*1*m*2) / (pow(R,2)));

    cout<<"F="<<F<<endl;
    return 0;
    }


