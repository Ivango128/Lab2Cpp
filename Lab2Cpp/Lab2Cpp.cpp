#include <iostream>


























using namespace std;

bool check_number() 
{
    int second;
    int n, first;
    bool prov = true;
    cout << "First namber dont any small?\n";
    cout << "Input count namber: ";
    cin >> n;
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
    if (check_number()) {
        cout << "No";
    }
    else {
        cout << "Yes";
    }
    return 0;
}

