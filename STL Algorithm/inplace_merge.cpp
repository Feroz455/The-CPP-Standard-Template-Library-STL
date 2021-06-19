/*
Cpp_STL_Reference
program inplace_merge

inline void inplace_merge(iterator start, iterator middle , iterator end)
inline void inplace_merge(iterator start, iterator middle , iterator end, strictWeakOrdering cmp);
*/
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

//main begin
int main()
{
    //merge() and include()
    vector<int> v1 = {1,3,4,5,20,30};
    //Initializing 2nd vector
    vector<int> v2 = {1,5,6,7,25,30};

    //Declaring resultant vector fr mergeing
    vector<int> v3(12);

    //Using merge() to merge vectors v1 and v2 and storing result in v3
    merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

    //Displaying resultant container
    cout << "The new container after merging is : \n";
    for(int &x : v3)
        cout << x << " ";
        cout << endl;
    vector<int> v4 = {1,3,4,5,6,20,25,30};
   // Using include() to check if v4 contains v1
 includes(v4.begin(), v4.end(), v1.begin(), v1.end())?
        cout << "v4 includes v1":
        cout << "v4 does'nt include v1";


        cout << "\n\n/*****************/\n\n";
auto it = copy(v1.begin(), v1.end(), v3.begin());
 copy(v2.begin(), v2.end(), it);

 // Using inplace_merge() to sort the container
 inplace_merge(v3.begin(),it,v3.end());

 // Displaying resultant container
 cout << "The new container after inplace_merging is :\n";
 for (int &x : v3)
     cout << x << " ";
 cout << endl;
 cout << "\n\n/*****************/\n\n";

    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

