#include <iostream>
using namespace std;

int findMin(int arr[50], int no_of_gifts)
{

    int i, min;

    min = arr[0];

    for (i = 1; i < no_of_gifts; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    // cout << min << "\n";

    return min;
}

void program()
{

    int gifts;
    int i, j;
    int min_a, min_b;
    unsigned long long steps = 0;
    int common_step, temp_step;

    do
    {
        cin >> gifts;
    } while (gifts < 1 || gifts > 50);

    int a_arr[gifts], b_arr[gifts];

    for (i = 0; i < gifts; i++)
    {
        do
        {
            cin >> a_arr[i];
        } while (a_arr[i] < 0 || a_arr[i] > 1000000000);
    }

    for (i = 0; i < gifts; i++)
    {
        do
        {
            cin >> b_arr[i];
        } while (b_arr[i] < 0 || b_arr[i] > 1000000000);
    }

    min_a = findMin(a_arr, gifts);
    min_b = findMin(b_arr, gifts);

    for (i = 0; i < gifts; i++)
    {

        while (min_a < a_arr[i] && min_b < b_arr[i])
        {

            if (a_arr[i] - min_a > b_arr[i] - min_b)
                common_step = b_arr[i] - min_b;
            else
                common_step = a_arr[i] - min_a;

            a_arr[i] -= common_step;
            b_arr[i] -= common_step;

            // temp_step = common_step;

            // if (a_arr[i] < min_a)
            // {
            //     common_step = temp_step - min_a;
            //     a_arr[i] = min_a;
            // }
            // else if (b_arr[i] < min_b)
            // {
            //     common_step = temp_step - min_b;
            //     a_arr[i] = min_b;
            // }
            // else
            // {
            //     common_step = temp_step;
            // }

            steps += common_step;
        }

        if (min_a < a_arr[i])
        {
            steps += (a_arr[i] - min_a);
            a_arr[i] = min_a;
        }

        else if (min_b < b_arr[i])
        {
            steps += (b_arr[i] - min_b);
            b_arr[i] = min_b;
        }

        // while (min_a < a_arr[i] && min_b < b_arr[i])
        // {
        //     a_arr[i] -= 1;
        //     b_arr[i] -= 1;
        //     steps++;
        // }

        // while (min_a < a_arr[i])
        // {
        //     a_arr[i] -= 1;
        //     steps++;
        // }

        // while (min_b < b_arr[i])
        // {
        //     b_arr[i] -= 1;
        //     steps++;
        // }
    }

    // for (i = 0; i < gifts; i++)
    // {
    //     // cout << a_arr[i] << " ";
    // }
    // // cout << "\n";

    // for (i = 0; i < gifts; i++)
    // {
    //     // cout << b_arr[i] << " ";
    // }
    // // cout << "\n";

    cout << steps << "\n";
}

int main()
{

    int cases, gifts;
    int i, j;

    do
    {
        cin >> cases;
    } while (cases < 1 || cases > 1000);

    for (i = 0; i < cases; i++)
    {
        program();
    }

    return 0;
}