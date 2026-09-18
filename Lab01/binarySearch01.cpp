#include <iostream>
using namespace std;
int main()
{

    // unsorted data
    int size, i, j, data[size];
    printf("Give the length of data \n");
    cin >> size;
    // input
    for (int i = 0; i < size; i++)
    {
        cin >> data[i];
    }
    // output
    printf(" the output of data \n");
    for (int i = 0; i < size; i++)
    {  
        cout << data[i] << " \t";
    }
    printf("\n");

    // sorted data
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (data[j] > data[j + 1])
            {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    // result
    printf(" the sort of data \n");
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " \t";
    }
    // to search
    int item;
    printf("Find the data \n");
    cin >> item;

    // binary search
    int low = 0, location;
    bool found;
    int high = size - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (item == data[mid])
        {
            found = true;
            location = mid;
            break;
        }
        else if (item < data[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (found == true)
    {
        cout << location << " is The location index number ";
    }
    else
    {
        cout << "not Found in the file";
    }
}