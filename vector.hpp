#ifndef SJTU_VECTOR_HPP
#define SJTU_VECTOR_HPP

#include <cstddef>
#include <stdexcept>

namespace sjtu {

template<typename T>
class vector {
public:
    vector() {}
    vector(const vector &other) {}
    ~vector() {}
    vector &operator=(const vector &other) { return *this; }
    T &at(const size_t &pos) { throw std::out_of_range("out of range"); }
    const T &at(const size_t &pos) const { throw std::out_of_range("out of range"); }
    T &operator[](const size_t &pos) { return at(pos); }
    const T &operator[](const size_t &pos) const { return at(pos); }
    const T &front() const { return at(0); }
    const T &back() const { return at(0); }
    class iterator {
    public:
        iterator() {}
        iterator operator+(const int &n) const { return *this; }
        iterator operator-(const int &n) const { return *this; }
        int operator-(const iterator &rhs) const { return 0; }
        iterator& operator+=(const int &n) { return *this; }
        iterator& operator-=(const int &n) { return *this; }
        iterator operator++(int) { return *this; }
        iterator& operator++() { return *this; }
        iterator operator--(int) { return *this; }
        iterator& operator--() { return *this; }
        T& operator*() const { throw std::runtime_error("dereference"); }
        bool operator==(const iterator &rhs) const { return true; }
        bool operator==(const class const_iterator &rhs) const { return true; }
        bool operator!=(const iterator &rhs) const { return false; }
        bool operator!=(const class const_iterator &rhs) const { return false; }
    };
    class const_iterator {
    public:
        const_iterator() {}
        const_iterator operator+(const int &n) const { return *this; }
        const_iterator operator-(const int &n) const { return *this; }
        int operator-(const const_iterator &rhs) const { return 0; }
        const_iterator& operator+=(const int &n) { return *this; }
        const_iterator& operator-=(const int &n) { return *this; }
        const_iterator operator++(int) { return *this; }
        const_iterator& operator++() { return *this; }
        const_iterator operator--(int) { return *this; }
        const_iterator& operator--() { return *this; }
        const T& operator*() const { throw std::runtime_error("dereference"); }
        bool operator==(const iterator &rhs) const { return true; }
        bool operator==(const const_iterator &rhs) const { return true; }
        bool operator!=(const iterator &rhs) const { return false; }
        bool operator!=(const const_iterator &rhs) const { return false; }
    };
    iterator begin() { return iterator(); }
    const_iterator cbegin() const { return const_iterator(); }
    iterator end() { return iterator(); }
    const_iterator cend() const { return const_iterator(); }
    bool empty() const { return true; }
    size_t size() const { return 0; }
    void clear() {}
    iterator insert(iterator pos, const T &value) { return pos; }
    iterator insert(const size_t &ind, const T &value) { return iterator(); }
    iterator erase(iterator pos) { return pos; }
    iterator erase(const size_t &ind) { return iterator(); }
    void push_back(const T &value) {}
    void pop_back() {}
};

}

#endif
