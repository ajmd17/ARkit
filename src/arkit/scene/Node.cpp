#include <arkit/scene/Node.hpp>

namespace ar {

Node::Node() {}

Node::Node(const Node &other)
{
}

NodePtr_t Node::operator[](const std::string &id)
{
    std::map<std::string, NodePtr_t>::iterator it = m_children.find(id);
    if (it == m_children.end()) {
        it = m_children.insert({ id, NodePtr_t(new Node()) }).first;
    }

    return it->second;
}

const NodePtr_t Node::operator[](const std::string &id) const
{
    return Find(id);
}

NodePtr_t Node::Find(const std::string &id)
{
    auto it = m_children.find(id);
    return it != m_children.end() ? it->second : nullptr;
}

const NodePtr_t Node::Find(const std::string &id) const
{
    auto it = m_children.find(id);
    return it != m_children.end() ? it->second : nullptr;
}

} // namespace ar