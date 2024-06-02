#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    string sec;
    int id; 
    int math;
    int eng;
    int total;
};
    bool cmp(Student a, Student b){
          if (a.total > b.total)
        {
            return true;
        }
        else if (a.total < b.total) {

        return false;
        }
          else
        {

            if (a.id < b.id)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    
        
    };
int main()
{
    int n;
    cin >> n;
    Student stu[n];

    for (int i = 0; i < n; i++)
    {
        cin >> stu[i].name >> stu[i].cls >> stu[i].sec >> stu[i].id >> stu[i].math >> stu[i].eng;
        stu[i].total = stu[i].math + stu[i].eng;
    };
    sort(stu, stu + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << stu[i].name << " " << stu[i].cls << " " << stu[i].sec << " " << stu[i].id << " " << stu[i].math << " " << stu[i].eng << " " << endl;
    };
    return 0;
}