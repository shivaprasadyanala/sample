 #include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
 bool fun(string i,string j)
{
    int n = i.length();
    int m = j.length();
    if(n == m)
        return (i < j);
    return n < m;
}

//Driver Program
int main()
{
    int n;
    cin >> n;
    vector <string> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end(), fun);
    for(int i = 0; i < n; i++)
        cout << arr[i] << endl;
}
