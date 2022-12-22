# lilygo-epd47-RandomImageBox

E-paper and arduino tinkering project using https://github.com/Xinyuan-LilyGO/LilyGo-EPD47

## The project
The goal of this project was to create a box and display a random image on the e-paper by opening the box

## Components
The main and basically only needed component is LILYGO® T5-4.7 inch E-Paper as it includes the ESP32 MCU

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


## Building process
Steps will be added in the future
