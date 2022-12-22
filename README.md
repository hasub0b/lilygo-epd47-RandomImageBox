# lilygo-epd47-RandomImageBox

E-paper and arduino tinkering project using https://github.com/Xinyuan-LilyGO/LilyGo-EPD47

<sub>NOTE: Original idea was to fetch new picture data from web but without a sd card I wasn't able to do this. Also the chip alone can only store about 4 pictures</sub>

## The project
The goal of this project was to create a box and display a random image on the e-paper by opening the box

![working project](https://github.com/hasub0b/lilygo-epd47-RandomImageBox/blob/main/project%20pictures/ezgif.com-gif-maker.gif)

## Components
The main and basically only needed component is [LILYGO® T5-4.7 inch E-Paper](https://pages.github.com/](http://www.lilygo.cn/prod_view.aspx?TypeId=50061&Id=1384&FId=t3:50061:3)) as it includes the ESP32 MCU 

## Converting images to be displayable by the E-Paper

Use photo editor like Paint to make sure the photo is about correct size (960x540) and save it as a .png

Make sure to have python istalled

Go to the scripts folder

Install pillow using
```
python -m pip install pillow
```
Convert image to .h file using

```
python imgconvert.py -i image.png -n pic -o pic.h
```
Add .h files to drawImages folder

### ISSUE:
The chip can store only about 4 pictures in .h files. MicroSD card module should be added to be able to store more pictures

## Building process

![Cicuit](https://github.com/hasub0b/lilygo-epd47-RandomImageBox/blob/main/project%20pictures/IMG_20221218_152951.jpg)

Steps will be added in the future
