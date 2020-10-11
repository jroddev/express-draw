#ifndef EXPRESS_DRAW_CAMERA_H
#define EXPRESS_DRAW_CAMERA_H

#include "CameraTypes.h"

namespace Draw {
    template<typename Context, typename Camera>
    void setCamera(Context& context, const Camera& camera, const ViewportProperties& viewport);
}

#endif //EXPRESS_DRAW_CAMERA_H
