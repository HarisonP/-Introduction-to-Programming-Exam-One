#include <iostream>
using namespace std;

const int N = 5;
int min_el[3] = { 25, 25, 25};
int br[16];

int sum(int B[][32], int rows)
{
    int answer = 0;
    for(int i = 0 ; i < rows ; i ++)
    {
        for(int j = 0 ; j < i; j ++)
        {
            answer += B[i][j];
        }
    }
    return answer;
}

void min_elem(int B[][32], int rows, int columns)
{

    for(int i = 1 ; i < rows ; i += 2)
    {
        for(int j = 0 ; j < columns ; j ++)
        {
            if(B[i][j] <= min_el[0])
            {
                min_el[2] = min_el[1];
                min_el[1] = min_el[0];
                min_el[0] = B[i][j];
            }
            else
                if(B[i][j] <= min_el[1])
                {
                    min_el[2] = min_el[1];
                    min_el[1] = B[i][j];
                }
                else
                    if(B[i][j] <= min_el[2])
                    {
                        min_el[2] = B[i][j];
                    }
        }
    }
}

int common(int B[][32], int rows, int columns)
{

    int maxi = 0 , answer = 0;

    for(int i = 0 ; i < rows ; i ++)
    {
        for(int j = 0 ; j < columns ; j ++)
        {
            if(B[i][j] < 10) br[B[i][j]] ++;
        }
    }

    for(int i = 0 ; i < 10 ; i ++)
    {
        if(br[i] >= maxi)
        {
            maxi = br[i];
            if(i > answer) answer = i;
        }
    }
    return answer;
}

int main()
{
    int A[32][32];

    for(int i = 0 ; i < N ; i ++)
    {
        for(int j = 0 ; j < N ; j ++)
        {
            cin >> A[i][j];
        }
    }

    cout << sum(A, N) << endl;

    min_elem(A, N, N);
    for(int i = 0 ; i <= 2 ; i ++)
    {
        cout << min_el[i] << ' ';
    }
    cout << endl;

    cout << common(A, N, N) << endl;


    return 0;



}

//1.8/2.0