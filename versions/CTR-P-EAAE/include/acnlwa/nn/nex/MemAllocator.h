#ifndef ACNLWA_NN_NEX_MEMALLOCATOR_H
#define ACNLWA_NN_NEX_MEMALLOCATOR_H

namespace nn {
namespace nex {

template <typename T0>
class MemAllocator {
public:
    typedef T0 value_type;
    typedef value_type* pointer;
    typedef const value_type* const_pointer;
    typedef value_type& reference;
    typedef const value_type& const_reference;
    typedef unsigned int size_type;
    typedef int difference_type;
    template <typename U> struct rebind { typedef MemAllocator<U> other; };
    MemAllocator();
    MemAllocator(const MemAllocator&);
    template <typename U> MemAllocator(const MemAllocator<U>&);
    ~MemAllocator();
    pointer address(reference) const;
    const_pointer address(const_reference) const;
    pointer allocate(size_type, const void* = 0);
    void deallocate(pointer, size_type);
    size_type max_size() const;
    void construct(pointer, const value_type&);
    void destroy(pointer);
};
}  // namespace nex
}  // namespace nn

#endif  // ACNLWA_NN_NEX_MEMALLOCATOR_H
