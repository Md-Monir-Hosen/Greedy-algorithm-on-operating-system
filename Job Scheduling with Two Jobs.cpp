#include<bits/stdc++.h>
using namespace std;
bool checkJobs(int startin[],int endin[],int n)
{
    vector<pair<int,int>>a;
    for(int i=0;i<n;i++)
    {
        a.push_back(make_pair(startin[i],endin[i]));
    }
    sort(a.begin(),a.end());
    long long tv1=a[0].second,tv2=a[1].second;
    for(int i=0;i<n;i++)
    {
        if(a[i].first>=tv1)
        {
            tv1=tv2;
            tv2=a[i].second;
        }
        else if(a[i].first>=tv2)
        {
            tv2=a[i].second;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int startin[] = { 1, 2, 4 }; // starting time of jobs
    int endin[] = { 2, 3, 5 }; // ending times of jobs
    int n = sizeof(startin) / sizeof(startin[0]);
    cout << checkJobs(startin, endin, n);
    return 0;
}
