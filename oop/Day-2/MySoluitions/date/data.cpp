#include "data.h"
#include <iostream>
using namespace std;

data::data()
{
    int day=25;
    int month=12;
    int year=2023;

}
data::data(int _d, int _m, int _y)
{
    this->day=_d;
    this->month=_m;
    this->year=_y;
}

/*data::~data(int _d, int _m, int _y)
{
    //dtor
}*/
void data:: setter_day(int _d)
{
    this->day=_d;

}
void data:: setter_month(int _m)
{
    this->month=_m;

}
void data:: setter_year(int _y)
{
    this->year=_y;
}
int data:: getter_day()
{
    return this->day;
}
int data:: getter_month()
{
    return this->month;
}
int data:: getter_year()
{
    return this->year;
}
void data:: print_data()
{
    cout << day <<'/' <<month<<'/'<<year<<"\n";
}
void data:: sub_data(data _d)
{

bool swaped=0;
if(_d.year < this->year || (_d.year==this->year && _d.month<this->month ) ||(_d.year==this->year && _d.month==this->month && _d.day<this->day))
{
cout<<"Swaped!";
swaped=1;
swap(_d.year,this->year);
swap(_d.month,this->month);
swap(_d.day,this->day);
int diff_days=(_d.month==this->month? (max(this->day,_d.day)-min(this->day,_d.day)) :( (30-this->day) + (_d.day) ));
int diff_months=(diff_days>=30 ? diff_days /30 : 0);
diff_days-=(diff_days /30)*30;
int seg =((12+(_d.month%12))-this->month)+1;
diff_months+=( _d.month-this->month<0?(seg-2):((_d.month-this->month+1)-2) );
int diff_years= (diff_months>=12 ? diff_months /12 : 0);
diff_months-=(diff_months /12)*12;
cout<<"days : "<<diff_days<<"\n";
cout<<"months : " <<diff_months<<"\n";
cout<<"years : " <<_d.year-this->year+diff_years<<"\n";
swap(_d.year,this->year);
swap(_d.month,this->month);
swap(_d.day,this->day);
}

else
{
int diff_days =0, diff_months=0, diff_years=0;
if(this->day==30 )
{
if(this->month==12) this->month=1, this->year++;
else this->month++;
this->day=0;
}
diff_days=(_d.month==this->month? (max(this->day,_d.day)-min(this->day,_d.day)):((30-this->day) + (_d.day)));
diff_months=(diff_days>=30 ? diff_days /30 : 0);
diff_days-=(diff_days /30)*30;
if(!(_d.month==this->month))
{
int seg =((12+(_d.month%12))-this->month)+1;
diff_months+=( _d.month-this->month<0?(seg-2):((_d.month-this->month+1)-2) ) ;
}
if(diff_months && this->month==12) this->year++;
diff_years= (diff_months>=12 ? diff_months /12 : 0);
diff_months-=(diff_months /12)*12;
cout<<"days : "<<diff_days<<"\n";
cout<<"months : " <<diff_months<<"\n";
cout<<"years : " <<_d.year-this->year+diff_years<<"\n";

}

}

void data::sub_data_real(data _d)
{
int MonDays[] = {31, 28, 31, MonDays[this->month-1], 31, MonDays[this->month-1], 31, 31, MonDays[this->month-1], 31, MonDays[this->month-1], 31};
bool swaped = 0;
if (_d.year < this->year || (_d.year == this->year && _d.month < this->month) ||
(_d.year == this->year && _d.month == this->month && _d.day < this->day))
{
cout << "Swaped!";
swaped = 1;
swap(_d.year, this->year);
swap(_d.month, this->month);
swap(_d.day, this->day);
int diff_days = (_d.month == this->month ? (max(this->day, _d.day) - min(this->day, _d.day)) : (
        (MonDays[this->month-1] - this->day) + (_d.day)));
int diff_months = (diff_days >= MonDays[this->month-1] ? diff_days / MonDays[this->month-1] : 0);
diff_days -= (diff_days / MonDays[this->month-1]) * MonDays[this->month-1];
int seg = ((12 + (_d.month % 12)) - this->month) + 1;
diff_months += (_d.month - this->month < 0 ? (seg - 2) : ((_d.month - this->month + 1) - 2));
int diff_years = (diff_months >= 12 ? diff_months / 12 : 0);
diff_months -= (diff_months / 12) * 12;
cout << "days : " << diff_days << "\n";
cout << "months : " << diff_months << "\n";
cout << "years : " << _d.year - this->year + diff_years << "\n";
swap(_d.year, this->year);
swap(_d.month, this->month);
swap(_d.day, this->day);
}
else
{
int diff_days = 0, diff_months = 0, diff_years = 0;
if (this->day == MonDays[this->month-1])
{
if (this->month == 12) this->month = 1, this->year++;
else this->month++;
this->day = 0;
}
diff_days = (_d.month == this->month ? (max(this->day, _d.day) - min(this->day, _d.day)) : ((MonDays[this->month-1] - this->day) +
                                                                                            (_d.day)));
diff_months = (diff_days >= MonDays[this->month-1] ? diff_days / MonDays[this->month-1] : 0);
diff_days -= (diff_days / MonDays[this->month-1]) * MonDays[this->month-1];
if (!(_d.month == this->month))
{
int seg = ((12 + (_d.month % 12)) - this->month) + 1;
diff_months += (_d.month - this->month < 0 ? (seg - 2) : ((_d.month - this->month + 1) - 2));
}
if (diff_months && this->month == 12) this->year++;
diff_years = (diff_months >= 12 ? diff_months / 12 : 0);
diff_months -= (diff_months / 12) * 12;
cout << "days : " << diff_days << "\n";
cout << "months : " << diff_months << "\n";
cout << "years : " << _d.year - this->year + diff_years << "\n";

}

}


