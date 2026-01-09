#ifndef DATE_H
#define DATE_H

class Date {
public:
    Date();
    Date(int day, int month, int year);
    int month() const;
    int day() const;
    int year() const;

    void set_month(int month);
    void set_day(int day);
    void set_year(int year);

    void print() const;

private:
    int month_;
    int day_;
    int year_;
};


#endif 