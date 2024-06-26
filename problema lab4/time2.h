#ifndef TIME2_H
#define TIME2_H
class Time
{
public:
    Time(int = 0, int = 1, int = 2);
    void setTime(int, int, int);
    void printShort();
    void printLong ();
    void Tick();
private:
    int hour;
    int minute;
    int second;
};
#endif
