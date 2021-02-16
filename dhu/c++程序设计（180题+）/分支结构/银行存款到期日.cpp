#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int year,month,day,during;
	int run1=0;
	cin>>year>>month>>day>>during;
	month=month+during;
	year=year+(month/12);
	if (month%12==0)
	month=12;
	else month=month%12;
	if (year%400==0||year%100!=0&&year%4==0)
		run1=1;
	switch(month){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:  break;
  	case 4:
	case 6:
	case 9:
	case 11:
		if (day>30)
			day=30;
		break;
	case 2:
		if (run1==1)
		{if (day>29)
			day=29;
		else day=28;}
		else if (day>28)
		day=28;
	break;}
		cout<<year<<" "<<month<<" "<<day;
   return 0;
}