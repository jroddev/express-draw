//
// Created by jarrod on 7/9/20.
//

#ifndef EXPRESS_DRAW_CAMERATYPES_H
#define EXPRESS_DRAW_CAMERATYPES_H

#include <glm/glm.hpp>

namespace Draw {

    struct OrthographicSceneCamera {
        glm::vec2 position = {0.F, 0.F};
        float rotation = 0.F;
        float zoom = 1.F;
    };

    struct OrthographicUICamera {};

    enum class UP_AXIS {
        NEGATIVE_Y = -1,
        POSITIVE_Y = 1
    };

    struct ViewportProperties {
        glm::vec2 size;
        UP_AXIS up;
    };
}

#endif //EXPRESS_DRAW_CAMERATYPES_H
