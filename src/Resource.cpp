#include "Resource.h"

#include <string_view>


Resource::Resource(std::string_view name, Type type)
    :name(name), isAvailable(true), resourceType(type){}

std::string_view Resource::getname() const {return name;}


Type Resource::gettype() const {return resourceType;}