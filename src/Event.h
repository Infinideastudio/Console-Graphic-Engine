#ifndef Event_h__
#define Event_h__
#include <functional>
using Event = std::function<void()>;
using KeyboardEvent = std::function<bool(char)>; //bool�Ƿ��赲������Ϣ����
#endif // Event_h__
