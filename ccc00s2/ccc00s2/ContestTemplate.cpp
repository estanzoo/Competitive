#include <iostream>

using namespace std;

int main()
{
    double stream[100] = { 0 };
    int og, currentOp, counter = 0;
    cin >> og;
    counter += og;
    for (int i = 0; i < og; i++)
    {
        cin >> stream[i];
    }
    while (true)
    {
        cin >> currentOp;
        if (currentOp == 77)
            break;
        if (currentOp == 99)
        {
            int index, percent;
            cin >> index;
            cin >> percent;
            counter++;
            for (int i = counter - 1; i >= index; i--)
                stream[i + 1] = stream[i];
            stream[index] = stream[index - 1] * (100 - percent) / 100;
            stream[index - 1] = stream[index - 1] * percent / 100;
        }
        else if (currentOp == 88)
        {
            int index;
            cin >> index;
            counter--;
            stream[index - 1] += stream[index];
            for (int i = index; i < counter; i++)
            {
                stream[i] = stream[i + 1];
            }
        }
    }
    for (int i = 0; i < counter; i++)
    {
        cout << stream[i];
        if (i != counter - 1)
        {
            cout << " ";
        }
        else
        {
            cout << "\n";
        }
    }
    return 0;
}