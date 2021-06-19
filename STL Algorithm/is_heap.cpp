/*
Cpp_STL_Reference
program is_heap
bool is_heap(iterator start, iterator end);
bool is_heap(iterator start, iterator end, stricWeekOrdering cmp);

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//main begin
int main()
{
    /****make_heap(), front()***/

    //initializing a vector
    vector<int> v1 = {20,30,40,25,15};
    //Converting vector into a heap
    //Using make_heap
    make_heap(v1.begin(), v1.end());

    //Displaying the maximum element of heap
    //using front()

    cout << "The maximum element of heap is : ";
    cout << v1.front() << endl;

    //Using push_back() to enter element in vector
    v1.push_back(50);

    //Using push_heap() to reader elements using front
    cout << "The maximum element of heap push is : ";
    cout << v1.front() << endl;

    // using pop_heap() to delete maximum element
    pop_heap(v1.begin(), v1.end());
    v1.pop_back();
    //Displaying the maximum element of heap using front()
    cout << "The maximum element of heap after pop is : ";
    cout << v1.front() << endl;

    /*****sort heap******/
    //Initializing a vector
    v1 = {20,30,40,25,15};
    // converting vector to a heap using make_heap()
    make_heap(v1.begin(), v1.end());

    //Displaying heap elements
    cout << "The heap elements are : ";
    for(int &x : v1)
        cout << x << " ";
    cout << endl;

    //sorting heap using sort_heap()
    sort_heap(v1.begin(), v1.end());

    //Displaying heap elements
    cout << "The heap elements after sorting are : ";
    for(int &x : v1)
        cout << x << " ";

    /********is heap*******/

    v1 = {40,30,25,35,15};
    //Declaring heap iterator
    vector<int>::iterator it1;

    //Checking if container is heap  using is_heap()
    is_heap(v1.begin(), v1.end()) ?
    cout << "\n\nThe container is heap" :
    cout << "\n\nThe container is not heap\n\n\n";

    cout << endl;

    //Using is_heap_untill() to check position till which container is heap

    auto it = is_heap_until(v1.begin(), v1.end());

    //Displaying heap eange elements
    cout << "The heap elements in container are : ";
    for(it1 = v1.begin(); it1 != it; it1++)
    {
        cout << *it1 << " ";
    }
    getchar();

    return 0;
}
//main end
///Program end

/*
output
*/
