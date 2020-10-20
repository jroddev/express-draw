#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtx/euler_angles.hpp>

#ifndef EXPRESS_DRAW__TRANSFORM_H
#define EXPRESS_DRAW__TRANSFORM_H

namespace Draw {

    namespace {
        constexpr glm::mat4 identityMatrix = glm::mat4{1.0f};
    };

    struct Transform2D {
        glm::vec3 position = glm::vec3{0.0f};
        glm::vec3 rotation = glm::vec3{0.0f};
        glm::vec3 scale = glm::vec3{1.0f};

        [[nodiscard]] glm::mat4 getGetLocalSpaceMatrix() const noexcept {
            const auto T = glm::translate(identityMatrix, position);
            const auto R = glm::eulerAngleYXZ(
                    glm::radians(rotation.y),
                    glm::radians(rotation.x),
                    glm::radians(rotation.z));
            const auto S = glm::scale(identityMatrix, scale);
            return T * R * S;
        }

        static Transform2D from(float x, float y, float rot, int width, int height) {
            return Transform2D{
                    {x,     y,      0.f},
                    {0.f,   0.f,    rot},
                    {width, height, 1.f}
            };
        }
    };
}

#endif
