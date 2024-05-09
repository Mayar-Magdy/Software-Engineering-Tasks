#ifndef DATA_H
#define DATA_H


class data
{
private:
    int day;
    int month;
    int year;
public:
    data();
    data(int, int, int);
    //~data(int , int , int );
    void setter_day(int);
    void setter_month(int);
    void setter_year(int);
    int getter_day();
    int getter_month();
    int getter_year();
    void print_data();
    void sub_data(data);
    void sub_data_real(data);



    // virtual ~data();


};

#endif // DATA_H
