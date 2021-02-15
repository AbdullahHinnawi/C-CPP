

#include "../HeaderFiles/DateTime.h"

// Get current time, format is HH:mm:ss
// source http://en.cppreference.com/w/cpp/chrono/c/strftime
std::string DateTime::getCurrentTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);

    strftime(buf, sizeof(buf), "%X", &tstruct);

    return buf;
}

// Get current date & time, format is YYYY-MM-DD.HH:mm:ss
std::string DateTime::getCurrentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);

    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}
