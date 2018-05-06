#!/bin/bash

cd c
meson _build
cd _build
ninja
LD_LIBRARY_PATH=. ./app

cd ../..

cd vala
meson _build
cd _build
ninja
LD_LIBRARY_PATH=. ./app
