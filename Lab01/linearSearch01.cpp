#include <iostream>  
using namespace std;

int main()
{
    int size;
    printf("Give the number of digit \n");
    cin >> size;
    int data[size];

    for (int i = 0; i < size; i++)
    {
        cin >> data[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " \t";
    }
    printf("Give the number to find \n");
    int item, location;
    bool found;
    cin >> item;

    for (int i = 0; i < size; i++)
    {
        if (item == data[i])
        {
            found = true;
            location = i;
            break;
        }
    }
    if (found == true)
    {
        cout << location << " this is the location\n";
    }

    else
    {
        cout << "Not found in the given data\n";
    }

    return 0;
}