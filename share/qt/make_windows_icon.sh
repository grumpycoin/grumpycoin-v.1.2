#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/grumpycoin.png
ICON_DST=../../src/qt/res/icons/grumpycoin.ico
convert ${ICON_SRC} -resize 16x16 grumpycoin-16.png
convert ${ICON_SRC} -resize 32x32 grumpycoin-32.png
convert ${ICON_SRC} -resize 48x48 grumpycoin-48.png
convert grumpycoin-16.png grumpycoin-32.png grumpycoin-48.png ${ICON_DST}

