
#ifndef EXPRESS_DRAW_TEXTUREIDENTIFIER_H
#define EXPRESS_DRAW_TEXTUREIDENTIFIER_H

#include <string_view>
#include <functional>

class TextureIdentifier {
private:
    std::size_t hash;

public:
    explicit TextureIdentifier(const std::string_view texturePath):
        hash(std::hash<std::string_view>()(texturePath)){
    }
    bool operator==(const auto& other) const{
        return other.hash == hash;
    }

    explicit operator size_t() const {
        return hash;
    }

};

struct TextureIdentifierCompare {
    bool operator()(const TextureIdentifier& a, const TextureIdentifier& b) const {
        return static_cast<size_t>(a) ==  static_cast<size_t>(b);
    }
};
static_assert(std::is_invocable<const TextureIdentifierCompare, const TextureIdentifier&, const TextureIdentifier&>::value );


struct TextureIdentifierHasher {
    size_t operator() (TextureIdentifier const& key) const {
        return static_cast<size_t>(key);
    }
};
static_assert( std::is_invocable<const TextureIdentifierHasher, const TextureIdentifier>::value );



#endif //EXPRESS_DRAW_TEXTUREIDENTIFIER_H
