#include <iostream>
#include <vector>
#include <climits>

using namespace std;
/*
int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
*/
int maxSubArraySum(int a[], int size)
{
    int maximum = INT_MIN, current = 0;
    for (int i = 0; i < size; i++)
    {
        current = a[i];
        if (current > maximum)
            maximum = current;
        for (int j = 1; j < size - i; j++)
        {
            current += a[j + i];
            if (current > maximum)
                maximum = current;
        }
        if (current > maximum)
            maximum = current;
    }
    return maximum;
}
void rightRotatebyOne(int arr[], int starting, int ending)
{
    int temp = arr[starting];
    for (int i = starting; i < ending; i++)
        arr[i] = arr[i + 1];

    arr[ending] = temp;
}
void leftRotatebyOne(int arr[], int starting, int ending)
{
    int temp = arr[ending];
    for (int i = ending; i > starting; i--)
        arr[i] = arr[i - 1];

    arr[starting] = temp;
}

int main()
{
    int arrLen, opCount;
    vector <int> outputs;
    cin >> arrLen >> opCount;
    int arr[10000];
    for (int i = 0; i < arrLen; i++)
        cin >> arr[i];
    for (int i = 0; i < opCount; i++)
    {
        string currOp;
        cin >> currOp;
        if (currOp.compare("REPLACE") == 0)
        {
            int index, newInt;
            cin >> index >> newInt;
            arr[index] = newInt;
        }
        else if (currOp.compare("FLIP") == 0)
        {
            int starting, ending, temp;
            cin >> starting >> ending;
            for (int j = 0; j <= (ending - starting) / 2; j++)
            {
                temp = arr[starting + j];
                arr[starting + j] = arr[ending - j];
                arr[ending - j] = temp;
            }
        }
        else if (currOp.compare("ROTATERIGHT") == 0)
        {
            int starting, ending;
            cin >> starting >> ending;
            leftRotatebyOne(arr, starting, ending);
        }
        else if (currOp.compare("ROTATELEFT") == 0)
        {
            int starting, ending;
            cin >> starting >> ending;
            rightRotatebyOne(arr, starting, ending);
        }
        else if (currOp.compare("RANGEUPDATE") == 0)
        {
            int starting, ending, value;
            cin >> starting >> ending >> value;
            for (int j = starting; j <= ending; j++)
                arr[j] = value;
        }
        else if (currOp.compare("MAX") == 0)
        {
            int starting, ending, value;
            cin >> starting >> ending >> value;
            for (int j = starting; j <= ending; j++)
            {
                if (arr[j] < value)
                    arr[j] = value;
                else
                    arr[j] += value;
            }
        }
        else if (currOp.compare("SUM") == 0)
        {
            int starting, ending, sum = 0;
            cin >> starting >> ending;
            for (int j = starting; j <= ending; j++)
            {
                sum += arr[j];
            }
            outputs.push_back(sum);
        }
        else if (currOp.compare("CONDITIONALMINSUM") == 0)
        {
            int starting, ending, k, sum = 0;
            cin >> starting >> ending >> k;
            for (int j = starting; j <= ending; j++)
            {
                if (arr[j] <= k)
                    sum += arr[j];
            }
            outputs.push_back(sum);
        }
        else if (currOp.compare("COUNT") == 0)
        {
            int starting, ending, k, counter = 0;
            cin >> starting >> ending >> k;
            for (int j = starting; j <= ending; j++)
            {
                if (arr[j] == k)
                    counter++;
            }
            outputs.push_back(counter);
        }
        else if (currOp.compare("MAXSUM") == 0)
        {
            outputs.push_back(maxSubArraySum(arr, arrLen));
        }
    }
    for (int i = 0; (unsigned)i < outputs.size(); i++)
    {
        cout << outputs[i] << "\n";
    }
    return 0;
}
