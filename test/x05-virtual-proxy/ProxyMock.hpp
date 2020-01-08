#pragma once

#include <unordered_map>

template <typename T>
class ProxyMock {
public:
  ProxyMock(const void* instance)
      : instance_{ instance }
  {
    map_[instance] = static_cast<T*>(this);
  }

  static T& getMockFor(const void* instance)
  {
    return static_cast<T&>(*map_.at(instance));
  }

  ~ProxyMock()
  {
    auto it = map_.find(instance_);
    if (it != map_.end())
    {
      map_.erase(it);
    }
  }

private:
  const void* const                          instance_;
  static std::unordered_map<const void*, T*> map_;
};
template <typename T>
std::unordered_map<const void*, T*> ProxyMock<T>::map_;
