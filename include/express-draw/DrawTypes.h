#ifndef EXPRESS_DRAW_DRAWTYPES_H
#define EXPRESS_DRAW_DRAWTYPES_H

#include <glm/glm.hpp>
#include <vector>
#include <string>

#include "TextureIdentifier.h"
#include "Transform2D.h"
#include "Common.h"

namespace Draw {
    struct Quad {
        Transform2D transform;
        glm::vec4 color;
        float borderWidth = 1.0F;
    };

    struct Sprite {
        Transform2D transform;
        glm::vec4 color;
        Rect textureRegion;
        TextureIdentifier texture;
    };

    struct Line {
        glm::vec2 startPosition;
        glm::vec2 endPosition;
        glm::vec4 color;
        float lineWidth = 1.0F;
    };

    struct TextBlock {
        std::string font;
        int fontSize;
        std::string text;
        glm::vec2 blockSize;
    };
}

#endif //EXPRESS_DRAW_DRAWTYPES_H
