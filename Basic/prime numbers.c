#include <iostream>
#include <cmath>
using namespace std;

void _Max_();
void prime(int);

int main()
{
    _Max_();

return 0;
}

void _Max_()
{
    int input;

    cout << "Enter the number in which you want to find all prime numbers up to: ";
    cin >> input;
    prime(input);
}

void prime(int Size)
{
    int Array[Size];
    int x = 0, endline = 0;

    for (int fillArray=0; fillArray<Size; fillArray++)
    {
        Array[fillArray] = fillArray+1;
    }

    for (int i=1; i<(Size-1); i++)
    {
        for (int j=2; j<=sqrt(i); j++)
        {
            if (Array[i]%j == 0)
            {
                x = 1;
            }
        }
        if (Array[i] == 4)
        {
            x =1;
        }
        if (x == 0)
        {
            cout << Array[i] << " ";
            endline++;
        }
        x = 0;
        if (endline%10 == 0)
        {
        cout << endl;
        }
    }

}
