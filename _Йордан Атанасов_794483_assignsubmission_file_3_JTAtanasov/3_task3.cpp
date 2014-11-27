#include <iostream>
#include <cmath>
using namespace std;

int first[16], second[16], common[16], difference[16], armstrong[16];
int size = 16;

void elements()
{
    int i, j, k = 0, p = 0;
    for(i = 0; i < size; i++)
    {
        for(j = 0 ; j < size ; j++)
        {
            if( second[i] == first[j] )
            {
                common[p] = first[j];
                p++;
                continue;
            }

        }
    }

    for(i = 0 ; i < p; i++)
    {
        cout << common[i] << ' ';
    }

    cout << endl;


    for(i = 0 ; i < size ; i ++)
    {
        for(j = i; j < size; j++)
        {
            if(second[i] == first[j])
                break;

            difference[k] = second[i];
            k++;

        }
    }
    for(i = 0; i < k ; i++)
    {
        if(difference[i] % 2 == 0 && difference[i] != difference[i-1])
        {
            cout << difference[i] << ' ';
        }

    }

    cout << endl;

}

void armstr(int n)
{
    int digit, arm = 0;
    int k = n;
    while(n > 0)
    {
        digit = n % 10;
        arm += pow( (double)digit, 3);
        n /= 10;
    }


    if(arm == k)
    {
        cout << k << ' ' << endl;
    }
}

int main()
{
    int i, j;


    for(i = 0  ; i < size ; i++)
    {
        cin >> first[i];
    }

    for(i = 0 ; i < size ; i++)
    {
        cin >> second[i];
    }

    elements();

    for(i = 0 ; i < size; i++)
    {
        armstr( second[i] );
    }

    return 0;

}


