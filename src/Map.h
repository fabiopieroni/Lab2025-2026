

#ifndef MAP_H
#define MAP_H
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>


class TileMap : public sf::Drawable, public sf::Transformable
{
public:
    TileMap()=default;
    bool load(const std::filesystem::path& tileset, sf::Vector2u tileSize, const int* tiles, unsigned int width, unsigned int height);
private:
    void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
    sf::VertexArray m_vertices;
    sf::Texture     m_tileset;
};

#endif //MAP_H
