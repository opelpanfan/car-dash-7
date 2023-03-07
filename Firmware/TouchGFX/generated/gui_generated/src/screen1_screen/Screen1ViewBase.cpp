/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    flexButtonCallback(this, &Screen1ViewBase::flexButtonCallbackHandler)
{
    __background.setPosition(0, 0, 1024, 600);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(-3, 1, 1024, 600);
    box1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(box1);

    image1.setXY(-2, -8);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_RACE_DASH_FULL_ID));
    add(image1);

    indLeft.setXY(264, 32);
    indLeft.setBitmap(touchgfx::Bitmap(BITMAP_INDLEFT_ID));
    add(indLeft);

    indRight.setXY(721, 32);
    indRight.setBitmap(touchgfx::Bitmap(BITMAP_INDRIGHT_ID));
    add(indRight);

    indHigh.setXY(375, 289);
    indHigh.setBitmap(touchgfx::Bitmap(BITMAP_INDHIGH_ID));
    add(indHigh);

    indFuel.setXY(597, 191);
    indFuel.setBitmap(touchgfx::Bitmap(BITMAP_INDFUEL_ID));
    add(indFuel);

    indOil.setXY(385, 364);
    indOil.setBitmap(touchgfx::Bitmap(BITMAP_INDOIL_ID));
    add(indOil);

    indBatt.setXY(413, 194);
    indBatt.setBitmap(touchgfx::Bitmap(BITMAP_INDBATT_ID));
    add(indBatt);

    indPark.setXY(499, 155);
    indPark.setBitmap(touchgfx::Bitmap(BITMAP_INDPARK_ID));
    add(indPark);

    indDTC.setXY(488, 218);
    indDTC.setBitmap(touchgfx::Bitmap(BITMAP_INDDTC_ID));
    add(indDTC);

    indECT.setXY(449, 400);
    indECT.setBitmap(touchgfx::Bitmap(BITMAP_INDECT_ID));
    add(indECT);

    indLow.setXY(447, 290);
    indLow.setBitmap(touchgfx::Bitmap(BITMAP_INDLOW_ID));
    add(indLow);

    map_value.setXY(951, 9);
    map_value.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    map_value.setLinespacing(0);
    Unicode::snprintf(map_valueBuffer, MAP_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_1H44).getText());
    map_value.setWildcard(map_valueBuffer);
    map_value.resizeToCurrentText();
    map_value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_LQYM));
    add(map_value);

    map_label.setXY(885, 100);
    map_label.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    map_label.setLinespacing(0);
    Unicode::snprintf(map_labelBuffer, MAP_LABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_FXL2).getText());
    map_label.setWildcard(map_labelBuffer);
    map_label.resizeToCurrentText();
    map_label.setTypedText(touchgfx::TypedText(T___SINGLEUSE_W2NZ));
    add(map_label);

    map_units.setXY(775, 100);
    map_units.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    map_units.setLinespacing(0);
    Unicode::snprintf(map_unitsBuffer, MAP_UNITS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_13X6).getText());
    map_units.setWildcard(map_unitsBuffer);
    map_units.resizeToCurrentText();
    map_units.setTypedText(touchgfx::TypedText(T___SINGLEUSE_G76O));
    add(map_units);

    batt_value.setXY(951, 157);
    batt_value.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    batt_value.setLinespacing(0);
    Unicode::snprintf(batt_valueBuffer, BATT_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_TSMP).getText());
    batt_value.setWildcard(batt_valueBuffer);
    batt_value.resizeToCurrentText();
    batt_value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_391O));
    add(batt_value);

    batt_label.setXY(884, 247);
    batt_label.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    batt_label.setLinespacing(0);
    Unicode::snprintf(batt_labelBuffer, BATT_LABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_RUP7).getText());
    batt_label.setWildcard(batt_labelBuffer);
    batt_label.resizeToCurrentText();
    batt_label.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4QE0));
    add(batt_label);

    batt_units.setXY(827, 247);
    batt_units.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    batt_units.setLinespacing(0);
    Unicode::snprintf(batt_unitsBuffer, BATT_UNITS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_F7I8).getText());
    batt_units.setWildcard(batt_unitsBuffer);
    batt_units.resizeToCurrentText();
    batt_units.setTypedText(touchgfx::TypedText(T___SINGLEUSE_6YBF));
    add(batt_units);

    tps_value.setXY(951, 308);
    tps_value.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    tps_value.setLinespacing(0);
    Unicode::snprintf(tps_valueBuffer, TPS_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_AYOA).getText());
    tps_value.setWildcard(tps_valueBuffer);
    tps_value.resizeToCurrentText();
    tps_value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_MP7X));
    add(tps_value);

    tps_label.setXY(884, 400);
    tps_label.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    tps_label.setLinespacing(0);
    Unicode::snprintf(tps_labelBuffer, TPS_LABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_VMJT).getText());
    tps_label.setWildcard(tps_labelBuffer);
    tps_label.resizeToCurrentText();
    tps_label.setTypedText(touchgfx::TypedText(T___SINGLEUSE_L5WH));
    add(tps_label);

    tps_units.setXY(809, 399);
    tps_units.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    tps_units.setLinespacing(0);
    Unicode::snprintf(tps_unitsBuffer, TPS_UNITS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_L3HM).getText());
    tps_units.setWildcard(tps_unitsBuffer);
    tps_units.resizeToCurrentText();
    tps_units.setTypedText(touchgfx::TypedText(T___SINGLEUSE_RPXE));
    add(tps_units);

    lambda_value.setXY(951, 455);
    lambda_value.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    lambda_value.setLinespacing(0);
    Unicode::snprintf(lambda_valueBuffer, LAMBDA_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_2H8W).getText());
    lambda_value.setWildcard(lambda_valueBuffer);
    lambda_value.resizeToCurrentText();
    lambda_value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_TLZY));
    add(lambda_value);

    lambda_label.setXY(884, 547);
    lambda_label.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    lambda_label.setLinespacing(0);
    Unicode::snprintf(lambda_labelBuffer, LAMBDA_LABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_JQKX).getText());
    lambda_label.setWildcard(lambda_labelBuffer);
    lambda_label.resizeToCurrentText();
    lambda_label.setTypedText(touchgfx::TypedText(T___SINGLEUSE_RLOQ));
    add(lambda_label);

    lambda_units.setXY(695, 547);
    lambda_units.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    lambda_units.setLinespacing(0);
    Unicode::snprintf(lambda_unitsBuffer, LAMBDA_UNITS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_J843).getText());
    lambda_units.setWildcard(lambda_unitsBuffer);
    lambda_units.resizeToCurrentText();
    lambda_units.setTypedText(touchgfx::TypedText(T___SINGLEUSE_KCKH));
    add(lambda_units);

    ect_value.setXY(27, 9);
    ect_value.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    ect_value.setLinespacing(0);
    Unicode::snprintf(ect_valueBuffer, ECT_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_6GW0).getText());
    ect_value.setWildcard(ect_valueBuffer);
    ect_value.resizeToCurrentText();
    ect_value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_LD25));
    add(ect_value);

    ect_label.setXY(30, 97);
    ect_label.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    ect_label.setLinespacing(0);
    Unicode::snprintf(ect_labelBuffer, ECT_LABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_P413).getText());
    ect_label.setWildcard(ect_labelBuffer);
    ect_label.resizeToCurrentText();
    ect_label.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4T7D));
    add(ect_label);

    ect_units.setXY(169, 97);
    ect_units.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    ect_units.setLinespacing(0);
    Unicode::snprintf(ect_unitsBuffer, ECT_UNITS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_NFMY).getText());
    ect_units.setWildcard(ect_unitsBuffer);
    ect_units.resizeToCurrentText();
    ect_units.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ERKY));
    add(ect_units);

    iat_value.setXY(27, 157);
    iat_value.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    iat_value.setLinespacing(0);
    Unicode::snprintf(iat_valueBuffer, IAT_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_H85L).getText());
    iat_value.setWildcard(iat_valueBuffer);
    iat_value.resizeToCurrentText();
    iat_value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_Z15X));
    add(iat_value);

    iat_label.setXY(30, 246);
    iat_label.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    iat_label.setLinespacing(0);
    Unicode::snprintf(iat_labelBuffer, IAT_LABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_K94Y).getText());
    iat_label.setWildcard(iat_labelBuffer);
    iat_label.resizeToCurrentText();
    iat_label.setTypedText(touchgfx::TypedText(T___SINGLEUSE_S5UQ));
    add(iat_label);

    iat_units.setXY(110, 246);
    iat_units.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    iat_units.setLinespacing(0);
    Unicode::snprintf(iat_unitsBuffer, IAT_UNITS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_S9CZ).getText());
    iat_units.setWildcard(iat_unitsBuffer);
    iat_units.resizeToCurrentText();
    iat_units.setTypedText(touchgfx::TypedText(T___SINGLEUSE_XBZK));
    add(iat_units);

    oilp_value.setXY(27, 308);
    oilp_value.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    oilp_value.setLinespacing(0);
    Unicode::snprintf(oilp_valueBuffer, OILP_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_DHUY).getText());
    oilp_value.setWildcard(oilp_valueBuffer);
    oilp_value.resizeToCurrentText();
    oilp_value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_GFHB));
    add(oilp_value);

    oilp_label.setXY(30, 400);
    oilp_label.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    oilp_label.setLinespacing(0);
    Unicode::snprintf(oilp_labelBuffer, OILP_LABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_9VHS).getText());
    oilp_label.setWildcard(oilp_labelBuffer);
    oilp_label.resizeToCurrentText();
    oilp_label.setTypedText(touchgfx::TypedText(T___SINGLEUSE_BVOP));
    add(oilp_label);

    oilp_units.setXY(133, 400);
    oilp_units.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    oilp_units.setLinespacing(0);
    Unicode::snprintf(oilp_unitsBuffer, OILP_UNITS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_9IGG).getText());
    oilp_units.setWildcard(oilp_unitsBuffer);
    oilp_units.resizeToCurrentText();
    oilp_units.setTypedText(touchgfx::TypedText(T___SINGLEUSE_R7A4));
    add(oilp_units);

    fuelp_value.setXY(27, 455);
    fuelp_value.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    fuelp_value.setLinespacing(0);
    Unicode::snprintf(fuelp_valueBuffer, FUELP_VALUE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_C87O).getText());
    fuelp_value.setWildcard(fuelp_valueBuffer);
    fuelp_value.resizeToCurrentText();
    fuelp_value.setTypedText(touchgfx::TypedText(T___SINGLEUSE_0AFA));
    add(fuelp_value);

    fuelp_label.setXY(30, 547);
    fuelp_label.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    fuelp_label.setLinespacing(0);
    Unicode::snprintf(fuelp_labelBuffer, FUELP_LABEL_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_4VJ9).getText());
    fuelp_label.setWildcard(fuelp_labelBuffer);
    fuelp_label.resizeToCurrentText();
    fuelp_label.setTypedText(touchgfx::TypedText(T___SINGLEUSE_MPLH));
    add(fuelp_label);

    fuelp_units.setXY(243, 547);
    fuelp_units.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    fuelp_units.setLinespacing(0);
    Unicode::snprintf(fuelp_unitsBuffer, FUELP_UNITS_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_L52U).getText());
    fuelp_units.setWildcard(fuelp_unitsBuffer);
    fuelp_units.resizeToCurrentText();
    fuelp_units.setTypedText(touchgfx::TypedText(T___SINGLEUSE_INAE));
    add(fuelp_units);

    gauge1.setPosition(225, -1, 600, 600);
    gauge1.setCenter(300, 300);
    gauge1.setStartEndAngle(0, 240);
    gauge1.setRange(0, 8000);
    gauge1.setValue(0);
    gauge1.setNeedle(BITMAP_NEEDEL_ID, 16, 16);
    gauge1.setMovingNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    gauge1.setSteadyNeedleRenderingAlgorithm(touchgfx::TextureMapper::BILINEAR_INTERPOLATION);
    add(gauge1);

    flexButton1.setBoxWithBorderPosition(0, 0, 165, 601);
    flexButton1.setBorderSize(5);
    flexButton1.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 102, 153), touchgfx::Color::getColorFromRGB(0, 153, 204), touchgfx::Color::getColorFromRGB(0, 51, 102), touchgfx::Color::getColorFromRGB(51, 102, 153));
    flexButton1.setAlpha(0);
    flexButton1.setAction(flexButtonCallback);
    flexButton1.setPosition(859, 0, 165, 601);
    add(flexButton1);
}

Screen1ViewBase::~Screen1ViewBase()
{

}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButton1)
    {
        //Interaction1
        //When flexButton1 clicked change screen to Screen2
        //Go to Screen2 with no screen transition
        application().gotoScreen2ScreenNoTransition();
    }
}