#include <iostream>
#include <unordered_set>
using namespace std;

int main() { int n; cin >> n;

unordered_set<int> numbers_on_paper;

for (int i = 0; i < n; i++) {

    int number;
    cin >> number;

    if (numbers_on_paper.find(number) == numbers_on_paper.end()) {
        // eger kagizda yoxdusa elave et
        numbers_on_paper.insert(number);
    } 
    else {
        // kagizda varsa sil
        numbers_on_paper.erase(number);
    }
}

// sonda kagizin uzerinde qalan nomreleri cixisa ver

cout << numbers_on_paper.size() << endl;

return 0;
}