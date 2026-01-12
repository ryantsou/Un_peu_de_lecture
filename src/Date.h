#ifndef DATE_H
#define DATE_H

class Date {
public:
//constructeur
    Date(int day, int month, int year);
    bool is_date(int day, int month, int year);
    void print() const;

private:
    int month_;
    int day_;
    int year_;
};


#endif 