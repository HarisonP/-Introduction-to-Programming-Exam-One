// Tazi zadacha se omaza totalno.. ne moga dori da q testwam, tyi kato ne mi chete interwalite ..... :) HF
#include <iostream>
#include <cstring>
using namespace std;

int end = -1 ;


int number(char str[], int size)
{
    int answer = 1;
    for(int i = 0 ; i < size ; i ++)
    {
        if(str[i] == ' ' && str[i+1] != ' ')
        {
            answer++;
        }
    }
    return answer;
}

void print(char ans[], int size)
{
    for(int i = size; i > end; i --)
    {
        cout << ans[i] ;
        ans[i] = 0;
    }
    cout << ' ';
}


int convert(char str[], int size)
{
    int k = 0;
    char ans[256];
    int i;
    for(i = 0 ; i < size ; i ++)
    {
        if(str[i] != ' ')
        {
            ans[k] = str[i];
            k++;
        }
        else
        {
            print(ans, k-1);
            end = i;
        }
    }
    if(i == size)
    {
        print(ans, k-1);
    }
}

int shortest(char str[], int size)
{
    int answer = 256;
    int br = 0;
    for(int i = 0 ; i < size ; i ++)
    {
        if(str[i] != ' ') br++;
        else
        {
            if(answer < br) answer = br;
        }
    }
    return answer;
}

int main()
{
    int size;
    char ch[256];
    int i = 0;

    cin.getline(ch, strlen(ch));
    size = strlen(ch);

    cout << number(ch, size) << endl;
    convert(ch, size);
    shortest(ch, size);
    return 0;
}
//1.6/2.2