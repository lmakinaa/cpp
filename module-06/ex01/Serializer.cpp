#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr)
{
    void* res = static_cast<void*> (ptr);
    return reinterpret_cast<uintptr_t>(res);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (static_cast<Data*>(reinterpret_cast<void*>(raw)));
}
