#include "Control.h"

namespace Pyra {

class Canvas : public Control {

public:
  Canvas();

protected:
  void constructMesh() override {}

private:
  Extent region;
};
} // namespace Pyra