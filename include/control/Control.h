#include "core/Event.h"
#include "core/controlStruct.h"
#include "core/Node.h"
namespace Pyra {

class Control :public Node{

  Event<ResizedEventArgs> resized;
  Event<MouseEventArgs> mouseMove;
  Event<MouseEventArgs> mouseDown;
  Event<MouseEventArgs> mouseUp;
  Event<MouseEventArgs> mouseEnter;
  Event<MouseEventArgs> mouseLeave;
  Event<MouseEventArgs> mouseScroll;

};

} // namespace Pyra