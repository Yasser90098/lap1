#include<iostream>

using namespace std;
     int main()
{
    
         int *ren ;
         
       ren= new int;

      *ren = 10;

cout <<ren<<endl;
cout <<*ren<<endl;

delete ren;


    return 0;

    
}
