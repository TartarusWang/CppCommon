//
// Created by Ivan Shynkarenka on 01.09.2016.
//

#include "catch.hpp"

#include "math/math.h"

using namespace CppCommon;

TEST_CASE("Math", "[CppCommon][Math]")
{
    REQUIRE(Math::MulDiv64(4984198405165151231, 6132198419878046132, 9156498145135109843) == 3337967539561099935);
    REQUIRE(Math::MulDiv64(11540173641653250113, 10150593219136339683, 13592284235543989460) == 8618095846487663363);
    REQUIRE(Math::MulDiv64(449033535071450778, 3155170653582908051, 4945421831474875872) == 286482625873293138);
    REQUIRE(Math::MulDiv64(303601908757, 829267376026, 659820219978) == 381569328444);
    REQUIRE(Math::MulDiv64(449033535071450778, 829267376026, 659820219978) == 564348969767547451);
    REQUIRE(Math::MulDiv64(1234568, 829267376026, 1) == 1023786965885666768);
    REQUIRE(Math::MulDiv64(6991754535226557229, 7798003721120799096, 4923601287520449332) == 11073546515850664288);
    REQUIRE(Math::MulDiv64(9223372036854775808, 2147483648, 18446744073709551615) == 1073741824);
    REQUIRE(Math::MulDiv64(9223372032559808512, 9223372036854775807, 9223372036854775807) == 9223372032559808512);
    REQUIRE(Math::MulDiv64(9223372032559808512, 9223372036854775807, 12) == 18446744073709551615);
    REQUIRE(Math::MulDiv64(18446744073709551615, 18446744073709551615, 9223372036854775808) == 18446744073709551615);
}
