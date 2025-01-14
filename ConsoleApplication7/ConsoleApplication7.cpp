#include <iostream>
using namespace std;



int main()
{
    const int n = 50;
    int arr[n]{};
    int l = 0;
    for (int i = 2; i < 1000; i++)
    {
        int d = 0; //определяет делители 
        for (int j = 2;j<i/2+1;j++) //для числа 15 все делители не больше 8
            if (i % j == 0)
            {
                d = 1;
                break;


            }
        if (d == 0)
        {
            if (l == 50)
                break;
                arr[l] = i;
                l++;

        }
        
    }
    //for(int i =0;sifeof(arr)/sizeof(arr[0]);i++)----старый способ
    for (int i=0;i<n-1;i++)
        for(int j = i;j<n;j++)

        cout <<arr[i]<<'*'<<arr[j]<<'='<< arr[i] * arr[j] << endl;
    /// 2,3,4,6,11,13
    //5,10,14,22,26.25.21.33.30
    

}