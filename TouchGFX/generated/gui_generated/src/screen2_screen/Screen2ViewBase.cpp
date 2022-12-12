/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen2_screen/Screen2ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>

Screen2ViewBase::Screen2ViewBase() :
    flexButtonCallback(this, &Screen2ViewBase::flexButtonCallbackHandler)
{

    __background.setPosition(0, 0, 1024, 600);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    image1.setXY(12, 0);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_BASIC_BG_ID));

    flexButton1.setBoxWithBorderPosition(0, 0, 165, 601);
    flexButton1.setBorderSize(5);
    flexButton1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton1.setPosition(0, -1, 165, 601);
    flexButton1.setAlpha(0);
    flexButton1.setAction(flexButtonCallback);

    add(__background);
    add(image1);
    add(flexButton1);
}

void Screen2ViewBase::setupScreen()
{

}

void Screen2ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButton1)
    {
        //Interaction1
        //When flexButton1 clicked change screen to Screen1
        //Go to Screen1 with no screen transition
        application().gotoScreen1ScreenNoTransition();
    }
}
