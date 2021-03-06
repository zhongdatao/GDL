/*!
 * @file UI_tableview.ino
 * @brief 在屏幕上创建一个tableview控件，用户可以自定义在屏幕上创建一个tableview控件的参数
 * @n 用户可以选择不同的页来显示不同的内容
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
//   tableview 回调函数
void tbCallback(void * highLightPage){
	uint8_t * hl = (uint8_t *)highLightPage;
  if (*hl == 1) {
    //在屏幕上显示字符串
    ui.drawString(10, 200, "this is tab1", COLOR_RGB565_WHITE, ui.bgColor, 3, 0);
  }
  if (*hl == 2) {
    ui.drawString(10, 200, "this is tab2", COLOR_RGB565_WHITE, ui.bgColor, 3, 0);
  }
  if (*hl == 3) {
    ui.drawString(10, 200, "this is tab3", COLOR_RGB565_WHITE, ui.bgColor, 3, 0);
  }


}
String scan() {
  //Serial.println( touch.scan());
  return touch.scan();
}
void setup()
{
  
  Serial.begin(9600);
  //初始化触摸屏幕
  touch.begin();
  ui.begin();
  // 注册一个触摸扫描函数
  ui.attachTouch(scan);
  ui.setTheme(DFRobot_UI::MODERN);


 //创建一个tableview控件
 DFRobot_UI::sObject_t * tb = ui.creatTableview();
  //设置tableview的个数 和名字 最大页数为4
 ui.setTableviewName(tb,/*page=*/4,/*page1 name=*/"tab1",/*page2 name=*/"tab2",/*page3 name=*/"tab3",/*page4 name=*/"tab4");
  //设置回调函数
 tb->setCallBack(tb,tbCallback);
 ui.draw(tb);
}


void loop()
{  
   //刷新
   ui.refresh();


}