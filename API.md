##GDL的API函数列表
*C++/Aduino示例教程
*参考
    *[drawCircle](####drawCircle)
    *[drawCircleHelper](####drawCircle)
    *[fillCircle](####drawCircle)
    *[fillCircleHelper](####drawCircle)
    *[drawTriangle](####drawCircle)
    *[fillTriangle](####drawCircle)
    *[drawRoundRect](####drawCircle)
    *[fillRoundRect](####rawCircle)
    *[drawBitmap](####drawCircle)
    *[drawBitmap](####drawCircle)
    *[drawBitmap](####drawCircle)
    *[drawXBitmap](####drawCircle)
    *[drawGrayscaleBitmap](####drawCircle)
    *[drawGrayscaleBitmap](####drawCircle)
    *[drawGrayscaleBitmap](####drawCircle)
    *[drawGrayscaleBitmap](#####drawCircle)
    *[drawRGBBitmap](####drawCircle)
    *[drawRGBBitmap](####drawCircle)
    *[drawRGBBitmap](####drawCircle)
    *[drawRGBBitmap](####drawCircle)
    *[drawChar](####drawCircle)
    *[drawChar](####drawCircle)
    *[getTextBounds](####awCircle)
    *[getTextBounds](####drawCircle)
    *[getTextBounds](#####drawCircle)
    *[setTextSize](####drawCircle)
    *[setTextSize](####drawCircle)
    *[setFont](####drawCircle)
	
	
**C++/Aduino示例教程
(```)
	代码
(```)
	
####drawCircle	
*C++/Arduino原型
`void GDL::drawCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color) `
*C原型
`void drawCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color)`
*说明:
`r` 在位置绘制一个半径为r的圆`(x0, y0)`。圆的直径为`2*r+1`。`color`可以使用指定的颜色进行绘制
*参数:
    * `x0`,`y0`:圆心的位置。
	* `r`:定义圆的大小:Radus = `r`。
	* `color`:定义绘制颜色。
*返回值:无
*例:
	

   


####drawCircleHelper
*C++/Arduino原型
` `
*C原型
`void drawCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername,uint16_t color)`
*说明:
`r` 在位置绘制一个半径为r的圆`(x0, y0)`。圆的直径为`2*r+1`。`cornername`
`color`可以使用指定的颜色进行绘制
*参数:
    * `x0`,`y0`:圆心的位置。
	* `r`:定义圆的大小:Radus = `r`。
	* `cornername`:
	* `color`:定义绘制颜色。
*返回值:无
*例:

####fillCircle	
*C++/Arduino原型
` `
*C原型
`void fillCircle(int16_t x0, int16_t y0, int16_t r, uint16_t color)`
*说明:
`r` 在位置绘制一个半径为r的实心圆`(x0, y0)`。圆的直径为`2*r+1`。`color`可以使用指定的颜色进行绘制
*参数:
    * `x0`,`y0`:圆心的位置。
	* `r`:定义圆的大小:Radus = `r`。
	* `color`:定义绘制颜色。
*返回值:无
*例:


####fillCircleHelper	
*C++/Arduino原型
` `
*C原型
`void fillCircleHelper(int16_t x0, int16_t y0, int16_t r, uint8_t cornername,int16_t delta, uint16_t color)`	
*说明:
`r` 在位置绘制一个半径为r的实心圆`(x0, y0)`。圆的直径为`2*r+1`。`cornername`
`color`可以使用指定的颜色进行绘制
*参数:
    * `x0`,`y0`:圆心的位置。
	* `r`:定义圆的大小:Radus = `r`。
	* `cornername`:
	* `color`:定义绘制颜色。
*返回值:无
*例:   

 
####drawTriangle	
*C++/Arduino原型
` `
*C原型
`void drawTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1,int16_t x2, int16_t y2, uint16_t color)`
*说明:
绘制一个空心三角形。参数为16位，并且多边形被裁剪​​为显示的大小。绘制了多个多边形，
以便它们完全匹配而没有重叠：绘制多边形的左侧，不绘制右侧。上侧只有在平的情况下才可以绘制。
*参数:
    * `x0`:X位置点0。
    * `y0`:X位置点0。	
	* `x1:X位置点1。
	* `y1`:X位置点1。
	* `x2`:X位置点2。
	* `y2`:X位置点2。
	* `color`:定义绘制颜色。
*返回值:无
*例:

  
####fillTriangle	
*C++/Arduino原型
` `
*C原型
`fillTriangle(int16_t x0, int16_t y0, int16_t x1, int16_t y1,int16_t x2, int16_t y2, uint16_t color)`      
*说明:
绘制一个实心三角形。参数为16位，并且多边形被裁剪​​为显示的大小。绘制了多个多边形，
以便它们完全匹配而没有重叠：绘制多边形的左侧，不绘制右侧。上侧只有在平的情况下才可以绘制。
*参数:
    * `x0`:X位置点0。
    * `y0`:X位置点0。	
	* `x1`:X位置点1。
	* `y1`:X位置点1。
	* `x2`:X位置点2。
	* `y2`:X位置点2。
	* `color`:定义绘制颜色。
*返回值:无
*例:

####drawRoundRect	
*C++/Arduino原型
` `
*C原型
`void drawRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h,int16_t radius, uint16_t color)`
*说明:  
从x / y位置（左上边缘）开始绘制一个具有圆形边缘的空心框/框架。盒子/框架有width w和height h。
框的某些部分可以在显示边界之外。边缘具有半径r。要求w >= 2*(r+1)和h >= 2*(r+1)。不检查此条件。
如果w或h小于，则行为未定义2*(r+1)。此过程使用当前的颜色索引绘制框。
对于单色显示器，颜色索引0将清除一个像素，颜色索引1将设置一个像素。
*参数:
    * `x`:左上边缘的X位置。
    * `y`:左上边缘的Y位置。	
	* `w`:矩形的宽度。
	* `h`:矩形的高度。
	* `r`:四个边缘的半径。
	* `color`:定义绘制颜色。
*返回值:无
*例:

  
####fillRoundRect	
*C++/Arduino原型
` `
*C原型
`void fillRoundRect(int16_t x0, int16_t y0, int16_t w, int16_t h,int16_t radius, uint16_t color)`  
*说明:  
从x / y位置（左上边缘）开始绘制一个具有圆形边缘的实心框/框架。盒子/框架有width w和height h。
框的某些部分可以在显示边界之外。边缘具有半径r。要求w >= 2*(r+1)和h >= 2*(r+1)。不检查此条件。
如果w或h小于，则行为未定义2*(r+1)。此过程使用当前的颜色索引绘制框。
对于单色显示器，颜色索引0将清除一个像素，颜色索引1将设置一个像素。
*参数:
    * `x`:左上边缘的X位置。
    * `y`:左上边缘的Y位置。	
	* `w`:矩形的宽度。
	* `h`:矩形的高度。
	* `r`:四个边缘的半径。
	* `color`:定义绘制颜色。
*返回值:无
*例:

####drawBitmap	
*C++/Arduino原型
` `
*C原型
`drawBitmap(int16_t x, int16_t y, const uint8_t bitmap[],int16_t w, int16_t h, uint16_t color)`

####drawBitmap	
*C++/Arduino原型
` `
*C原型
`drawBitmap(int16_t x, int16_t y, const uint8_t bitmap[],int16_t w, int16_t h, uint16_t color, uint16_t bg)`

####drawBitmap	
*C++/Arduino原型
` `
*C原型
`drawBitmap(int16_t x, int16_t y, uint8_t *bitmap,int16_t w, int16_t h, uint16_t color)`


    
    drawBitmap(int16_t x, int16_t y, uint8_t *bitmap,
      int16_t w, int16_t h, uint16_t color, uint16_t bg),
    drawXBitmap(int16_t x, int16_t y, const uint8_t bitmap[],
      int16_t w, int16_t h, uint16_t color),
    drawGrayscaleBitmap(int16_t x, int16_t y, const uint8_t bitmap[],
      int16_t w, int16_t h),
    drawGrayscaleBitmap(int16_t x, int16_t y, uint8_t *bitmap,
      int16_t w, int16_t h),
    drawGrayscaleBitmap(int16_t x, int16_t y,
      const uint8_t bitmap[], const uint8_t mask[],
      int16_t w, int16_t h),
    drawGrayscaleBitmap(int16_t x, int16_t y,
      uint8_t *bitmap, uint8_t *mask, int16_t w, int16_t h),
    drawRGBBitmap(int16_t x, int16_t y, const uint16_t bitmap[],
      int16_t w, int16_t h),
    drawRGBBitmap(int16_t x, int16_t y, uint16_t *bitmap,
      int16_t w, int16_t h),
    drawRGBBitmap(int16_t x, int16_t y,
      const uint16_t bitmap[], const uint8_t mask[],
      int16_t w, int16_t h),
    drawRGBBitmap(int16_t x, int16_t y,
      uint16_t *bitmap, uint8_t *mask, int16_t w, int16_t h),
    drawChar(int16_t x, int16_t y, unsigned char c, uint16_t color,
      uint16_t bg, uint8_t size),
    drawChar(int16_t x, int16_t y, unsigned char c, uint16_t color,
	      uint16_t bg, uint8_t size_x, uint8_t size_y),
    getTextBounds(const char *string, int16_t x, int16_t y,
      int16_t *x1, int16_t *y1, uint16_t *w, uint16_t *h),
    getTextBounds(const __FlashStringHelper *s, int16_t x, int16_t y,
      int16_t *x1, int16_t *y1, uint16_t *w, uint16_t *h),
    getTextBounds(const String &str, int16_t x, int16_t y,
      int16_t *x1, int16_t *y1, uint16_t *w, uint16_t *h),
    setTextSize(uint8_t s),
    setTextSize(uint8_t sx, uint8_t sy),
    setFont(const GFXfont *f = NULL);