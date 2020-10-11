//
// Created by jarrod on 7/9/20.
//

#ifndef EXPRESS_DRAW_LAYER_H
#define EXPRESS_DRAW_LAYER_H

namespace Draw {
    template<typename Context>
    void StartLayer(Context context, std::string layerName);

    template<typename Context>
    void EndLayer(Context context);
}

#endif //EXPRESS_DRAW_LAYER_H
