#ifndef EXPRESS_DRAW_DRAW_H
#define EXPRESS_DRAW_DRAW_H

namespace Draw {
    template<typename Context, typename DrawType>
    void draw(Context& context, DrawType data);

    template<typename Context, typename DrawType>
    void drawWireframe(Context& context, DrawType data);
}

#endif //EXPRESS_DRAW_DRAW_H
