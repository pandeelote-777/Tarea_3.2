#include <iostream>
using namespace std;

int main()
{
    double x, y, z, sum, sum2, sum_final;
    cin>>x>>y>>z;
    sum = ((2*x)+y)/z;
    sum = sum*((y*y*y)-z);
    sum2 = (x+2*y+3*z)/(z-2*y-3*x);
    sum2 = sum2+(x*x)+(z*z);
    sum_final = sum/sum2;
    cout << sum_final << endl;

    return 0;
}
