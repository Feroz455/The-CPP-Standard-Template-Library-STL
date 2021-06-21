/*
Cpp_STL_Reference
SET
program upper_bound

iterator upper_bound(const key_type& key);
*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;

//main begin
int main()
{
    set<int> s;
    for(int i = 0; i < 5; i++)
    {
        s.insert(i);
    }

    cout << "The set elements are: ";
    for(auto it= s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }

    auto it = s.upper_bound(6);
    cout << "\nThe upper bound of key 6 is ";
    cout << (*it) << endl;


    getchar();
    return 0;
}
//main end
///Program end

/*
output


The set elements are: 0 1 2 3 4
The upper bound of key 6 is 5


Process returned 0 (0x0)   execution time : 1.207 s
Press any key to continue.

*/

