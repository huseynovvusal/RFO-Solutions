#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_set<int> numbers_on_paper;

    for (int i = 0; i < n; i++)
    {

        int number;
        cin >> number;

        if (numbers_on_paper.find(number) == numbers_on_paper.end())
        {
            numbers_on_paper.insert(number);
        }
        else
        {
            numbers_on_paper.erase(number);
        }
    }

    cout << numbers_on_paper.size() << endl;

    return 0;
}