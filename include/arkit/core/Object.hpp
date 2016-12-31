#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <arkit/math/Transform.hpp>

namespace ar {

class Object {
public:
    virtual ~Object() = default;

    inline Transform &GetLocalTransform() { return m_local_transform; }
    inline const Transform &GetLocalTransform() const { return m_local_transform; }

    inline const Transform &GetGlobalTransform() const { return m_global_transform; }

protected:
    Transform m_local_transform;
    Transform m_global_transform;
};

} // namespace ar

#endif