#include <arkit/math/Vec.hpp>

#include <limits>

namespace ar {

const Vec2 Vec2::NAN = Vec2(std::numeric_limits<Float>::quiet_NaN(),
                            std::numeric_limits<Float>::quiet_NaN());
const Vec2 Vec2::ZERO = Vec2(0, 0);
const Vec2 Vec2::ONE  = Vec2(1, 1);

const Vec3 Vec3::NAN = Vec3(std::numeric_limits<Float>::quiet_NaN(),
                            std::numeric_limits<Float>::quiet_NaN(),
                            std::numeric_limits<Float>::quiet_NaN());
const Vec3 Vec3::ZERO = Vec3(0, 0, 0);
const Vec3 Vec3::ONE  = Vec3(1, 1, 1);

const Vec4 Vec4::NAN = Vec4(std::numeric_limits<Float>::quiet_NaN(),
                            std::numeric_limits<Float>::quiet_NaN(),
                            std::numeric_limits<Float>::quiet_NaN(),
                            std::numeric_limits<Float>::quiet_NaN());
const Vec4 Vec4::ZERO = Vec4(0, 0, 0, 0);
const Vec4 Vec4::ONE  = Vec4(1, 1, 1, 1);

Vec2 operator+(const Vec2 &a, const Vec2 &b)
{
    return Vec2(a.x + b.x, a.y + b.y);
}

Vec2 operator-(const Vec2 &a, const Vec2 &b)
{
    return Vec2(a.x - b.x, a.y - b.y);
}

Vec2 operator*(const Vec2 &a, const Vec2 &b)
{
    return Vec2(a.x * b.x, a.y * b.y);
}

Vec2 operator/(const Vec2 &a, const Vec2 &b)
{
    if (b.x == 0.0 || b.y == 0.0) {
        return Vec2::NAN;
    }
    return Vec2(a.x / b.x, a.y / b.y);
}

Vec2 &operator+=(Vec2 &a, const Vec2 &b)
{
    a.x += b.x;
    a.y += b.y;
    return a;
}

Vec2 &operator-=(Vec2 &a, const Vec2 &b)
{
    a.x -= b.x;
    a.y -= b.y;
    return a;
}

Vec2 &operator*=(Vec2 &a, const Vec2 &b)
{
    a.x *= b.x;
    a.y *= b.y;
    return a;
}

Vec2 &operator/=(Vec2 &a, const Vec2 &b)
{
    if (b.x == 0.0 || b.y == 0.0) {
        a = Vec2::NAN;
    } else {
        a.x /= b.x;
        a.y /= b.y;
    }
    return a;
}

} // namespace ar