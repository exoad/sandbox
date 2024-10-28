#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> vector)
{
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main()
{
    int number, element;
    cin >> number;
    std::vector<int> vector;
    std::vector<int>::iterator it;
    while (number--)
    {
        cin >> element;
        vector.push_back(element);
    }

    int id, pop_iter;
    cin >> pop_iter;
    for (int i = 0; i < pop_iter; i++)
    {
        cin >> id;
        it = vector.begin() + id - 1;
        cout << vector[id - 1] << endl;
        vector.erase(it);
    }

    return 0;
}
