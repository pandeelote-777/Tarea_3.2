#include <iostream>
using namespace std;

int main()
{
    double x, y, z, sum, sum2;
    cin>>x>>y;
    sum = ((x*x*x)+(x*x))/((y*y)-y);
    sum2 = (x/y)+5;
    z = (sum-sum2)/(2*x);
    cout << z << endl;

    return 0;
}
