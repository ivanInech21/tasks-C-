#include <iostream>
using namespace std;

void sort(int & a, int & b, int & c)
{

   if(a>b) swap(a,b);
    if(b>c) swap (b,c);
    if(a>b) swap(a,b);
}

int main()
{
    int a1,a2,a3,b1,b2,b3;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
    sort(a1,a2,a3);
    sort(b1,b2,b3);
    cout<< a1*b1 + a2*b2 + a3*b3;
}
