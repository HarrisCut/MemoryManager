#include "VirtualMachine.h"

#include <ostream>

namespace gc {

VirtualMachine::VirtualMachine(std::size_t heapCapacity) : heap(heapCapacity) {}

void VirtualMachine::pushInt(std::int64_t value) {
    // Implement this function
}

void VirtualMachine::pushPair() {
    // Implement this function
}

void VirtualMachine::pop() {
    // Implement this function
}

void VirtualMachine::dup() {
    // Implement this function
}

void VirtualMachine::loadFirst() {
    // Implement this function
}

void VirtualMachine::loadSecond() {
    // Implement this function
}

void VirtualMachine::storeFirst() {
    // Implement this function
}

void VirtualMachine::storeSecond() {
    // Implement this function
}

void VirtualMachine::add() {
    // Implement this function
}

void VirtualMachine::gc() {
    // Implement this function
}

const MemoryCell& VirtualMachine::getStackReference(std::size_t addr) const {
    if (stack.size() <= addr)
        throw StackException();
    return *stack[addr];
}

size_t VirtualMachine::getStackSize() const {
    return stack.size();
}

size_t VirtualMachine::getHeapSize() const {
    return heap.size();
}

std::ostream& operator<<(std::ostream& os, const VirtualMachine& vm) {
    os << vm.stack << '\n' << vm.heap << '\n';
    return os;
}
}
