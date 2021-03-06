#ifndef FOREST_BUTTON_H
#define FOREST_BUTTON_H

#include "SFML/Graphics.hpp"

using namespace sf;

/// \brief Button class
///
class Button : public Drawable{
public:
    /// \brief Constructor for buttons
    /// \param img Whole texture
    /// \param text_area Area with text
    /// \param background_area Area with background
    /// \param position Position of button
    Button(const String &id, const Texture &img, const IntRect &text_area, const IntRect &background_area,
           const Vector2f &position);

    /// \brief Change button's background texture
    /// \param background_area Area with  texture
    void changeBackground(const IntRect &background_area);

    /// \brief Check is pos in button
    /// \param pos Position that is checked
    bool isClicked(const Vector2i &pos);

    /// \brief Change state of button to curr(-ent)
    /// \param curr
    /// True - pressed;
    /// False - unpressed
    void changeState(const bool &curr);

    /// \brief Set position of button
    /// \param pos New position of button
    void setPosition(const Vector2f &pos);

    /// \brief Set new texture for button
    /// \param img New texture
    void setText(const IntRect &text_area);

    /// \brief Draw button
    /// \param target
    /// \param states Drawing parameters
    void draw(RenderTarget& target, RenderStates states) const override;

    /// Return name of button
    /// \return Name as sf::String
    sf::String getName();

    void setName(const sf::String &name);

    void s_btn_Click();

private:
    String name_;
    Sprite text_;
    Sprite background_;
    IntRect text_area_;
    IntRect background_area_;
    bool clicked_ = false;
};


#endif //FOREST_BUTTON_H
