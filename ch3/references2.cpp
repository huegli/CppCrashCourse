#include <cstdio>

struct ClockOfTheLongNow {
    ClockOfTheLongNow() {
        year = 2019;
    }   
    ClockOfTheLongNow(int year_in) {
        if(!set_year(year_in)) {
            year = 2019;
        }
    }
    void add_year() {
        year++;
    }
    bool set_year(int year) {
        if (year < 2019) return false;
        this->year = year;
        return true;
    }
    int get_year() const {
        return year;
    }
private:
    int year;
};

void add_year(ClockOfTheLongNow& clock) {
    clock.set_year(clock.get_year() + 1); // no deref operator needed
}

bool is_leap_year(const ClockOfTheLongNow& clock) {
    if (clock.get_year() % 4 > 0) return false;
    if (clock.get_year() % 100 > 0) return true;
    if (clock.get_year() % 400 > 0) return false;
    return true;
}

int main() {
    ClockOfTheLongNow clock;
    printf("The year is %d.\n", clock.get_year());
    add_year(clock); // clock is implicity passed by reference
    printf("The year is %d.\n", clock.get_year());

    if (is_leap_year(clock))
        printf("%d is a leap year\n", clock.get_year());
    else
        printf("% is not a leap year\n", clock.get_year());
}
