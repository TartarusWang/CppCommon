/*!
    \file time.inl
    \brief Time inline implementation
    \author Ivan Shynkarenka
    \date 12.07.2016
    \copyright MIT License
*/

namespace CppCommon {

inline bool operator==(const Time& time1, const Time& time2) noexcept
{
    return ((time1._year == time2._year) && (time1._month == time2._month) && (time1._day == time2._day) &&
            (time1._hour == time2._hour) && (time1._minute == time2._minute) && (time1._second == time2._second) &&
            (time1._millisecond == time2._millisecond) && (time1._microsecond == time2._microsecond) && (time1._nanosecond == time2._nanosecond));
}

inline bool operator!=(const Time& time1, const Time& time2) noexcept
{
    return ((time1._year != time2._year) || (time1._month != time2._month) || (time1._day != time2._day) ||
            (time1._hour != time2._hour) || (time1._minute != time2._minute) || (time1._second != time2._second) ||
            (time1._millisecond != time2._millisecond) || (time1._microsecond != time2._microsecond) || (time1._nanosecond != time2._nanosecond));
}

inline bool operator>(const Time& time1, const Time& time2) noexcept
{
    if (time1._year < time2._year)
        return false;
    else if (time1._year == time2._year)
    {
        if (time1._month < time2._month)
            return false;
        else if (time1._month == time2._month)
        {
            if (time1._day < time2._day)
                return false;
            else if (time1._day == time2._day)
            {
                if (time1._hour < time2._hour)
                    return false;
                else if (time1._hour == time2._hour)
                {
                    if (time1._minute < time2._minute)
                        return false;
                    else if (time1._minute == time2._minute)
                    {
                        if (time1._second < time2._second)
                            return false;
                        else if (time1._second == time2._second)
                        {
                            if (time1._millisecond < time2._millisecond)
                                return false;
                            else if (time1._millisecond == time2._millisecond)
                            {
                                if (time1._microsecond < time2._microsecond)
                                    return false;
                                else if (time1._microsecond == time2._microsecond)
                                {
                                    if (time1._nanosecond <= time2._nanosecond)
                                        return false;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return true;
}

inline bool operator<(const Time& time1, const Time& time2) noexcept
{
    if (time1._year > time2._year)
        return false;
    else if (time1._year == time2._year)
    {
        if (time1._month > time2._month)
            return false;
        else if (time1._month == time2._month)
        {
            if (time1._day > time2._day)
                return false;
            else if (time1._day == time2._day)
            {
                if (time1._hour > time2._hour)
                    return false;
                else if (time1._hour == time2._hour)
                {
                    if (time1._minute > time2._minute)
                        return false;
                    else if (time1._minute == time2._minute)
                    {
                        if (time1._second > time2._second)
                            return false;
                        else if (time1._second == time2._second)
                        {
                            if (time1._millisecond > time2._millisecond)
                                return false;
                            else if (time1._millisecond == time2._millisecond)
                            {
                                if (time1._microsecond > time2._microsecond)
                                    return false;
                                else if (time1._microsecond == time2._microsecond)
                                {
                                    if (time1._nanosecond >= time2._nanosecond)
                                        return false;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return true;
}

inline bool operator>=(const Time& time1, const Time& time2) noexcept
{
    if (time1._year < time2._year)
        return false;
    else if (time1._year == time2._year)
    {
        if (time1._month < time2._month)
            return false;
        else if (time1._month == time2._month)
        {
            if (time1._day < time2._day)
                return false;
            else if (time1._day == time2._day)
            {
                if (time1._hour < time2._hour)
                    return false;
                else if (time1._hour == time2._hour)
                {
                    if (time1._minute < time2._minute)
                        return false;
                    else if (time1._minute == time2._minute)
                    {
                        if (time1._second < time2._second)
                            return false;
                        else if (time1._second == time2._second)
                        {
                            if (time1._millisecond < time2._millisecond)
                                return false;
                            else if (time1._millisecond == time2._millisecond)
                            {
                                if (time1._microsecond < time2._microsecond)
                                    return false;
                                else if (time1._microsecond == time2._microsecond)
                                {
                                    if (time1._nanosecond < time2._nanosecond)
                                        return false;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return true;
}

inline bool operator<=(const Time& time1, const Time& time2) noexcept
{
    if (time1._year > time2._year)
        return false;
    else if (time1._year == time2._year)
    {
        if (time1._month > time2._month)
            return false;
        else if (time1._month == time2._month)
        {
            if (time1._day > time2._day)
                return false;
            else if (time1._day == time2._day)
            {
                if (time1._hour > time2._hour)
                    return false;
                else if (time1._hour == time2._hour)
                {
                    if (time1._minute > time2._minute)
                        return false;
                    else if (time1._minute == time2._minute)
                    {
                        if (time1._second > time2._second)
                            return false;
                        else if (time1._second == time2._second)
                        {
                            if (time1._millisecond > time2._millisecond)
                                return false;
                            else if (time1._millisecond == time2._millisecond)
                            {
                                if (time1._microsecond > time2._microsecond)
                                    return false;
                                else if (time1._microsecond == time2._microsecond)
                                {
                                    if (time1._nanosecond > time2._nanosecond)
                                        return false;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return true;
}

inline void Time::swap(Time& time) noexcept
{
    using std::swap;
    swap(_year, time._year);
    swap(_month, time._month);
    swap(_day, time._day);
    swap(_hour, time._hour);
    swap(_minute, time._minute);
    swap(_second, time._second);
    swap(_millisecond, time._millisecond);
    swap(_microsecond, time._microsecond);
    swap(_nanosecond, time._nanosecond);
}

inline void swap(Time& time1, Time& time2) noexcept
{
    time1.swap(time2);
}

inline UtcTime::UtcTime(const LocalTime& time) : UtcTime(time.localstamp())
{}

inline LocalTime::LocalTime(const UtcTime& time) : LocalTime(time.utcstamp())
{}

} // namespace CppCommon
