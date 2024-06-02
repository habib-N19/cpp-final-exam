#include <bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string nm;
    int cls;
    string s;
    int id;

};
int main()
{
    int n;
    cin >> n;
    Student stu[n];
    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].nm >> stu[i].cls >> stu[i].s >> stu[i].id;
    }
    int i= 0;
    int j = n - 1;
    while (i < j)
    {
        swap(stu[i].s, stu[j].s);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << stu[i].nm << " " << stu[i].cls << " " << stu[i].s << " " << stu[i].id << endl;
    }

    return 0;
}