/*!
    \file token_bucket.inl
    \brief Token bucket inline implementation
    \author Ivan Shynkarenka
    \date 07.12.2016
    \copyright MIT License
*/

namespace CppCommon {

inline TokenBucket::TokenBucket(uint64_t rate, uint64_t burst)
    : _time(0),
      _time_per_token(0),
      _time_per_burst(0)
{
}

inline TokenBucket::TokenBucket(const TokenBucket& tb)
    : _time(tb._time.load()),
      _time_per_token(tb._time_per_token.load()),
      _time_per_burst(tb._time_per_burst.load())
{
}

inline TokenBucket& TokenBucket::operator=(const TokenBucket& tb)
{
    _time = tb._time.load();
    _time_per_token = tb._time_per_token.load();
    _time_per_burst = tb._time_per_burst.load();
    return *this;
}

} // namespace CppCommon
