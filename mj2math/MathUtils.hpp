#pragma once

#include <cmath>

namespace mj2 {
	const float  PI_F = 3.14159265358979f;

    static inline float InvSqrt(float f)
    {
        // TODO: quake 3, neon
        return std::sqrt(1.0f / f);
    }

    struct Range {
    public:
        float min;
        float max;

    public:
        inline float length() { return (max - min); }
    };

    static inline float MapRange(float x, Range fromRange, Range toRange)
    {
        return (x - fromRange.min) * toRange.length() / fromRange.length() + toRange.min;
    }
} // end of namespace mj2
