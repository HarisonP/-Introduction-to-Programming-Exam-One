#include<iostream>
using namespace std;
int main()
{
    int n, p, array1[16], array2[16];
    cin >> n;
    for(int i = 0;i < n; i++)
    {
        cin>> array1[i];
    }
    for(int j = 0;j < n; j++)
    {
        cin>> array2[j];
    }

    for(int i = 0; i < n;i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(array1[i] == array2[j])
                cout << array1[i];
        }
    }
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        //not exactly...
        // - 0.3
        for(int j = 0; j < n; j++)
        {
            if(array1[i] == array2[j])
               {
            array2[j] = 0;
               }
        if(array2[j] != 0 && array2[j] % 2 == 0)
        {
            cout << array2[j];
            array2[j]=0;
        }
        }
    }
    system("pause");
    return 0;
}
//score: 1.2/1.5 + 0.5