#ifndef TRANSFORM_HPP
#define TRANSFORM_HPP

#include <arkit/math/Vec.hpp>

namespace ar {

struct Transform {
    Vec3 translation = Vec3::ZERO;
    Vec3 scale = Vec3::ONE;
};

} // namespace ar

#endif