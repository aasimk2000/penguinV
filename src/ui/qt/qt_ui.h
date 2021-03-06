#pragma once
#include "../ui.h"

#include <QLabel>
#include <QPixmap>

class UiWindowQt : public UiWindow
{
public:
    explicit UiWindowQt( const PenguinV_Image::Image & image = PenguinV_Image::Image(), const std::string & title = std::string() );
    virtual ~UiWindowQt();

    virtual void drawPoint( const Point2d & point, const PaintColor & color );
    virtual void drawLine( const Point2d & start, const Point2d & end, const PaintColor & color );
protected:
    virtual void _display();
private:
    QPixmap _pixmap;
    QLabel _window;
};
