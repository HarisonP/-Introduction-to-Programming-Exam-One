#include<iostream>
#include<cmath>
using namespace std;

int first_and_last(int number)
{
    int result = 0, i= 0, ncopy = number;
    result = ncopy %10;
    while(ncopy > 0)
    {
        if(ncopy < 10)
        {
            return result*= ncopy;
        }
        ncopy/=10;
    }
    // return something here is a good practice. What if number is negative?
}

int solve(int number)
{
    int save = number, last_digit, new_number = 0, i = 0;
    while(save > 0)
    {
        // what is the purpose of this?
        new_number*=10;
        // it's ruining your program :(
        // -0.2
       last_digit = save % 10;
       // why last_digit != 0?
       // -0.1
       if(last_digit % 3 == 0 && last_digit != 0)
        last_digit/= 3;

else
        {
        if(last_digit % 2 == 0 && last_digit != 0)
            last_digit/=2;
        else
            last_digit+=2;
        }


        new_number= new_number + last_digit * pow(10.0,i);
        i++;
        save/=10;
        }
    return new_number;
}

int great(int number)
{
    int save= number,i = 0,rev = 0, last_digit = 0;
    while(save > 0)
    {
       rev*=10;
      last_digit = save % 10;
      rev+= last_digit;
      save/=10;
    }
    if(rev > number)
    {return rev;}
return number;
}
    int main()
    {
        int num;
        cin >> num;
        cout <<"first * last= " << first_and_last(num) << endl;
        cout << solve(num) << endl;
        cout << great(num) << endl;
        
        return 0;
    }
//score: 1.7/(1.5 + 0.5)