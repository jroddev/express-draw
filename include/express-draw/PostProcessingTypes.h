#ifndef EXPRESS_DRAW_POSTPROCESSINGTYPES_H
#define EXPRESS_DRAW_POSTPROCESSINGTYPES_H

namespace Draw {
    struct GrayScalePostProcess {};
    struct BlurPostProcess {
        float blurAmount;
    };
    struct BloomPostProcess {
        float bloomAmount;
    };
}

#endif //EXPRESS_DRAW_POSTPROCESSINGTYPES_H
