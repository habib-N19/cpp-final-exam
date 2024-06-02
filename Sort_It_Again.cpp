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

};
bool cmp(Student a, Student b)
{
    if(a.eng > b.eng)
    {
        return true;
    }
    else if (a.eng < b.eng){
        return false;
    }
    else
    {
        if(a.math > b.math)
        {
            return true;
        }
        else if(a.math < b.math)
        {
            return false;
        }
        else
        {
            if(a.id < b.id)
            {
                return true;
            }
            else
            {
                return false;
            }
    }
}
};
int main()
{
    int n;
    cin>>n;
    Student std[n];
    for(int i=0; i<n;i++)
    {
        cin>>std[i].name>>std[i].cls>>std[i].sec>>std[i].id>>std[i].math>>std[i].eng;
    }
    sort(std, std+n, cmp);
    for(int i=0; i<n;i++)
    {
        cout<<std[i].name<<" "<<std[i].cls<<" "<<std[i].sec<<" "<<std[i].id<<" "<<std[i].math<<" "<<std[i].eng<<endl;
    }
    return 0;
}