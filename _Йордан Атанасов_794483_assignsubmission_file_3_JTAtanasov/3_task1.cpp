#include <iostream>
#include <cmath>
using namespace std;

int x, answer;

void less_than_zero(int n)
{
    answer = abs(n + 2);
    cout << answer << endl;
}

void between_zero_and_twelve(int n)
{
    answer = pow((double)n , 4.0) + 2 * x + 333;
    cout << answer << endl;
}

void square(int n)
{
        answer = sqrt((double)x);
        cout << answer << endl;
}

void not_even(int n)
{
    answer = x * x * (x - 1) * (x + 1);
    cout << answer << endl;
}

void even(int n)
{
    int last_digit = n % 10;
    answer = last_digit * ( x / 2 - 6);
    cout << answer << endl;
}

int main()
{
    cin >> x;
    if( x <= 0)
    {
        less_than_zero( x );
        return 0;
    }
    //esle if could be used
    if(x > 0 && x <= 12)
    {
        between_zero_and_twelve( x );
        return 0;
    }

    if(x > 12 && x <= 39)
    {
        if(x == 16 || x == 25 || x == 36)
        {
            square( x );
            return 0;
        }
        if( x % 2 != 0)
        {
            not_even( x );
            return 0;
        }
        else
        {
            even( x );
            return 0;
        }
    }

    cout << "The number x is out of range!\n";
    return 0;

}
//good :)
// score 1.0/1.0 