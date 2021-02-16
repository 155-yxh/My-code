#include <iostream>
#include <iomanip>
using namespace std;
int main()
{   
int t,day,hour,m,s;
cin>>t;
if(t>172799)
   {
    day=t/86400;
    hour=(t-day*86400)/3600;
    m=(t-day*86400-hour*3600)/60;
    s=t-day*86400-hour*3600-m*60;
    cout<<day;
    cout<<" "<<"days"<<" ";
    cout<<setw(2)<<setfill('0');
    cout<<hour;
    cout<<":";
    cout<<setw(2)<<setfill('0');
    cout<<m;
    cout<<":";
    cout<<setw(2)<<setfill('0');
    cout<<s;
   }
else if(t>86399)
   {
    day=1;
    hour=(t-day*86400)/3600;
    m=(t-day*86400-hour*3600)/60;
    s=t-day*86400-hour*3600-m*60;
    cout<<day<<" ";
    cout<<"day"<<" ";
    cout<<setw(2)<<setfill('0');
    cout<<hour;
    cout<<":";
    cout<<setw(2)<<setfill('0');
    cout<<m<<":";
    cout<<setw(2)<<setfill('0');
    cout<<s;
   }
else if(t>3599)
   {
    hour=t/3600;
    m=(t-hour*3600)/60;
    s=t-hour*3600-m*60;
    cout<<setw(2)<<setfill('0');
    cout<<hour<<":";
    cout<<setw(2)<<setfill('0');
    cout<<m<<":";
    cout<<setw(2)<<setfill('0');
    cout<<s;
   }
else if(t>59)
   {
    m=t/60;
    s=t-m*60;
    cout<<setw(2)<<setfill('0');
    cout<<m;
    cout<<":";
    cout<<setw(2)<<setfill('0');
    cout<<s;
   }
else cout<<t;
return 0;
}