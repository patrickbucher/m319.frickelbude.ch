#!/usr/bin/env bash

hugo && rsync -av public/ debian@91.92.155.156:/home/m319.frickelbude.ch/public/
