#include <iostream>
using namespace std;



int main()
{
   int N,a,b;
   cin>>N>>a>>b;
   if(a>b) swap(a,b);
   int way1 = b - a - 1;
   int way2 = N - b + a -1;
   cout<<min(way1,way2);


}
