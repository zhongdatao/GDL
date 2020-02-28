/*!
 * @file UI_gestute.ino
 * @brief 在屏幕指定区域可以识别到用户所使用的手势，手势的名称会显示到文本框内
 * @n 本示例支持的主板有Arduino Uno, Leonardo, Mega2560, ESP32, ESP8266, FireBeetle-M0
 * 
 * @copyright  Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @licence     The MIT License (MIT)
 * @author [fengli](li.feng@dfrobot.com)
 * @version  V1.0
 * @date  2019-12-6
 * @get from https://www.dfrobot.com
 * @url https://github.com/DFRobot/DFRobot_GDL/src/DFRpbot_UI
*/


#include "DFRobot_UI.h"
#include "Arduino.h"
#include "DFRobot_GDL.h"
#include "DFRobot_Touch.h"
/*M0*/
#if defined ARDUINO_SAM_ZERO
#define TFT_DC  7
#define TFT_CS  5
#define TFT_RST 6
#define TFT_BL  9
#define TOUCH_CS 2
/*ESP32 and ESP8266*/
#elif defined(ESP32) || defined(ESP8266)
#define TFT_DC  D2
#define TFT_CS  D3
#define TFT_RST D4
#define TFT_BL  D5
#define TOUCH_CS D6
/*AVR系列主板*/
#else
#define TFT_DC  2
#define TFT_CS  3
#define TFT_RST 4
#define TFT_BL  5
#define TOUCH_CS 6
#endif

/**
 * @brief Constructor  当触摸采用XPT2046芯片时，可以调用此构造函数
 * @param cs  SPI片选信号
 * @param rst  复位信号
 * @param irq  中断信号
 */
DFRobot_Touch_XPT2046 touch(/*cs=*/TOUCH_CS); 

/**
 * @brief Constructor  当屏采用硬件SPI通信，驱动IC是st7789，屏幕分辨率是240x320时，可以调用此构造函数
 * @param dc  SPI通信的命令/数据线引脚
 * @param cs  SPI通信的片选引脚
 * @param rst  屏的复位引脚
 */
DFRobot_ILI9341_240x320_HW_SPI screen(TFT_DC,TFT_CS,TFT_RST,TFT_BL);

/**
 * @brief 构造函数
 * @param gdl 屏幕对象
 * @param touch 触摸对象
 * @param width 屏幕的宽度.
 * @param height 屏幕的高度.
 */
DFRobot_UI ui(&screen, &touch,/*width=*/240,/*height=*/320);

//声明文本框
DFRobot_UI::sObject_t *tb;

void setup()
{
  
  Serial.begin(9600);
  ui.begin();
  // 设置UI的主题，有两种主题可供选择 1.CLASSIC ，2.MODERN。
  ui.setTheme(DFRobot_UI::MODERN);
  
  //创建一个文本框控件
  tb = ui.creatText();
  //在屏幕上创建一个文本框控件，根据自定义或初始化的参数绘制文本框
  ui.draw(tb);
  /**
   * @brief 设置触摸的手势识别区域
   */
  ui.setGestureArea(/*x=*/40,/*y=*/100,/*width=*/150,/*height=*/150);
}


void loop()
{
    /**
     * @brief 更新触摸点的数据
     */
    ui.updateCoordinate();
    
    // getGestures()： 获取手势
    switch(ui.getGestures()){
      //setText：使文本框显示字符串
      case ui.UPGLIDE : ui.setText(tb,"upwards slide"); break;
      case ui.DOWNGLIDE : ui.setText(tb,"down slide"); break;
      case ui.LEFTGLIDE : ui.setText(tb,"left slide"); break;
      case ui.RIGHTGLIDE : ui.setText(tb,"right slide"); break;
      case ui.LONGPRESSDE : ui.setText(tb,"long press"); break;
      case ui.SINGLECLICK : ui.setText(tb,"click"); break;
      case ui.DOUBLECLICK : ui.setText(tb,"double click"); break;
      default  :  break;
      }
   //刷新
   ui.refresh();
}