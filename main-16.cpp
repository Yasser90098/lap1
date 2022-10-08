#include <iostream>

using namespace std;

int main()
{
 int number;
 cin>>number;
 int element;
 int array[number] ;
  for(int i=0;i<number;i++){
      cin >>array[i];
      
  }
       for(int i=0;i<number;i++){
       cout<<array[i]<<endl;
  }

    return 0;
}