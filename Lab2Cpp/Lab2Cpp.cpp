#include <iostream>


using namespace std;

bool check_number(int n) 
{
    int second;
    int first;
    bool prov = true;
    cout << "Input naber: ";
    cin >> first;

    int i = 1;
    do {
        cout << "Input naber: ";
        cin >> second;
        prov = first < second;
        i++;
    } while (i < n && prov);

    return prov;
    
}


int main()
{
    int n;
    int i = 0;
    cout << i, "Номер первой итерации";
    cout << "First namber dont any small?\n";
    cout << "Input count namber: ";
    cin >> n;
    if (check_number(n)) {
        cout << "No";
    }
    else {
        cout << "Yes";
    }
    return 0;
}

