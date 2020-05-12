#! /bin/bash

mkdir $1
cp image/main.c $1
cp image/makefile $1
cp -r image/include $1
cp -r image/libs $1
