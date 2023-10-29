#include <iostream>
using namespace std;

void TowerOfHanoi(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }
    TowerOfHanoi(n - 1, from, aux, to);
    cout << "Move disk" << n << "from rod" << from << "to rod" << to << endl;
    TowerOfHanoi(n - 1, aux, to, from);
}
int main()
{
    int n;
    cout << "Enter the no.of disks: ";
    cin >> n;
    TowerOfHanoi(n, 'A', 'C', 'B'); // A and C are rods , B is auxiliary
    return 0;
}