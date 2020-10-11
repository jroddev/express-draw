//
// Created by jarrod on 7/9/20.
//

#ifndef EXPRESS_DRAW_DRAWTYPES_H
#define EXPRESS_DRAW_DRAWTYPES_H

#include "TextureIdentifier.h"

#include <glm/glm.hpp>
#include <vector>
#include <string>

namespace Draw {
    struct Quad {
        glm::vec2 position;
        glm::vec2 size;
        float rotation;
        glm::vec4 color;
        float borderWidth = 1.0F;
    };

    struct Sprite {
        TextureIdentifier texture;
        glm::vec2 position;
        glm::vec2 size;
        float rotation;
        glm::vec4 color;
    };

    struct Line {
        glm::vec2 startPosition;
        glm::vec2 endPosition;
        glm::vec4 color;
        float lineWidth = 1.0F;
    };

    struct Character {
        char character;
        glm::vec2 position;
        glm::vec2 size;
        float rotation;
        glm::vec4 color;
    };

    struct Text {
        std::string font;
        int fontSize;
        std::vector<Character> characters;
    };
}

#endif //EXPRESS_DRAW_DRAWTYPES_H
