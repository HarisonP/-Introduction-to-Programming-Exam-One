#include <iostream>
#include <cmath>
using namespace std;

int x, answer;

void first_and_last_digits(int n)
{
    int last_digit = n % 10, first_digit;

    while(n > 0)
    {
        first_digit = n % 10;
        n /= 10;
    }

    cout << first_digit * last_digit << endl;
}

int digits(int n)
{
    int last_digit, k, count = 0, power;
    k = n;
    while(k > 0)
    {
        last_digit = k % 10;
        k /= 10;
        if(last_digit % 3 == 0)
        {
            last_digit /= 3;
        }
        else
            if(last_digit % 2 == 0)
            {
               last_digit /= 2;
            }
            else
            {
                last_digit += 2;
            }

        power = pow(10.0 , count);
        count++;
        answer += last_digit * power;
    }
    return answer;

}

int reverse(int n)
{
    int reverse = 0, array[128], i = 0 , j, power, count;
    while(n > 0)
    {
        array[i] = n % 10;
        n /= 10;
        i++;
    }
    count = i-1;
    for(j = 0 ; j <= i ; j++)
    {
        power = pow( 10.0 , count);
        count--;
        reverse += power * array[j];
    }
    return reverse;
}
int main()
{
    int p;
    cin >> x;

    first_and_last_digits( x );
    cout << digits( x ) << endl;
    // max is here illegal but your code is cool and cleen so i forgive you :)
    cout << max(reverse( x ) , answer) << endl;
    system("pause");
    return 0;
}
// score 2.0/1.5 + 0.5