#include <iostream>
using namespace std;

int canBeChangedIntoGood(int arr[], const int size)
{
    int i;
    int oddC = 0, evenC = 0;

    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
            evenC++;
        else
            oddC++;
    }

    if (size % 2 == 0 && oddC == evenC)
        return 1;
    else if (size % 2 == 1 && oddC + 1 == evenC)
        return 1;
    return 0;
}

int isArrayGood(int arr[], const int size)
{

    int i;

    for (i = 0; i < size; i++)
        if (i % 2 != arr[i] % 2)
            break;

    if (i == size)
        return 1;
    return 0;
}

int program()
{

    int i, j;
    int n;
    int temp, count = 0;

    do
    {
        cin >> n;
    } while (n < 1 || n > 40);

    int nums[n], numsMod[n];

    for (i = 0; i < n; i++)
    {
        do
        {
            cin >> nums[i];
        } while (nums[i] < 0 || nums[i] > 1000);
    }

    for (i = 0; i < n; i++)
    {
        numsMod[i] = nums[i] % 2;
    }

    if (isArrayGood(nums, n) == 1)
        return 0;
    else if ((n == 1 && numsMod[0] != 0) || canBeChangedIntoGood(nums, n) == 0)
        return -1;
    else
    {
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (i % 2 != numsMod[i] && j % 2 != numsMod[j] && numsMod[i] != numsMod[j])
                {
                    temp = numsMod[i];
                    numsMod[i] = numsMod[j];
                    numsMod[j] = temp;
                    count++;
                }
            }
        }
        if (count == 0 && isArrayGood(nums, n) == 0)
            return -1;
        else
            return count;
    }
}

int main()
{

    int cases;
    int i;

    do
    {
        cin >> cases;
    } while (cases < 1 || cases > 1000);

    int ans[cases];

    for (i = 0; i < cases; i++)
    {
        ans[i] = program();
    }

    for (i = 0; i < cases; i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}