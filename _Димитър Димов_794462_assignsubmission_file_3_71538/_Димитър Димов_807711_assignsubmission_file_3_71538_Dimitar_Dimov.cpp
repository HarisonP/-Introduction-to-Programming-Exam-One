#include<iostream>
using namespace std;

 int sum_under_second(int A[][3], int rows, int cols)
    {
      int sum1 = 0,sum2=0;
      for(int i = 0; i < rows ; i++)
      {
          for(int j=0;j<cols;j++)
          {
              sum1+=A[i][j];
          }
      }
    for(int x=0;x<rows;x++)
    {
        for(int y=0;y<cols-x;y++)
        {
            sum2+=A[x][y];
        }
    }

      return sum1-sum2;
    }
//0.5/0.7

/*int find(A[][3],int rows, int cols)
{
    int save[9]={0},count=0;
   for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {

            save[count]= A[i][j];
            count++;
        }
    }

}*/
    //0.3/0.5
int main()
{
    const int N=3; int A[3][3];
    int rows = N, cols = N;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
    }
    cout <<"sum: "<<sum_under_second(A,rows,cols) << endl;

   int arr[3]={0},int arri=0,int a=0,b=0,c=0;
   for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(i%2 != 0)
            {
                if(A[i][j]  > arr[0])
                arr[arri]= A[i][j];
                arri++;
            }
        }
        for(int t=0;t<9;t++)
        {
            for(z=0;z<9;z++)
            {
                arr[t] < arr[z];
            }
        }
    arr[0]


    }
// 0.5/0.7

 //   for(int i = 0; i < 3;i++)


    return 0;
}
