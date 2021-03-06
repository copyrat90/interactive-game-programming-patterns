#pragma once

#include <SFML/Graphics.hpp>
#include <optional>
#include <vector>

#include "AssetManagers.hpp"
#include "GameActor.hpp"
#include "InputHandler.hpp"
#include "KeybindUI.hpp"

namespace igpp::c02_01
{

class Application
{
public:
    Application();
    ~Application();
    void run();

private:
    void processEvents();
    void update(const sf::Time& deltaTime);
    void render();

private:
    sf::RenderWindow window_;
    TextureManager textures_;
    FontManager fonts_;
    InputHandler inputHandler_;

    std::vector<std::unique_ptr<GameActor>> actors_;
    GameActor* dwarf_;
    std::optional<KeybindUI> keybindUI_;
};

} // namespace igpp::c02_01
