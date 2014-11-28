#include<iostream>
#include<cmath>
using namespace std;

//ugly codeee
int solve(int num)
{
    if(num <= 0)

        return fabs(double(num + 2));

    if(num > 0 && num <= 12)

        return pow((double)num,4) + 2 * num + 333;

    if(num > 12 && num <= 39)

        {
        if(num == 16 || num == 25 || num == 36)
            return sqrt((double)num);

        else

        if(num % 2 != 0)
            return num * num * (num - 1) * (num + 1);
        else
            return (num % 10) * (num / 2 - 6);
        }
    return 999;
}

int main()
{
    int number;
    cin >> number;
    if( solve(number) == 999)
    {
        cout << "ERROR: number is not in (-inf;39]" << endl;
    }
    else cout <<"result: " << solve(number) << endl;
    return 0;
}

//score 1.0/1.0