#ifndef EXPRESS_DRAW_DRAWTYPES_H
#define EXPRESS_DRAW_DRAWTYPES_H

#include <glm/glm.hpp>
#include <vector>
#include <string>

#include "TextureIdentifier.h"
#include "Transform2D.h"
#include "Common.h"

namespace Draw {
    enum class PIVOT_POINT  {
        TOP_LEFT,
        TOP_RIGHT,
        BOTTOM_LEFT,
        BOTTOM_RIGHT,
        CENTER
    };

    struct Quad {
        Transform2D transform;
        glm::vec4 color;
        float borderWidth = 1.0F;
        PIVOT_POINT pivotPoint;
    };

    struct Sprite {
        Transform2D transform;
        glm::vec4 color;
        Rect textureRegion;
        TextureIdentifier texture;
        PIVOT_POINT pivotPoint;
    };

    struct Line {
        glm::vec2 startPosition;
        glm::vec2 endPosition;
        glm::vec4 color;
        float lineWidth = 1.0F;
    };

    struct TextBlock {
        Transform2D transform;
        glm::vec2 blockSize;
        int fontSize;
        std::string font;
        std::string text;
        PIVOT_POINT pivotPoint;
    };
}

#endif //EXPRESS_DRAW_DRAWTYPES_H
