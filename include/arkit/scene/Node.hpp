#ifndef NODE_HPP
#define NODE_HPP

#include <arkit/core/Object.hpp>

#include <map>
#include <string>
#include <memory>

namespace ar {

class Node;
typedef std::shared_ptr<Node> NodePtr_t;

class Node : public Object {
public:
    Node();
    Node(const Node &other);
    virtual ~Node() = default;

    /** Get a child of this node with the id.
        Inserts a new NodePtr_t and returns it if not found.
     */
    NodePtr_t operator[](const std::string &id);
    
    /** Get a child of this node with the id.
        Returns nullptr if not found.
     */
    const NodePtr_t operator[](const std::string &id) const;

    /** Get a child of this node with the id.
        Returns nullptr if not found.
     */
     NodePtr_t Find(const std::string &id);

     /** Get a child of this node with the id.
        Returns nullptr if not found.
     */
     const NodePtr_t Find(const std::string &id) const;

private:
    std::map<std::string, NodePtr_t> m_children;
};

} // namespace ar

#endif