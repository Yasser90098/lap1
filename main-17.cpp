#include <iostream>
#include <cmath>
using namespace std;

void trig_func( double *_sin,double  *_cos, double ang)
{
  *_sin = sin(ang);
  
   *_cos = cos(ang);
 
      cout << *_cos<<endl;
      cout<<*_sin<<endl;
}


int main() {
   
    double _sin;
    double _cos;
    double ang;
    cout <<" Enter ang :";
    cin>>ang;
    trig_func(&_sin ,&_cos, ang);
    
    return 0;
}
