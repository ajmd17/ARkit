#ifndef SCENE_HPP
#define SCENE_HPP

#include <arkit/scene/Node.hpp>

namespace ar {

class Scene : public Node {
public:
    virtual ~Scene() = default;
};

} // namespace ar

#endif