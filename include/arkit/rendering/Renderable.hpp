#ifndef RENDERABLE_HPP
#define RENDERABLE_HPP

namespace ar {

class Shader;

class Renderable {
public:
    virtual ~Renderable() = default;

    virtual void Render(Shader *shader) = 0;
};

} // namespace ar

#endif