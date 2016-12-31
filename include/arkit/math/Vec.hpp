#ifndef VEC_HPP
#define VEC_HPP

#include <arkit/core/Types.hpp>

namespace ar {

struct Vec2 {
    static const Vec2 NAN;
    static const Vec2 ZERO;
    static const Vec2 ONE;

    ar::Float x, y;

    Vec2() : x(0), y(0) {}
    Vec2(ar::Float x, ar::Float y) : x(x), y(y) {}
    Vec2(const Vec2 &other) : x(other.x), y(other.y) {}
};

struct Vec3 {
    static const Vec3 NAN;
    static const Vec3 ZERO;
    static const Vec3 ONE;

    ar::Float x, y, z;

    Vec3() : x(0), y(0), z(0) {}
    Vec3(ar::Float x, ar::Float y, ar::Float z) : x(x), y(y), z(z) {}
    Vec3(const Vec3 &other) : x(other.x), y(other.y), z(other.z) {}
};

struct Vec4 {
    static const Vec4 NAN;
    static const Vec4 ZERO;
    static const Vec4 ONE;

    ar::Float w, x, y, z;

    Vec4() : w(0), x(0), y(0), z(0) {}
    Vec4(ar::Float w, ar::Float x, ar::Float y, ar::Float z) : w(w), x(x), y(y), z(z) {}
    Vec4(const Vec4 &other) : w(other.w), x(other.x), y(other.y), z(other.z) {}
};

Vec2 operator+(const Vec2 &a, const Vec2 &b);
Vec2 operator-(const Vec2 &a, const Vec2 &b);
Vec2 operator*(const Vec2 &a, const Vec2 &b);
Vec2 operator/(const Vec2 &a, const Vec2 &b);
Vec2 &operator+=(Vec2 &a, const Vec2 &b);
Vec2 &operator-=(Vec2 &a, const Vec2 &b);
Vec2 &operator*=(Vec2 &a, const Vec2 &b);
Vec2 &operator/=(Vec2 &a, const Vec2 &b);

} // namespace ar

#endif