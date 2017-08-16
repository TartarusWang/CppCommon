/*!
    \file token_bucket.h
    \brief Token bucket definition
    \author Ivan Shynkarenka
    \date 07.12.2016
    \copyright MIT License
*/

#ifndef CPPCOMMON_THREADS_TOKEN_BUCKET_H
#define CPPCOMMON_THREADS_TOKEN_BUCKET_H

#include <atomic>

namespace CppCommon {

//! Token bucket
/*!
    Lock-free implementation of the token bucket algorithm.

    \image html TokenBucket.png "Token bucket"

    The token bucket is an algorithm used in packet switched computer
    networks and telecommunications networks. It can be used to check
    that data transmissions, in the form of packets, conform to defined
    limits on bandwidth and burstiness (a measure of the unevenness or
    variations in the traffic flow).

    Thread-safe.

    https://en.wikipedia.org/wiki/Token_bucket
*/
class TokenBucket
{
public:
    //!
    /*!
        Initializes the token bucket to accumulate the given count of tokens
        per second, with a maximum of burst tokens.

        \param rate - Rate of tokens per second to accumulate in the token bucket
        \param burst - Maximum of burst tokens in the token bucket
    */
    TokenBucket(uint64_t rate, uint64_t burst);
    TokenBucket(const TokenBucket& tb);
    TokenBucket(TokenBucket&&) = default;
    ~TokenBucket() = default;

    TokenBucket& operator=(const TokenBucket& tb);
    TokenBucket& operator=(TokenBucket&&) = default;

    //! Try to consume the given count of tokens
    /*!
        \param tokens - Tokens to consume
        \return 'true' if all tokens were successfully consumed, 'false' if the token bucket is lack of required count of tokens
    */
    bool consume(uint64_t tokens);

private:
    std::atomic<uint64_t> _time;
    std::atomic<uint64_t> _time_per_token;
    std::atomic<uint64_t> _time_per_burst;
};

} // namespace CppCommon

#include "token_bucket.inl"

#endif // CPPCOMMON_THREADS_TOKEN_BUCKET_H
