#include <iostream>
using namespace std;

int step(int k)
{

    if(k == 1)
        return 1;

    if(k % 5 == 0)
        step( k/=5 );


    if(k % 7 == 0) step( k/=7 );


}
int main()
{
    int n;
    cin >> n ;
    if(step(n) == 1 ) cout << "true" << endl;
    else cout << "false" << endl;
}
//0.7/0.8